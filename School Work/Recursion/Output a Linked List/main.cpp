#include <iostream>
#include "IntNode.h"
using namespace std;

void PrintLinkedList(IntNode* headNode){
	if(headNode!=NULL){
		headNode->PrintData();
		PrintLinkedList(headNode->GetNext());
	}
}

int main() {
   int size;
   int value;
   
   cin >> size;
   cin >> value;
   IntNode* headNode = new IntNode(value); // Make head node as the first node
   IntNode* lastNode = headNode;      // Node to add after
   IntNode* newNode = NULL;           // Node to create

   // Insert the second and the rest of the nodes
   for (int n = 0; n < size - 1; ++n) {
      cin >> value;
      newNode = new IntNode(value);
      lastNode->InsertAfter(newNode);
      lastNode = newNode;
   }

   // Call PrintLinkedList() with the head node
   PrintLinkedList(headNode);
   
   return 0;
}