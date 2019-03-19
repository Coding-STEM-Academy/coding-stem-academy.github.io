#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// Code for problem 1

int main()
  {
      string line;

      ifstream myfile( "Prob01.in.txt" );
      ofstream myoutfile( "Prob01.out.txt" );

      int num = 0;
      if (myfile)
      {
        while (getline( myfile, line ))
          {
            //Group 2 -> insert your algorithm here

           int digit = (int)line[0];

           if (!isdigit(digit))
              {

                  for (int i=0; i< num; i++)
                  {
                        cout << line << endl;
                  }

               }
            else
            {
               num = (int)digit - '0';;
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
