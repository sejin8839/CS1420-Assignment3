
/* 
  Author: Sejin Yoon
  Date: Mar 29, 2023
  Program: Calorie Calculator
  filename: Assignment3_P1.cpp
*/

#include <iostream>
 
using namespace std;

double inputValidate(double);
void getWeight(double &);
double calculateCaloriesFat(double);
double calculateCaloriesSugar(double);
double calculateBadCalories( double);


int main()
{
    double weight;
    
    //Student --- TODOS
    
    cout<<" Total Bad calories";
    
    return 0;
}

/********************************************************
 * Definition of inputValidate function:                *
 * This function checks user input. When the            *
 * user enters a number <=0, it will display an error   *
 ********************************************************/
double inputValidate(double num)
{
    while(!(cin >> num) || (num < 0 ))
    {
        cout << "Error. An integer greater than zero must be entered: ";
       
    }
    return num;
}


void getWeight(double &num)
{
    cout  << "What is the weight in pounds: ";
    //Student ---TODOS
    
}


/********************************************************
 * Definition of :                                      *
 * double calculateCaloriesFat(double weight)         *
 * returns the corresponding amount of calories         *
 * by multiplying the weight with 4100                  *
 ********************************************************/
double calculateCaloriesFat(double weight)
{
    cout<<"Fat :";
    //Student -- TODOS
   
}

/********************************************************
 * Definition of :                                      *
 * double calculateCaloriesSugar(double weight)         *
 * returns the corresponding amount of calories         *
 * by multiplying the weight with 936                   *
 ********************************************************/
double calculateCaloriesSugar(double weight)
{
    cout<<"Sugar :";
    //Student --- TODOS
   
}

/********************************************************
 * Function Definition for doube calculateBadCalories()  *
 * findLowest() should find and return the lowest of    *
 * let the user input weights for fat and sugar and     *
 * return the total of bad calories                     *
 
 ********************************************************/
double calculateBadCalories(double weight )
{
   //Student --- TODOS

}