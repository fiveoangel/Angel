#ifndef ENCYCLOPEDIAH
#define ENCYCLOPEDIAH

#include "Book.h"

class Encyclopedia : public Book {
   public:
   void SetEdition(string str1);
   
   void SetNumPages(int num);
   
   string GetEdition();
   
   int GetNumPages();
   
   void PrintInfo();
   
   private:
   string edition;
   int pages;


};

#endif