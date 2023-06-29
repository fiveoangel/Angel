#include "Encyclopedia.h"
#include <iostream>

void Encyclopedia::SetEdition(string str1) {
   edition = str1;
}
void Encyclopedia::SetNumPages(int num) {
   pages = num;
}
string Encyclopedia::GetEdition() {
   return edition;
}
int Encyclopedia::GetNumPages() {
   return pages;
}
void Encyclopedia::PrintInfo() {
   cout << "Book Information: " << endl;
   cout << "   Book Title: " << title << endl;
   cout << "   Author: " << author << endl;
   cout << "   Publisher: " << publisher << endl;
   cout << "   Publication Date: " << publicationDate << endl;
   cout << "   Edition: " << edition << endl;
   cout << "   Number of Pages: " << pages << endl;
}