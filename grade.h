#pragma once
#ifndef GUARD_grade_h
#define GUARD_grade_h
#include <list>
//grade.h
#include <vector>
#include "Student_info.h"
bool fgrade(const Student_info&);
double grade(double, double, double); //header���Ͽ����� �Ű����� �̸� �ʿ���� ���� �ڷ����� ǥ�� (����, ����, ����)
double grade(double, double, vector<double>&);
double grade(const Student_info&);
list<Student_info> extract_fails(list<Student_info>& );

#endif