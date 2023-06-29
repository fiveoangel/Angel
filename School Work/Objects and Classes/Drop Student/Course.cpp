#include <iostream>
#include "Course.h"
using namespace std;

void Course::DropStudent(string last) {
   for(unsigned int i = 0; i < roster.size(); ++i)  {
      if(roster.at(i).GetLast() == last) 
      {
         roster.erase(roster.begin() + i);
         return;
      }
   }
}

void Course::AddStudent(Student s) {
	roster.push_back(s);
}

int Course::CountStudents() {
   return roster.size();
}