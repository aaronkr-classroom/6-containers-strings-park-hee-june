#include<iostream>
#include<string>
using std::cin; using std::cout;
using std::endl; using std::string;
int main() {

	int sum = 1;
	for (int i = 1; i < 10; i++) {
		sum = sum * i;
	}
	cout << sum;
	return 0;
}