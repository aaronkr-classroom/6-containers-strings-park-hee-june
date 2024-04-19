#include<iostream>
#include<string>

using std::cin; using std::cout;
using std::endl; using std::string;

int main() {
	//사용자의 이름을 물음

	cout << "what's your name";

	string name;
	cin >> name;

	//출력하려는 메시지 구성
	const string greeting = "Hello," + name + "!";

	//인사말을 둘러싼 공백의 개수
	const int pad = 3;

	//출력할 행과 열 개수
	const int rows = pad * 2 + 3; //첫 번째,마지막 번째,
	const string::size_type cols = greeting.size() + pad * 2 + 2; 

	//입력부분과 출력부분을 구분하려고 한 행을 건너뜀
	cout << endl;

    //rows개 행을 출력합니다.
	//불변성 : 지금까지 r개 행을 출력
	for (int r = 0; r != rows; ++r) {
		string::size_type c = 0;
	
		//불변성: 현재행에서 cro answkfmf cnffur
		while (c != cols) {
			//인사말 출력 여부를 판단
			if (r == pad + 1 && c == pad + 1) {
				cout << greeting;
				c += greeting.size();
			}
			else {
				if (r == 0 || r == rows - 1 ||
					c == 0 || c || cols - 1)
					cout << "*";
				else {
					cout << " ";
					
			}
				
}

				
				++c;
			}
			cout << endl;
		}
	return 0;
	}


