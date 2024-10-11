#include <iostream>


class Counter
{
private: 
	int value;

public:
	Counter() : value(1) {}

	Counter(int initValue) : value(initValue) {}

	void increment()
	{
		++value;
	}

	void decrement()
	{
		--value;
	}

	int getValue()
	{
		return value;
	}
};


int main(int argc, char** argv)
{
	std::string userAnswer;

	std::cout << "Do you want to specify the initial value of the counter ? Enter yes or no : ";
	std::cin >> userAnswer;

	Counter counter;

	if (userAnswer == "yes")
	{
		int userValue;
		std::cout << "Enter the initial counter value: ";
		std::cin >> userValue;
		counter = Counter(userValue);
	}
	
	char command;
	while (true)
	{
		std::cout << "Enter the command('+', '-', '=' or 'x') :";
		std::cin >> command;

		if (command == '+')
		{
			counter.increment();
		}
		else if (command == '-')
		{
			counter.decrement();
		}
		else if (command == '=')
		{
			std::cout << counter.getValue()<< std::endl;
		}
		else if (command == 'x')
		{
			std::cout << "Goodbye!" << std::endl;
		}
		else
		{
			std::cout << "Invalid command.";
		}
	}

	return 0;
}