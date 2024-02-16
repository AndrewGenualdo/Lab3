//  filename:  student.h

/*
       Author:  Wei Kian Chen
  Modified by: Drew Genualdo
        Class:  CSI-240-04
   Assignment: Lab 3
Date Assigned: February 9, 2024
     Due Date: February 13, 2024, 13:00

Description:
  The file declare the Student class with operator loading.

Certification of Authenticity:
  I certify that this is entirely my own work, except where I have given
  fully-documented references to the work of others.I understand the definition and
  consequences of plagiarism and acknowledge that the assessor of this assignment may, for
  the purpose of assessing this assignment:
  - Reproduce this assignment and provide a copy to another member of academic staff; and/or
  - Communicate a copy of this assignment to a plagiarism checking service(which may then
  retain a copy of this assignment on its database for the purpose of future plagiarism
  checking)
*/

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student
{
   private:
      string mName, mID;
      int    mCreditCompleted;
      double mGPA;

   public:
      // default constructor
      Student();
      // constructor
      Student(string name, string id, int credits, double gpa);
      
      // accessor
      int    getCreditCompleted();
      double getGPA();
      string getID();
      string getName();

      // mutator
      void setCreditCompleted(int credits);
      void setGPA(double gpa);
      void setID(string id);
      void setName(string name);

      // operator overloading
      friend ostream& operator<<(ostream& ostream, const Student& obj);
      friend ofstream& operator<<(ofstream& ofstream, const Student& obj);
      friend istream& operator>>(istream& istream, Student& obj);
      friend ifstream operator>>(ifstream& ifstream, Student& obj);

      bool operator==(string id);
      friend bool operator==(string id, const Student& obj);
      bool operator==(const Student& rhs);

      bool operator!=(string id);
      friend bool operator==(string id, const Student& obj);
      bool operator!=(const Student& rhs);

      Student operator=(const Student& rhs);
      Student operator=(string id);
      Student operator=(int credits);
      Student operator=(double gpa);

      int operator+(int rhs);
      friend int operator+(int credit, const Student& rhs);
      double operator-(double rhs);
      friend double operator-(double gpa, const Student& rhs);
};

#endif