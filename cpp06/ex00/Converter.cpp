#include "Converter.hpp"

Converter::Converter() {}

Converter::Converter(const std::string arg) : _arg(arg)
{
	_type = getType();
	if (_type == -1)
		throw std::exception();
}

Converter::Converter(const Converter &src)
{
	*this = src;
}

Converter::~Converter() {}

Converter &Converter::operator=(const Converter &rhs)
{
	_arg = rhs._arg;
	_type = rhs._type;
	return *this;
}

const std::string Converter::getArg() const
{
	return _arg;
}

int Converter::getType() const
{
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
	return -1;
}

bool Converter::validType() const
{
	long intVal;
	float floatVal;
	double doubleVal;

	if (_type == INT)
	{
		intVal = strtol(_arg.c_str(), NULL, 10);
		if (errno == ERANGE || intVal > std::numeric_limits<int>::max() || intVal < std::numeric_limits<int>::min())
			return false;
	}
	if (_type == FLOAT)
	{
		floatVal = strtof(_arg.c_str(), NULL);
		(void)floatVal;
		if (errno == ERANGE)
			return false;
	}
	if (_type == DOUBLE)
	{
		doubleVal = strtof(_arg.c_str(), NULL);
		(void)doubleVal;
		if (errno == ERANGE)
			return false;
	}
	return true;
}

void Converter::printAll(void) const
{
	void	(Converter::*type[4]) (void) const = {
			&Converter::printIntType,
			&Converter::printFloatType,
			&Converter::printDoubleType,
			&Converter::printCharType };

	if (_type >= 0 && _type < 4)
		(this->*type[_type])();
	else
		std::cout << "Imposible to convert" << std::endl;
}


void	Converter::printCharType(void) const
{
	char v = _arg[0];

	std::cout << "char: " << "\'" << v << "\'" << std::endl;
	std::cout << "int: " << static_cast<int>(v) << std::endl;
	std::cout << "float: " << static_cast<float>(v) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(v) << ".0" << std::endl;	
}

void	Converter::printIntType(void) const
{
	int v = static_cast<int>(strtol(_arg.c_str(), NULL, 10));

    std::cout << "char: ";
    if (v >= 0 && v <= std::numeric_limits<unsigned char>::max())
    {
        if (isprint(static_cast<unsigned char>(v)))
            std::cout << "\'" << static_cast<char>(v) << "\'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
    }
    else
        std::cout << "impossible" << std::endl;

    std::cout << "int: " << v << std::endl;
    std::cout << "float: " << static_cast<float>(v) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(v) << ".0" << std::endl;
}

void	Converter::printFloatType(void) const
{
	float v = static_cast<float>(strtod(_arg.c_str(), NULL));

	std::cout << "char: ";
	if (v >= 0 && v <= std::numeric_limits<unsigned char>::max())
	{
		if (isprint(static_cast<unsigned char>(v)))
			std::cout << "\'" << static_cast<char>(v) << "\'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;

	std::cout << "int: ";
	if (v <= std::numeric_limits<int>::max()
		&& v >= std::numeric_limits<int>::min() \
		&& !(v > 0 && static_cast<int>(v) < 0))
		std::cout << static_cast<int>(v) << std::endl;
	else
		std::cout << "impossible" << std::endl;
	
	if (v <= std::numeric_limits<int>::max()
		&& v >= std::numeric_limits<int>::min() \
		&& !(v > 0 && static_cast<int>(v) < 0) \
		&& v - static_cast<int>(v) == 0)
	{
		std::cout << "float: " << v << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(v) << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << v << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(v) << std::endl;
	}
}

void	Converter::printDoubleType(void) const
{
	double v = strtod(_arg.c_str(), NULL);

	std::cout << "char: ";
	if (v >= 0 && v <= std::numeric_limits<unsigned char>::max())
	{
		if (isprint(static_cast<unsigned char>(v)))
			std::cout << "\'" << static_cast<char>(v) << "\'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;

	std::cout << "int: ";
	if (v <= std::numeric_limits<int>::max() \
		&& v >= std::numeric_limits<int>::min() \
		&& !(v > 0 && static_cast<int>(v) < 0))
		std::cout << static_cast<int>(v) << std::endl;
	else
		std::cout << "impossible" << std::endl;

	if (v <= std::numeric_limits<int>::max()
		&& v >= std::numeric_limits<int>::min() \
		&& !(v > 0 && static_cast<int>(v) < 0) \
		&& v - static_cast<int>(v) == 0)
	{
		std::cout << "float: " << static_cast<float>(v) << ".0f" << std::endl;
		std::cout << "double: " << v << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << static_cast<float>(v) << "f" << std::endl;
		std::cout << "double: " << v << std::endl;
	}
}
