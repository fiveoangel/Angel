#include <vector>
#include <string>
#include <iostream>

using namespace std;

void PrintAllPermutations(const vector<string> &permList, const vector<string> &nameList) {
   if(nameList.size() == 0) {
      for(unsigned int i = 0; i < permList.size(); i++) {
         if (permList.at(i) == permList.back()) {
            cout << permList.at(i);
         }
         else {
            cout << permList.at(i) << ", ";
         }
      }
      cout << endl;
      return;
   }
   else {
      for(unsigned int i =0; i < nameList.size(); i++) {
         vector<string> copy = permList;
         copy.push_back(nameList.at(i));
         vector<string> temp = nameList;
         temp.erase(temp.begin() + i);
         PrintAllPermutations(copy,temp);
      }
   }
}

int main() {
   vector<string> nameList;
   vector<string> permList;
   string name;
   cin >> name;
   while (name != "-1") {
      nameList.push_back(name);
      cin >> name;
   }
   PrintAllPermutations(permList,nameList);
   
   return 0;
}