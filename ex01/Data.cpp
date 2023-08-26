#include "./Data.hpp"

Data::~Data() { }
Data::Data() : value("") { }
Data::Data(const Data& other) : value(other.value) { }
Data::Data(const std::string& new_value) { this->value = new_value; }
Data&	Data::operator=(const Data& other) { if (this != &other) this->value = other.value; return *this; }
std::string	Data::getValue() const { return this->value; }
