#include <iostream>
#include <iomanip> 
#include "Team.h"
using namespace std;

void Team::SetName(string name) {
   namee = name;
}

void Team::SetWins(int wins) {
   winss = wins;
}

void Team::SetLosses(int losses) {
   lossess = losses;
}

string Team::GetName() {
   return namee;
}

int Team::GetWins() {
   return winss;
}

int Team::GetLosses() {
   return lossess;
}

double Team::GetWinPercentage() {
   return (double)winss/(winss+lossess);
}

void Team::PrintStanding() {
   cout << "Win percentage: " << setprecision(2) <<GetWinPercentage() << endl;
   if(GetWinPercentage() <= 0.50) {
      cout << "Team " << GetName() <<" has a losing average." << endl;
   }
   else{
      cout << "Congratulations, Team " << GetName() << " has a winning average!" << endl;
   }
}
   