#include <iostream>

#include "RandomNumbers.h"
using namespace std;

void RandomNumbers::SetRandomValues(int one, int two) {
   if(one == two) {
      var1 = one;
      var2 = one;
      var3 = one;
   }
   else{
   var1 = one;
   var2 = one +1;
   var3 = two - 1;
   }
}
void RandomNumbers::GetRandomValues() {
   cout << "Random values: " << var1 << " " << var2 << " " << var3 << endl;
}
int RandomNumbers::GetVar1() {
   return var1;
}
int RandomNumbers::GetVar2() {
   return var2;
}
int RandomNumbers::GetVar3() {
   return var3;
}