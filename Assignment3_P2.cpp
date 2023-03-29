/* 
  Author: Sejin Yoon 
  Date: Mar 29, 2023
  Program: Armstrong numbers between 1 and 1000.
  filename: Assignment3_P2.cpp
*/
 

#include <iostream>
#include<cmath>
#define RANGE 1000
using namespace std;
//function prototypes
int sumCube(int), num, total, remain;
void ArmstrongNumber();

int main()
{
    cout<<"Armstrong numbers between 1 and 1000 : ";
    cin >> num;

}
/********************************************************
 * Definition of :  int sumCube(int num)                *
 * This function calculate sum of cubes of its digits   *
 * and returns the result                               *
 ********************************************************/
int sumCube(int num)
{
    while (1) {
      if (num == 0) 
        break;
      total = num % 10;
      total += remain * remain * remain;
      num /= 10;
      }
    if (i == total)
      printf("%d\n",i);
}

/********************************************************
 * Definition of :  void ArmstrongNumber()              *
 * This function identifies armsrong number between     *
 * 1 and 1000.                                          *
 ********************************************************/
void ArmstrongNumber()
{
   for (int i = 1; i <= RANGE; i++) {
      total = 0;
      num = i;
      }
}