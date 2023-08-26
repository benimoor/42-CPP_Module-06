#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data
{
	std::string	value;

public:
	Data();
	Data(const Data& other);
	Data(const std::string& new_value);
	Data& operator = (const Data& other);
	~Data();

	std::string	getValue() const;
};

#endif