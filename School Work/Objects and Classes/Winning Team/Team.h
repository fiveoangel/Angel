#ifndef TEAMH
#define TEAMH

#include <string>

using namespace std;

class Team {
   public: 
   void SetName(string name);
   
   void SetWins(int wins);
   
   void SetLosses(int losses);
   
   string GetName();
   
   int GetWins();
   
   int GetLosses();
   
   double GetWinPercentage();
   
   void PrintStanding();
   
   
   private:
   string namee;
   
   int winss;
   
   int lossess;
};
   
#endif