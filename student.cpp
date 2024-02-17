//  filename:  student.cpp

/*
       Author:  Wei Kian Chen
  Modified by: Drew Genualdo
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

using namespace std;

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
/*
    Pre: obj has to be initialized
   Post: ostream receives string form of obj
Purpose: print Student to stream
*/
ostream &operator<<(ostream &ostream, const Student &obj)
{
    ostream << obj.mName << endl << obj.mID << endl << to_string(obj.mCreditCompleted) << " " << to_string(obj.mGPA);
    return ostream;
}

/*
    Pre: obj has to be initialized
   Post: ofstream receives string form of obj
Purpose: print Student to file
*/
ofstream &operator<<(ofstream &ofstream, const Student &obj)
{
    ofstream << obj.mName << endl << obj.mID << endl << to_string(obj.mCreditCompleted) << " " << to_string(obj.mGPA);
    return ofstream;
}

/*
    Pre: obj has to be initialized
   Post: obj loaded with data from the istream
Purpose: read a Student from an istream
*/
istream &operator>>(istream &istream, Student &obj)
{
    string data;
    getline(istream, data);
    obj.setName(data);
    getline(istream, data);
    obj.setID(data);
    istream >> data;
    obj.setCreditCompleted(stoi(data));
    istream >> data;
    obj.setGPA(stod(data));
    return istream;
}

/*
    Pre: obj has to be initialized
   Post: obj loaded with data from the ifstream
Purpose: read a Student from a file
*/
ifstream &operator>>(ifstream &ifstream, Student &obj)
{
    string data;
    getline(ifstream, data);
    obj.setName(data);
    getline(ifstream, data);
    obj.setID(data);
    ifstream >> data;
    obj.setCreditCompleted(stoi(data));
    ifstream >> data;
    obj.setGPA(stod(data));
    return ifstream;
}

/*
    Pre: Student has to be initialized
   Post: none
Purpose: compare Student's ID to id
*/
bool Student::operator==(string id)
{
    return mID == id;
}

/*
    Pre: obj has to be initialized
   Post: none
Purpose: compare id to Student's ID
*/
bool operator==(string id, const Student &obj)
{
    return obj.mID == id;
}

/*
    Pre: Student and rhs have to be initialized
   Post: none
Purpose: Compare Student's ID to Student's ID
*/
bool Student::operator==(const Student &rhs)
{
    return mID == rhs.mID;
}

/*
    Pre: Student has to be initialized
   Post: none
Purpose: Inverse compare Student's ID to id
*/
bool Student::operator!=(string id)
{
    return mID != id;
}

/*
    Pre: obj has to be initialized
   Post: none
Purpose: Inverse compare id to Student's ID
*/
bool operator!=(string id, const Student &obj)
{
    return id != obj.mID;
}

/*
    Pre: Student and rhs have to be initialized
   Post: none
Purpose: Inverse compare Student's ID to Student's ID
*/
bool Student::operator!=(const Student &rhs)
{
    return mID != rhs.mID;
}

/*
    Pre: Student and rhs have to be initialized
   Post: Student receives values of rhs
Purpose: Set a Student's values to another Student's values.
*/
Student Student::operator=(const Student &rhs)
{
    setName(rhs.mName);
    setID(rhs.mID);
    setCreditCompleted(rhs.mCreditCompleted);
    setGPA(rhs.mGPA);
    return *this;
}

/*
    Pre: Student has to be initialized
   Post: Student's ID will be set to id
Purpose: Set the Student's ID
*/
Student Student::operator=(string id)
{
    setID(id);
    return *this;
}

/*
    Pre: Student has to be initialized
   Post: Student's Credits will be set to credits
Purpose: Set the Student's Credits
*/
Student Student::operator=(int credits)
{
    setCreditCompleted(credits);
    return *this;
}

/*
    Pre: Student has to be initialized
   Post: Student's GPA wil be set to gpa
Purpose: Set the Student's GPA
*/
Student Student::operator=(double gpa)
{
    setGPA(gpa);
    return *this;
}

/*
    Pre: Student has to be initialized
   Post: none
Purpose: Get the sum of Student's Credits and rhs
*/
int Student::operator+(int rhs)
{
    return mCreditCompleted + rhs;
}

/*
    Pre: rhs has to be initialized
   Post: none
Purpose: Get the sum of Student's Credits and rhs
*/
int operator+(int credit, const Student &rhs)
{
    return rhs.mCreditCompleted + credit;
}

/*
    Pre: Student has to be initialized
   Post: none
Purpose: Get the sum of Student's GPA and rhs
*/
double Student::operator+(double rhs)
{
    return mGPA + rhs;
}

/*
    Pre: rhs has to be initialized
   Post: none
Purpose: Get the sum of Student's GPA and rhs
*/
double operator+(double gpa, const Student &rhs)
{
    return rhs.mGPA + gpa;
}

/*
    Pre: Student has to be initialized
   Post: none
Purpose: Get the difference of Student's Credits and rhs
*/
double Student::operator-(int rhs)
{
    return mCreditCompleted - rhs;
}

/*
    Pre: rhs has to be initialized
   Post: none
Purpose: Get the difference of Student's Credits and rhs
*/
double operator-(int credit, const Student &rhs)
{
    return credit - rhs.mCreditCompleted;
}

/*
    Pre: Student has to be initialized
   Post: none
Purpose: Get the difference of Student's GPA and rhs
*/
double Student::operator-(double rhs)
{
    return mGPA - rhs;
}

/*
    Pre: rhs has to be initialized
   Post: none
Purpose: Get the difference of Student's GPA and rhs
*/
double operator-(double gpa, const Student &rhs)
{
    return gpa - rhs.mGPA;
}