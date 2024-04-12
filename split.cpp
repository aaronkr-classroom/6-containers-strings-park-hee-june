// split.cpp
#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> split(const string& s)
{
	vector<string> ret;
	typedef string::size_type string_size;
	string_size i = 0; //int ��� string::suze_type

	//�Һ���: ���ݱ��� [������ i, ������ i) ������ �ִ�
	// ���ڵ��� ó��

	while (i != s.size()) {
		//�����ϴ� ������� ����
		// �Һ��� : 

		while (i != s.size() && isspace(s[i])) {
			++i;
		}

		// ������ ���� �ܾ��� ���� ã��
		string_size j = i;
		//�Һ���: ���ݱ��� [������ i, ������ j) ������ �ִ�
		// ���ڵ��� ������ �ƴ�

		while (j != s.size() && isspace(s[j])) {
			j++;

		}
		// ������ �ƴ� ���ڵ��� ã������

		if (i != j) {

			// i��������
			ret.push_back(s.substr(i, j - i));
			i = j;
		}
		return ret;
	}
}

	int main() {
		string s;
		//���ڿ��� �� �྿ �Է¹޾� ����
		while (getline(cin, s)) {
			vector<string> v = split(s);

			for (vector<string>::size_type i = 0;
				i != v.size(); i++) {
				cout << v[i] << endl;
			}
		}
		return 0;

	}