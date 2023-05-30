#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Add all occurences of goal value
int CheckSingles(vector<int>& diceValues, int goal) {
                                      /* Complete the function and update the return statement */
   int sumValue;
   sumValue = 0;
   for(unsigned int i =0; i < 5; i++) {
      if(diceValues.at(i) == goal) {
         sumValue = sumValue + goal;
      }
   }
   
   return sumValue;
}

// Check for three of a kind (score = 30)
int CheckThreeOfKind(vector<int>& diceValues) {
  //                               /* Complete the function and update the return statement */
   const int one = 1;
   const int two = 2;
   const int three = 3;
   const int four = 4;
   const int five = 5;
   
   int sum1=0;
   int sum2=0;
   int sum3=0;
   int sum4=0;
   int sum5=0;
   
   for(unsigned int i =0; i < 5; i++) {
      if (diceValues.at(i) == one) {
         sum1++;
      }
      if (diceValues.at(i) == two) {
         sum2++;
      }
      if (diceValues.at(i) == three) {
         sum3++;
      }
      if (diceValues.at(i) == four) {
         sum4++;
      }
      if (diceValues.at(i) == five) {
         sum5++;
      }
   }
   if(sum1 == 3 || sum2 == 3 || sum3 == 3 || sum4 == 3 || sum5 == 3) {
      return 30;
   }
   else {
      return 0;
   }
}


// Check for four of a kind (score = 40)
int CheckFourOfKind(vector<int>& diceValues) {
   //                             /* Complete the function and update the return statement */
   const int one = 1;
   const int two = 2;
   const int three = 3;
   const int four = 4;
   const int five = 5;
   
   int sum1=0;
   int sum2=0;
   int sum3=0;
   int sum4=0;
   int sum5=0;
   
   for(unsigned int i =0; i < 5; i++) {
      if (diceValues.at(i) == one) {
         sum1++;
      }
      if (diceValues.at(i) == two) {
         sum2++;
      }
      if (diceValues.at(i) == three) {
         sum3++;
      }
      if (diceValues.at(i) == four) {
         sum4++;
      }
      if (diceValues.at(i) == five) {
         sum5++;
      }
   }
   if(sum1 == 4 || sum2 == 4 || sum3 == 4 || sum4 == 4 || sum5 == 4) {
      return 40;
   }
   else {
      return 0;
   }
}

// Check for five of a kind (score = 50)
int CheckFiveOfKind(vector<int>& diceValues) {
 //                  /* Complete the function and update the return statement */
   const int one = 1;
   const int two = 2;
   const int three = 3;
   const int four = 4;
   const int five = 5;
   const int six = 6;
   
   int sum1=0;
   int sum2=0;
   int sum3=0;
   int sum4=0;
   int sum5=0;
   int sum6=0;
   
   for(unsigned int i =0; i < 5; i++) {
      if (diceValues.at(i) == one) {
         sum1++;
      }
      if (diceValues.at(i) == two) {
         sum2++;
      }
      if (diceValues.at(i) == three) {
         sum3++;
      }
      if (diceValues.at(i) == four) {
         sum4++;
      }
      if (diceValues.at(i) == five) {
         sum5++;
      }
      if (diceValues.at(i) == six) {
         sum6++;
      }
   }
   if(sum1 == 5 || sum2 == 5 || sum3 == 5 || sum4 == 5 || sum5 == 5 || sum6 == 5) {
      return 50;
   }

   else {
      return 0;
   }
}

