#include<iostream>
#include<string>

using std::cin; using std::cout;
using std::endl; using std::string;

int main() {
	//������� �̸��� ����

	cout << "what's your name";

	string name;
	cin >> name;

	//����Ϸ��� �޽��� ����
	const string greeting = "Hello," + name + "!";

	//�λ縻�� �ѷ��� ������ ����
	const int pad = 3;

	//����� ��� �� ����
	const int rows = pad * 2 + 3; //ù ��°,������ ��°,
	const string::size_type cols = greeting.size() + pad * 2 + 2; 

	//�Էºκа� ��ºκ��� �����Ϸ��� �� ���� �ǳʶ�
	cout << endl;

    //rows�� ���� ����մϴ�.
	//�Һ��� : ���ݱ��� r�� ���� ���
	for (int r = 0; r != rows; ++r) {
		string::size_type c = 0;
	
		//�Һ���: �����࿡�� cro answkfmf cnffur
		while (c != cols) {
			//�λ縻 ��� ���θ� �Ǵ�
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


