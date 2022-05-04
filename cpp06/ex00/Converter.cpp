#include "Converter.hpp"

Converter::Converter() {}

Converter::Converter(const std::string arg) : _arg(arg) {
	if (!getType()) 
		throw std::exception();
	if (!validType()) 
		throw std::exception();
}

Converter::Converter(const Converter &src) {
	*this = src;
}

Converter::~Converter() {}

Converter			&Converter::operator=(const Converter &rhs) {
	_arg = rhs._arg;
	return *this;
}

const std::string	Converter::getArg() const {
	return _arg;
}

int					Converter::getType() const {
	int i = 0;

	if (_arg.length() == 1 && !isdigit(_arg[0]))
		return CHAR;
	if (_arg.compare("+inff") == 0 || _arg.compare("-inff") == 0 || _arg.compare("nanf") == 0)
		return FLOAT;
	if (_arg.compare("+inf") == 0 || _arg.compare("-inf") == 0 || _arg.compare("nan") == 0)
		return DOUBLE;
	if (_arg[i] == '+' || _arg[i] == '-')
		i++;
	while (isdigit(_arg[i]))
		i++;
	if (!_arg[i])
		return INT;
	if (_arg[i] == '.')
		i++;
	if (!_arg[i])
		return 0;
	while (isdigit(_arg[i]))
		i++;
	if (_arg[i] == 'f' && !_arg[i + 1])
		return FLOAT;
	if (!_arg[i])
		return DOUBLE;
	return 0;
}

bool					Converter::validType() const {
	long intVal;
	float floatVal;
	double doubleVal;

	if (_type == INT) {
		intVal = strtol(_arg.c_str(), NULL, 10);
		if (errno == ERANGE || intVal > std::numeric_limits<int>::max() || intVal < std::numeric_limits<int>::min())
			return false;
	}
	if (_type == FLOAT) {
		floatVal = strtof(_arg.c_str(), NULL);
		(void)floatVal;
		if (errno == ERANGE)
			return false;
	}
	if (_type == DOUBLE) {
		doubleVal = strtof(_arg.c_str(), NULL);
		(void)doubleVal;
		if (errno == ERANGE)
			return false;
	}
	return true;
}
