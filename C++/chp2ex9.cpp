#include<iostream>
#include<string>

using std::cin; using std::cout;
using std::endl; using std::string;
int main()
{
	std::cout << "����ڰ� �Է��� �ΰ��� ������ � ���� ū�� �˷��޶�";
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