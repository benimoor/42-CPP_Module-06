#include "./Base.hpp"
#include "./Other.hpp"

Base	*generate(void)
{
	std::srand(time(0));
	switch (std::rand() % 4)
	{
		case 0: return new A; break ;
		case 1: return new B; break ;
		case 2: return new C; break ;
		default: std::cout << "Sorry! I don't generate class, please try again :)" << std::endl;
	}
	return nullptr;
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "Actual type of the object pointed to by p: \"A\"" << std::endl;
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "Actual type of the object pointed to by p: \"B\"" << std::endl;
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "Actual type of the object pointed to by p: \"C\"" << std::endl;
	else
		std::cout << "This object is a unknown type!" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "Actual type of the object pointed to by p: \"A\"" << std::endl;
		return ;
	}
	catch(const std::exception& e) { }
	
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "Actual type of the object pointed to by p: \"B\"" << std::endl;
		return ;
	}
	catch(const std::exception& e) { }
	
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "Actual type of the object pointed to by p: \"C\"" << std::endl;
		return ;
	}
	catch(const std::exception& e) { }
}

int main()
{
	Base	*randomPTR = generate();
	Base	&randomREF = *randomPTR;

	if (!randomPTR)
		return 1;

	identify(randomPTR);
	identify(randomREF);

	delete randomPTR;
	
	return 0;
}