
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
    double totalBadCalories = calculateBadCalories();
    
    cout << "Total Bad calories: " << totalBadCalories << endl;
    
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
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return num;
}


void getWeight(double &num)
{
    cout  << "What is the weight in pounds: ";
    num = inputValidate(num);
    

    
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
    return weight * 4100;
   
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
    return weight * 936;
   
}

/********************************************************
 * Function Definition for doube calculateBadCalories()  *
 * findLowest() should find and return the lowest of    *
 * let the user input weights for fat and sugar and     *
 * return the total of bad calories                     *
 
 ********************************************************/
double calculateBadCalories(double weight )
{
   double weightFat, weightSugar;
    
    cout << "Enter the fat weight in pounds: ";
    getWeight(weightFat);
    weightFat *= 0.454; // Convert to kg

    cout << "Enter the sugar weight in pounds: ";
    getWeight(weightSugar);
    weightSugar *= 0.454; // Convert to kg

    return calculateCaloriesFat(weightFat) + calculateCaloriesSugar(weightSugar);

}