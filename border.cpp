// border.cpp
#include <cctype>
#include <iostream>
#include <string>
#include <vector>

// #include "split.h"

using namespace std;

vector<string> split(const string& s) {
    vector<string> ret;
    typedef string::size_type string_size;
    string_size i = 0; // int ��� string::size_type ����ؾ��� 

    // �Һ���: ���ݱ��� [������i, ������i) ������ �ִ�
    // ���ڵ��� ó��
    while (i != s.size()) {
        // �����ϴ� ������� ����
        // �Һ���: ���ݱ��� [������i, ������i) ������ �ִ�
        // ���ڵ��� ��� ����
        while (i != s.size() && isspace(s[i])) {
            ++i;
        }

        // ������ ���� �ܾ��� ���� ã��
        string_size j = i;

        // �Һ���: ���ݱ��� [������j, ������j) ������ �ִ�
        // ���ڵ��� ������ �ƴ�
        while (j != s.size() && !isspace(s[j])) {
            j++;
        }

        // ������ �ƴ� ���ڵ��� ã���� ��
        if (i != j) {
            // i�������� j-i���� ���ڵ��� s�� ����
            ret.push_back(s.substr(i, j - i));
            i = j;
        }
    }
    return ret;
}

string::size_type width(const vector<string>& v) {
    string::size_type maxlen = 0;

    for (vector<string>::size_type i = 0; i != v.size(); i++) {
        maxlen = max(maxlen, v[i].size());
    }

    return maxlen;
}

vector<string> frame(const vector<string>& v) {
    vector<string> ret;
    string::size_type maxlen = width(v);
    string border(maxlen + 4, '*'); // *********************

    // ��� �׵θ��� �߰�
    ret.push_back(border);

    // �� ���� ��ǥ�� �������� �ѷ�����
    // ���ڿ����� ���� �߰�
    for (vector<string>::size_type i = 0; i != v.size(); i++) {
        ret.push_back("* " + v[i] + string(maxlen - v[i].size(), ' ') + " *");
        // * 
    }

    // �ϴ� �׵θ��� �߰�
    ret.push_back(border);
    return ret;
}

// ���� ���� = vertical concat
vector<string> vcat(const vector<string>& top, const vector<string>& bottom) {
    // ���� ���� �׸��� ����
    vector<string> ret = top;

    // �Ʒ��� ���� �׸��� ����
    for (vector<string>::const_iterator it = bottom.begin(); it != bottom.end(); ++it) {
        ret.push_back(*it); //�ݺ��� ����ϸ� �������ؾ� ��
    }

    return ret;
}

// ���� ���� = horizontal concat
vector<string> hcat(const vector<string>& left, const vector<string>& right) {
    vector<string> ret;

    // �� ���� �׸� ���̿� ���� �ϳ��� ����
    string::size_type width1 = width(left) + 1; // ������ ���� maxlen

    // ���� ���� �׸��� ������ ���� �׸��� ��Ҹ� ���캸�� �ε���
    vector<string>::size_type i = 0, j = 0;

    // �� ���� �׸��� ��� ���� ���캽
    while (i != left.size() || j != right.size()) {
        // �� ���� �׸��� ���ڵ��� ������ ���ο� ���ڿ��� ����
        string s;

        // ���� ���� �׸����� �� �ϳ��� ����
        if (i != left.size()) {
            s = left[i++];
        }

        // ������ �����Ͽ� ���ڿ��� ������ �ʺ���� ä��
        s += string(width1 - s.size(), ' ');

        // ������ ���� �׸����� �� �ϳ��� ����
        if (j != right.size()) {
            s += right[j++];
        }

        // ���ο� ���� �׸��� ���ڿ� s�� �߰�
        ret.push_back(s);
    }
    return ret;
}

// 1. split() �������� ����ϱ�
// 2. vcat() ����ϱ�
// 3. hcat() ����ϱ� 
// 4. out.txt ���Ͽ��� ��� ��� �����ϱ�

/*
int main() {
   string s;

   while (getline(cin, s)) {
      vector<string> v = split(s); // ���� = split() ��������
      frame(v);
   }

   return 0;
}
*/