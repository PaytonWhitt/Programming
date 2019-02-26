//Program Name: Math Tutor Parte Tois
//Purpose: Modification to allow multiple functions of math.
//Author: Payton Whittaker
//Last Modified: February 26
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;
int main()
{
  //variables
  srand(time (0));
  const int seed= 450;
  int num1, num2, add, multi, subtrac, divide,choice, answer;
  num1=50+rand()%seed;
  num2=50+rand()%seed;

//Program start

cout << "**********************************" << '\n';
cout << "*     Welcome to Math Tutor      *" << '\n';
cout << "**********************************" << '\n';

cout << "1. Solve an Addition Equation" << '\n';
cout << "2. Solve a Subtraction Equation" << '\n';
cout << "3. Solve a Multiplication Equation" << '\n';
cout << "4. Solve a Division Equation" << '\n';
cout << "5. Quit" << '\n';
cout << "Enter your choice:" << '\n';

// user makes choice
for (size_t choice = 0; choice < 6; choice++) {

cin>>choice;
if (choice<1||choice>5)
{
  cout << "Not a valid entry, bye!!"<<'\n' ;
}
else{
switch (choice) {
 case 1:        //Addition Problem
   //Calculate sum
      cout << setw(5)<<num1 << '\n';
      cout << "+ " <<setw(3)<<num2<< '\n';
      cout << "______" << '\n';
      add=num1+num2;
     //Student work
      system (" ");
       cout << "Enter anwser here:" << '\n';
       cin >> answer;
       if (answer==add) {
        cout << "Congratulations!!" << '\n';
        }
     //got the wrong answer
       else
       {
         cout << "Wrong!!" << '\n';

          cout << "The answer is "<< answer<< '\n';
       }

    break;

  case 2:// Subtraction Problem
    //Calculate subtrac
     cout << setw(4)<<num1 << '\n';
     cout << "-"<<setw(3)<<num2<< '\n';
     cout << "_____" << '\n';
     subtrac=num1-num2;
    //Student work
     system (" ");

    cout << "Enter answer here:" << '\n';
    cin >> answer;
  //got the correct answer
  if (answer==subtrac) {
   cout << "Congratulations!!" << '\n';
   }
//got the wrong answer
  else
  {
    cout << "Wrong!!" << '\n';

     cout << "The answer is "<< answer<< '\n';
  }

  break;
  case 3://Multiplication
  //Calculate multi
   cout << setw(5)<<num1 << '\n';
   cout << "x " <<setw(3)<<num2<< '\n';
   cout << "______" << '\n';
   multi=num1*num2;
  //Student work
   system (" ");

  cout << "Enter answer here:" << '\n';
  cin >> answer;
//got the correct answer
if (answer==multi) {
 cout << "Congratulations!!" << '\n';
 }
//got the wrong answer
else
{
  cout << "Wrong!!" << '\n';

   cout << "The answer is "<< answer<< '\n';
}

  break;
  case 4://Division Problem
  //Calculate divide
   cout << setw(5)<<num1 << '\n';
   cout << "/ " <<setw(3)<<num2<< '\n';
   cout << "______" << '\n';
   divide=num1/num2;
  //Student work
   system (" ");
-
  cout << "Enter answer here:" << '\n';
  cin >> answer;
//got the correct answer
   if (answer==divide) {
    cout << "Congratulations!!" << '\n';
    }
     //got the wrong answer
     else
      {
      cout << "Wrong!!" << '\n';

       cout << "The answer is "<< answer<< '\n';
       }
  break;
  case 5://quit
    cout << "Thanks for using!!!" << '\n';
  return 0;
   }
}
}
return 0;
}
