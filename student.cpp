//  filename:  student.cpp

/*
       Author:  Wei Kian Chen
  Modified by:
        Class:  CSI-240-04
   Assignment: Lab 3
Date Assigned: February 9, 2024
     Due Date: February 13, 2024, 13:00

Description:
  The file define the Student class with operator loading.

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


#include "student.h"


/*
    Pre: The object is instantiated 
   Post: All private members are initialized to default value
Purpose: Default constructor. Initialized all the private members to default
*/
Student::Student()
{
   mName = "";
   mID = "";
   mCreditCompleted = 0;
   mGPA = 0;
}


/*
    Pre: The object is instantiated
   Post: All private members are initialized with the provided value
Purpose: Constructor. Initialized the private members with the provide value
*/
Student::Student(string name, string id, int credits, double gpa)
{
   mName = name;
   mID = id;
   mCreditCompleted = credits;
   mGPA = gpa;
}


// accessors
/*
    Pre: The object is instantiated
   Post: The credit completed is returned to the caller
Purpose: Extract the completed credits from the object
*/
int Student::getCreditCompleted()
{
   return mCreditCompleted;
}


/*
    Pre: The object is instantiated
   Post: The GPA is returned to the caller
Purpose: Extract the GPA from the object
*/
double Student::getGPA()
{
   return mGPA;
}


/*
    Pre: The object is instantiated
   Post: The student's ID is returned to the caller
Purpose: Extract the student's ID from the object
*/
string Student::getID()
{
   return mID;
}


/*
    Pre: The object is instantiated
   Post: The student's name is returned to the caller
Purpose: Extract the student's name from the object
*/
string Student::getName()
{
   return mName;
}


// mutator
/*
    Pre: The object is instantiated
   Post: The credit completed is updated
Purpose: To modify the credit completed for the Student object
*/
void Student::setCreditCompleted(int credits)
{
   mCreditCompleted = credits;
}


/*
    Pre: The object is instantiated
   Post: The GPA is updated
Purpose: To modify the GPA of the Student object
*/
void Student::setGPA(double gpa)
{
   mGPA = gpa;
}


/*
    Pre: The object is instantiated
   Post: The student's ID is updated
Purpose: To modify the student's ID of the Student object
*/
void Student::setID(string id)
{
   mID = id;
}


/*
    Pre: The object is instantiated
   Post: The student's name is updated
Purpose: To modify the student's name of the Student object
*/
void Student::setName(string name)
{
   mName = name;
}


// operator overloading