// Check for full house (score = 35)
int CheckFullHouse(vector<int>& diceValues) {
   //              /* Complete the function and update the return statement */
   const int one = 1;
   const int two = 2;
   const int three = 3;
   const int four = 4;
   const int five = 5;
   const int six = 6;
   
   int sum1=0;
   int sum2=0;
   int sum3=0;
   int sum4=0;
   int sum5=0;
   int sum6=0;
   
   for(unsigned int i =0; i < 5; i++) {
      if (diceValues.at(i) == one) {
         sum1++;
      }
      if (diceValues.at(i) == two) {
         sum2++;
      }
      if (diceValues.at(i) == three) {
         sum3++;
      }
      if (diceValues.at(i) == four) {
         sum4++;
      }
      if (diceValues.at(i) == five) {
         sum5++;
      }
      if (diceValues.at(i) == six) {
         sum6++;
      }
   }
   if(sum1 == 2) {
      if(sum2 == 3 || sum3 == 3 || sum4 == 3 || sum5 == 3){
         return 35;
      }
   }
   if(sum2 == 2) {
      if(sum1 == 3 || sum3 == 3 || sum4 == 3 || sum5 == 3){
         return 35;
      }
   }
   if(sum3 == 2) {
      if(sum2 == 3 || sum1 == 3 || sum4 == 3 || sum5 == 3){
         return 35;
      }
   }
   if(sum4 == 2) {
      if(sum2 == 3 || sum3 == 3 || sum1 == 3 || sum5 == 3){
         return 35;
      }
   }
   if(sum5 == 2) {
      if(sum2 == 3 || sum3 == 3 || sum4 == 3 || sum1 == 3){
         return 35;
      }
   }
   if(sum6 == 2) {
      if(sum2 == 3 || sum3 == 3 || sum4 == 3 || sum1 == 3 || sum5 == 3){
         return 35;
      }
   }
   else {
      return 0;
   }
}

// Check for straight (score = 45)
int CheckStraight(vector<int>& diceValues) {
   //             /* Complete the function and update the return statement */
   const int one = 1;
   const int two = 2;
   const int three = 3;
   const int four = 4;
   const int five = 5;
   const int six = 6;
   
   int sum1=0;
   int sum2=0;
   int sum3=0;
   int sum4=0;
   int sum5=0;
   int sum6=0;
   
   for(unsigned int i =0; i < 5; i++) {
      if (diceValues.at(i) == one) {
         sum1++;
      }
      if (diceValues.at(i) == two) {
         sum2++;
      }
      if (diceValues.at(i) == three) {
         sum3++;
      }
      if (diceValues.at(i) == four) {
         sum4++;
      }
      if (diceValues.at(i) == five) {
         sum5++;
      }
      if (diceValues.at(i) == six) {
         sum6++;
      }
   }
   if(sum1 == 1 && sum2 == 1 && sum3 == 1 && sum4 == 1 && sum5 == 1 && sum6 == 0) {
      return 45;
   }
   else if(sum1 == 0 && sum2 == 1 && sum3 == 1 && sum4 == 1 && sum5 == 1 && sum6 == 1) {
      return 45;
   }
   else {
      return 0;
   }  
}

// Find high score
int FindHighScore(vector<int>& diceValues) {
   //     /* Complete the function and update the return statement */
   int highest;
   int score;
   int bestScore;
   int newScore;
   score = CheckSingles(diceValues,1);
   for(unsigned int i = 2; i < 6; i++) {
      newScore = CheckSingles(diceValues,i);
      if(newScore > score) {
        score = newScore;
      }
   } 
   bestScore = score;
   
   int newBestScore;
   
   int threeKind = CheckThreeOfKind(diceValues);
   int fourKind = CheckFourOfKind(diceValues);
   int fiveKind = CheckFiveOfKind(diceValues);
   
   if( threeKind > fourKind && threeKind > fiveKind) {
      newBestScore = threeKind;
   }
   else if(fourKind > threeKind && fourKind > fiveKind) {
      newBestScore = fourKind;
   }
   else {
      newBestScore = fiveKind;
   }

   int lastScore;
 
   lastScore = CheckStraight(diceValues);
   
   int endScore;
   
   endScore = CheckFullHouse(diceValues);
   
   if( bestScore > newBestScore && bestScore > lastScore && bestScore > endScore) {
      highest = bestScore;
   }
   else if(newBestScore > bestScore && newBestScore > lastScore && newBestScore > endScore) {
      highest = newBestScore;
   }
   else if (lastScore > bestScore && lastScore > newBestScore && lastScore > endScore) {
      highest = lastScore;
   }
   else {
      highest = endScore;
   }
 
   return highest;
}

int main() {
   vector<int> diceValues(5);
   int highScore = 0;

   // Fill array with five values from input
   for(int i = 0; i < 5; ++i) {
      cin >> diceValues.at(i);
   }

   // Place values in ascending order
   sort(diceValues.begin(), diceValues.end());

   // Find high score and output
   highScore = FindHighScore(diceValues);
   cout << "High score: " << highScore << endl;

   return 0;
}
