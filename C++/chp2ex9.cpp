#include<iostream>
#include<string>

using std::cin; using std::cout;
using std::endl; using std::string;
int main()
{
	std::cout << "사용자가 입력한 두개의 숫자중 어떤 것이 큰지 알려달라";
	int num1, num2;

	std::cin >> num1;
	std::cin >> num2;

	if (num1 > num2) {
		std::cout << num1;
	}
	else if (num1 < num2) {
		std::cout << num2;

	}
}