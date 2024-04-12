// chp4ex0.cpp
// �߰����, �⸻���, �׸��� ���� ���� ��� �ް�
// ������ �߰��� ��� ������ ����ϱ�.

// include �����Ҷ� ���ĺ� ������ ���߸� ����
#include <algorithm>
#include <fstream> // ������ ����ϱ� ����
#include <ios>
#include <iomanip>
#include <iostream>  // cin/cout �� ����ϱ� ����
#include <string>
#include <vector>
#include <stdexcept>
#include "grade.h"
#include "median.h"
#include "Student_info.h"

using namespace std;

int main() {
    //���Ͻ�Ʈ�� ����� "txt" ������ �б�
    ifstream student_file("grades.txt");

    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0; //maxlen �ʱ�ȭ

    // �л� �̸��� ��� ������ �о� �����ϰ� ���� �� �̸��� ã��.
    while (read(student_file, record)) {
        // cin�� ����ϸ� ���� ����� �Է¸� ���� �� �ִ�.
        // student_file�� ifstream�̷��� ���� �Է� ���� �� �ִ�.
        maxlen = max(maxlen, record.name.size()); // Aaron max(0,5) = Aaron�̸� 5����
        students.push_back(record);
    }

    // �л� ������ ���ĺ������� ����
    sort(students.begin(), students.end(), compare);

    for (vector<Student_info>::size_type i = 0; i != students.size(); ++i) {
        // �̸��� ������ ������ �����Ͽ� maxlen + 1���� ���ڸ� ���
        cout << students[i].name << string(maxlen + 1 - students[i].name.size(), ' ');

        // ���� ������ ����� ����
        try {
            double final_grade = grade(students[i]);
            // ����� ���
            streamsize prec = cout.precision(); // ���� cout precision
            cout << "Final grade: " << setprecision(3)
                << final_grade << setprecision(prec) << endl;
        }
        catch (domain_error e) {
            cout << e.what();
        }
        cout << endl;
    }
    return 0;
} // main ��