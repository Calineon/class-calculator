#include <iostream>
class calculator {
public:
	int num1;
	char ch;
	int num2;
	int result;
};
int main() {
	calculator print;
	int i = 1;
		while (i<=4) {
			i++;
			std::cout << "print to first number" << "\n";
			std::cin >> print.num1;
			std::cout << "print to char:+,-,*,/" << "\n";
			std::cin >> print.ch;
			std::cout << "print to secend number" << "\n";
			std::cin >> print.num2;
			switch (print.ch) {
			case '+':
				print.result = print.num1 + print.num2;
				std::cout << "add sum is:" << print.result << "\n";
				break;
			case '-':
				print.result = print.num1 - print.num2;
				std::cout << "minus sum is:" << print.result << "\n";
				break;
			case '*':
				print.result = print.num1 * print.num2;
				std::cout << "multyply sum is:" << print.result << "\n";
				break;
			case '/':
				print.result = print.num1 / print.num2;
				std::cout << "division sum is:" << print.result << "\n";
				break;
			}
		}
	return 0;
