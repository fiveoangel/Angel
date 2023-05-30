#include <iostream>
using namespace std;

int CountEvens(int one, int two, int three, int four) {
   int sum;
   sum = 0;
   if (one % 2 == 0) {
      sum ++;
   }
   if (two % 2 == 0) {
      sum ++;
   }
   if (three % 2 == 0) {
      sum ++;
   }
   if (four % 2 == 0) {
      sum ++;
   }
   return sum;
}
int main() {
   int result;
   int one;
   int two;
   int three;
   int four;

   cout << "Enter four random numbers " << endl ;
   cin >> one;
   cin >> two;
   cin >> three;
   cin >> four;

   result = CountEvens(one, two, three, four);
	cout << "Total evens: " << result << endl; // Expected "Total evens: 2".

   return 0;
}
