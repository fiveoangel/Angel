#include <iostream>
#include <vector>
#include <stdexcept>      // For std::out_of_range
using namespace std;

int main() {
   vector<string> names = { "Ryley", "Edan", "Reagan", "Henry", "Caius", "Jane", "Guto", "Sonya", "Tyrese", "Johnny" };
   int index;

   cin >> index;
   
   try {
      cout << names.at(index) << endl;
   }
   catch (out_of_range &excpt) {
      cout << "Exception! ";
      cout << excpt.what() << endl;
      cout << "The closest name is: ";
      if (index < 0) {
         cout << names.at(0) << endl;
      }
      else {
         cout << names.at(names.size() -1) << endl;
      }
   }
   return 0;
}
