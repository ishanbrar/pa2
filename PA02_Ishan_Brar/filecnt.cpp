//Ishan Brar
//CS3377.0W1
#include <sys/types.h>
#include <dirent.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>




using namespace std;
//Strings to contain commands for retrieving files, directories, and byte size
string filesx;
string directories;
string size;




void get(string pathname)
{
    ofstream op;
    //Path is the argument passed into program
    string path = pathname;
    //Folder count command
    string folders ="find " + path + " -mindepth 1 -type d | wc -l";
    //File count command
    string files = "find " + path + " -type f | wc -l";
    
    //Display count of directories
    string output1= "echo \"The total number of directories in directory " + path + " is: \"";
    op << output1;
    //Send command to system
    system(output1.c_str());
    //Send command to system
    system(folders.c_str());
    
    //Display count of files
    string output2= "echo \"The total number of files in directory " + path + " is: \"";
    //System command
    system(output2.c_str());
    op << output2;
    system(files.c_str());
    
    //Byte count commands
    string output3= "echo \"The total number of bytes occupied by all files in directory " + path + " is: \"";
    system(output3.c_str());
    op << output3;
    string bytes = "du -sh " + path;
    system(bytes.c_str());
    op.close();
    
}
void displayVersion(std::string version)
{
    std::cout << "The current version is " << version << std::endl;
    
}
int main (int argc, char **argv)
{
    //Set path to filepath provided by user
    std::string version = "1.2";
    displayVersion(version);
    string path;
    path = argv[1];
    //Call get function
    get(path);
    
   
    
    
    
    
}

