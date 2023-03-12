//
// File: Course.cpp
// Description: Find student with highest GPA
// Created: Sun. March 12, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#include <iostream>
#include "Course.h"
using namespace std;

Student Course::FindStudentHighestGpa() {
  Student topStudent = roster.at(0);
  int maxVal = 0;
   for (int i = 0; i < roster.size(); i++) {
     Student student = roster.at(i);
     double grade = student.GetGPA();

  if (grade > maxVal) {
    maxVal = grade;
    topStudent = roster.at(i);
  }
}
  return topStudent;
}

void Course::AddStudent(Student s) {
	roster.push_back(s);
}