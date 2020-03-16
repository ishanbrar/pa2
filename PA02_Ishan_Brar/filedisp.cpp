//Ishan Brar
//CS3377.0W1


#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
#include <fstream>
using namespace std;
string input1;


int main (int argc, char **argv)
{
    //input1 stores the option
    input1 = argv[1];
    //lineInput stores the standard input
    string lineInput;
    //count is a loop control variable
    int count;
    //While input is being recieved from standard input
    
    while (cin >> lineInput)
    {
        
        //For the optionn "-d" for directories
        if(input1 == "-d")
        {
            if(count < 10)
            {
                cout << lineInput;
                cout << " ";
            }
        }
        
        //For the option "-f" for files
        else if(input1 == "-f")
        {
            if(count>9 && count < 20)
            {
                cout << lineInput;
                cout << " ";
            }
        }
        
        //For the optionn "-b" for bytes
        else if(input1 == "-b")
        {
            if(count>19 && count < 34)
            {
                cout << lineInput;
                cout << " ";
            }
        }
        count++;
        
            
    }

    //g++ filecnt.cpp -o fc | g++ filedisp.cpp -o fd | ./fc /Users/singhz/test | ./fd -d
    cout << endl;
    //cout << "The input option was: " << input1<< endl;
    
}



