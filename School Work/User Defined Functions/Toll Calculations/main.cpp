#include <iostream>
#include <iomanip>
using namespace std;

double CalcToll(int hour, bool isMorning, bool isWeekend) {
   if(isMorning == true && isWeekend == true) {
      if(hour < 7) {
         return 1.05;
      }
   }
   if(isMorning == false && isWeekend == true) {
      if(hour < 8) {
         return 2.15;
      }
      else if (hour >= 8) {
         return 1.10;
      }
   }
   if(isMorning == false && isWeekend == false) {
      if( hour < 3) {
         return 1.90;
      }
      else if(hour < 8) {
         return 3.95;
      }
      else if( hour >= 8 ) {
         return 1.40;
      }
   }
   if(isMorning == true && isWeekend == false) {
      if(hour < 7 ) {
         return 1.15;
      }
      else if( hour >= 7 && hour < 10) {
         return 2.95;
      }
      else if(hour >= 11) {
         return 1.90;
      }
   }
}

int main() {
	cout << CalcToll(8, true, false) << endl;   // 2.95
	cout << CalcToll(1, false, false) << endl;  // 1.9
	cout << CalcToll(3, false, true) << endl;   // 2.15
	cout << CalcToll(5, true, true) << endl;    // 1.05

	return 0;
}