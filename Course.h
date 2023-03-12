//
// File: Course.h
// Description: Find student with highest GPA
// Created: Sun. March 12, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#ifndef COURSE_H
#define COURSE_H

#include <vector>
#include "Student.h"

class Course {
   public: 
      Student FindStudentHighestGpa();
      void AddStudent(Student s);
   
   private:
      vector<Student> roster; //collection of Student objects
};

#endif