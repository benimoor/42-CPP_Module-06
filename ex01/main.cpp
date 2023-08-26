#include "./Data.hpp"

uintptr_t	serialize(Data* ptr) { return reinterpret_cast<uintptr_t>(ptr); }
Data*		deserialize(uintptr_t raw) { return reinterpret_cast<Data*>(raw); }

int main()
{
	Data		data("Gago");
	uintptr_t	ptr = serialize(&data);
	Data		*dataPTR = deserialize(ptr);

	std::cout << "addr. data:\t" << &data << std::endl;
	std::cout << "addr. dataPTR:\t" << dataPTR << std::endl << std::endl;

	std::cout << "value data:\t" << data.getValue() << std::endl;
	std::cout << "value dataPTR:\t" << dataPTR->getValue() << std::endl;
}