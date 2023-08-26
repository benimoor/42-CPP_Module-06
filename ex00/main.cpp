#include <iostream>
#include "./ScalarConverter.hpp"


int	main(int argc, char **argv)
{
	char	c_num = 0;
	int		i_num = 0;
	float	f_num = 0;
	double	d_num = 0;
	
	if (argc != 2)
		std::cout << "Error\nEnter an argument" << std::endl;
	else
	{
		ScalarConverter conv;
		conv.setArgument(argv[1]);
		if (conv.ScalarConverter_num(conv.getArgument()) == 0)
			return 0;

		c_num = static_cast<char>(conv);
		i_num = static_cast<int>(conv);
		f_num = static_cast<float>(conv);
		d_num = static_cast<double>(conv);
	}
	return 0;
}