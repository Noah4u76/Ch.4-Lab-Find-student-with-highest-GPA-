//
// File: main.cpp
// Description: Find student with highest GPA
// Created: Sun. March 12, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#include <iostream>
#include <iomanip>
#include <string>
#include "Course.h"
using namespace std;

int main() {
   Course course;
   string fname;
   string lname;
   string gpa;
   
   // Example students for testing
   course.AddStudent(Student("Henry", "Nguyen", 3.5));   
   course.AddStudent(Student("Brenda", "Stern", 2.0)); 
   course.AddStudent(Student("Lynda", "Robison", 3.2)); 
   course.AddStudent(Student("Sonya", "King", 3.9)); 
   
   Student student = course.FindStudentHighestGpa();
	cout << "Top student: " << student.GetFirst() << " " << student.GetLast() << " (GPA: " << student.GetGPA() << ")" << endl;
	
   return 0;
}