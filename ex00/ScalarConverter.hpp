#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include <climits>
#include <limits>

class ScalarConverter
{
	std::string	argument;
public:
	ScalarConverter();
	ScalarConverter(const ScalarConverter& other);
	ScalarConverter& operator = (const ScalarConverter& other);
	~ScalarConverter();

	int		checkPseudoLiterals(std::string literal);
	int		ScalarConverter_num(std::string literal);

	
	int		checkChar(std::string literal);
	int		checkInt(std::string literal);
	int		checkFloat(std::string literal);
	int		checkDouble(std::string literal);

	
	std::string	getArgument() const;
	void		setArgument(std::string new_argument);

	
	operator	char();
	operator	int();
	operator	float();
	operator 	double();
};

#endif