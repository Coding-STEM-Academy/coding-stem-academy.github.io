#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// Code for problem 1

int main()
  {
      string line;

      ifstream myfile( "Prob02.in.txt" );
      ofstream myoutfile( "Prob02.out.txt" );

      int num = 0;
      int last_Pos;

      if (myfile)
      {
        while (getline( myfile, line ))
          {
            //Group 2 -> insert your algorithm here
           int digit = (int)line[0];

           if (!isdigit(digit))
           {

             int length = line.size();

             size_t found = line.find(" ");
             if (found != string::npos)
             {
                last_Pos = stoi(line.substr(found,(length-found)));
                string word = line.substr(0,length-2);
                myoutfile << word.substr(0,last_Pos) << word.substr(last_Pos+1,word.size()) << endl;
              }
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
