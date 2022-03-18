#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

// Assign studentId and name
void Student::assignDetails(int SID, char sname[]) {
  studentID = SID;
  strcpy(name,sname);
}

// Display StudentId and Name
void Student::display() {
  cout<<"student ID : " << studentID << endl; 
  cout<<"name : "<< name <<endl;
  
}
