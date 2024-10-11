#include <iostream>
#include <string>

class Calculator
{
private:
	double num1;
	double num2;

public:
	double add()
	{
		return num1 + num2;
	}
	double multiply()
	{
		return num1 * num2;
	}
	double subtract_1_2()
	{
		return num1 - num2;
	}
	double subtract_2_1()
	{
		return num2 - num1;
	}
	double divide_1_2() //на нуль делить нельзя. if
	{
		return num1 / num2;
		if (num2 == 0)
		{
			std::cout << "Division by 0 is impossible!" << std::endl;
			return 0;
		}
	}
	double divide_2_1() //на нуль делить нельзя. if
	{
		return num2 / num1;
		if (num1 == 0)
		{
			std::cout << "Division by 0 is impossible!" << std::endl;
			return 0;
		}
	}

	bool set_num1(double num1)
	{
		if (num1 != 0)
		{
			this->num1 = num1;
			return true;
		}
		return false;
	}

	bool set_num2(double num2)
	{
		if (num2 != 0)
		{
			this->num2 = num2;
			return true;
		}
		return false;
	}
};

int main(int argc, char** argv)
{
	Calculator calculator;

	while (true)
	{
		double num1;
		double num2;

		std::cout << "Enter num1: ";
		std::cin >> num1;
		if (!calculator.set_num1(num1))
		{
			std::cout << "Inavalid input!" << std::endl;
			continue;
		}

		std::cout << "Enter num2: ";
		std::cin >> num2;
		if (!calculator.set_num2(num2))
		{
			std::cout << "Inavalid input!" << std::endl;
			continue;
		}

		std::cout << "num1 + num2 = " << calculator.add() << std::endl;
		std::cout << "num1 - num2 = " << calculator.subtract_1_2() << std::endl;
		std::cout << "num2 - num1 = " << calculator.subtract_2_1() << std::endl;
		std::cout << "num1 * num2 = " << calculator.multiply() << std::endl;
		std::cout << "num1 / num2 = " << calculator.divide_1_2() << std::endl;
		std::cout << "num2 / num1 = " << calculator.divide_2_1() << std::endl;
	}

	return 0;
}
