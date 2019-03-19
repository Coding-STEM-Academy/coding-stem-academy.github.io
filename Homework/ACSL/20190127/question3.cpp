#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// Code for problem 3

int main()
  {
  string line;

      ifstream myfile( "Prob03.in.txt" );
      ofstream myoutfile( "Prob03.out.txt" );
      int num1, num2 = 0;
      if (myfile)
      {
        while (getline( myfile, line ))
          {
            //Group 2 -> insert your algorithm here
           int digit1 = (int)line[0];
           int digit2 = (int)line[2];

           // check ASCII code, make sure it is a number
           if ((digit2 >= 48) and (digit2 <= 57))
            {
                num1 = (int)digit1 - '0';
                num2 = (int)digit2 - '0';
                myoutfile << (num1+num2) << " " << (num1*num2) << endl;
            }
            // Group 2 -> end of your algorithm
          }
      myfile.close();
      myoutfile.close();
    }
  else
    cout << "Unable to open/read file ";

  return 0;
  }
