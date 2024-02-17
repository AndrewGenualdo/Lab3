//  filename:  lab3.cpp

/*
       Author:  Wei Kian Chen
  Modified by: Drew Genualdo
        Class:  CSI-240-04
   Assignment: Lab 3
Date Assigned: February 9, 2024
     Due Date: February 13, 2024, 13:00

Description:
  This is a stub driver to test the Student class.

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

const string TEST_FILE = "testfile.txt";

int main()
{

    Student student1;// = Student("George Bush", "2489034", 15, 3.3954934);
    Student student2 = Student("David Ortiz", "0384943", 15, 2.488485);
    cout << "------------READ FROM CONSOLE-------------" << endl;
    cin >> student1;
    cout << "------------WRITE TO CONSOLE FILE-------------" << endl;
    cout << student1 << endl; //should print whatever the user input


    //makes it easier to test than different user inputs every time
    student1.setName("Bobby Joel");
    student1.setID("949394");
    student1.setGPA(3.9548584);
    student1.setCreditCompleted(15);

    cout << "------------WRITE TO FILE-------------" << endl;
    ofstream ofstream(TEST_FILE);
    ofstream << student1; // should write name:Bobby Joel, ID:949394, GPA:3.9548584, credits:15
    ofstream.close();


    cout << "------------READ FROM FILE-------------" << endl;
    ifstream ifstream(TEST_FILE);
    if (ifstream.is_open())
    {
        ifstream >> student1; // should load name:Bobby Joel, ID:949394, GPA:3.9548584, credits:15
    } else
    {
        return -1;
    }
    ifstream.close();
    cout << student1 << endl; // should print name:Bobby Joel, ID:949394, GPA:3.9548584, credits:15

    cout << "------------COMPARE-------------" << endl;
    cout << (student2 == "0384943" ? "true" : "false") << endl; //should print true
    cout << (student2 == "5373777" ? "true" : "false") << endl; //should print false
    cout << ("0384943" == student2 ? "true" : "false") << endl; //should print true
    cout << ("3737377" == student2 ? "true" : "false") << endl; //should print false
    cout << (student1 == student1 ? "true" : "false") << endl; //should print true
    cout << (student1 == student2 ? "true" : "false") << endl; //should print false

    cout << "------------INVERSE COMPARE-------------" << endl;
    cout << (student2 != "0384943" ? "true" : "false") << endl; //should print false
    cout << (student2 != "5373777" ? "true" : "false") << endl; //should print true
    cout << ("0384943" != student2 ? "true" : "false") << endl; //should print false
    cout << ("3737377" != student2 ? "true" : "false") << endl; //should print true
    cout << (student1 != student1 ? "true" : "false") << endl; //should print false
    cout << (student1 != student2 ? "true" : "false") << endl; //should print true

    cout << "-----------------SET TO----------------" << endl;
    Student student3;
    student3 = student1;
    cout << student3 << endl; // should print name:Bobby Joel, ID:949394, GPA:3.9548584, credits:15
    student3 = "28459725";
    student3 = 16;
    student3 = 4.0;
    cout << student3 << endl; // should print name:Bobby Joel, ID:28459725, GPA:4.0, credits:16

    cout << "----------------ADD----------------" << endl;
    cout << (student3 + 1) << endl; //should print 17
    cout << (1 + student3) << endl; //should print 17
    cout << (student3 + 1.2) << endl; //should print 5.0
    cout << (1.2 + student3) << endl; //should print 5.0

    cout << "----------------SUBTRACT----------------" << endl;
    cout << (student3 - 1) << endl; //should print 15
    cout << (17 - student3) << endl; //should print 1
    cout << (student3 - 0.5) << endl; //should print 3.5
    cout << (4.5 - student3) << endl; //should print 0.5


    return 0;
}