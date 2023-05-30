#include "MileageTrackerNode.h"
#include <string>
#include <iostream>
using namespace std;

int main () {
   // References for MileageTrackerNode objects
   MileageTrackerNode* headNode;
   MileageTrackerNode* currNode;
   MileageTrackerNode* lastNode;

   double miles;
   string date;
   int i;
   int count;
   

   // Front of nodes list
   headNode = new MileageTrackerNode();
   lastNode = headNode;
   cin >> count;
   
   for (i = 0; i < count; ++i) {
      cin >> miles;
      cin >> date;
      
      currNode = new MileageTrackerNode(miles,date);
      
      lastNode->InsertAfter(currNode);
      lastNode = currNode;
   }
   currNode = headNode->GetNext();
   while (currNode != nullptr) {
      currNode->PrintNodeData();
      currNode = currNode->GetNext();
   }

   delete headNode;
}