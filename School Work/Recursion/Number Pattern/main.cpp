#include <iostream>

using namespace std;

void PrintNumPattern(int start, int end) {

cout << start << " ";

if (start >= 0) {
 PrintNumPattern(start - end, end);
 cout<< start << "g ";
 }
 
}
int main() {
   int num1;
   int num2;

   cin >> num1;
   cin >> num2;
   PrintNumPattern(num1, num2);
   
   return 0;
}