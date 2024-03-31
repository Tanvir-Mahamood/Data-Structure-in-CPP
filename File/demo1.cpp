#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string name;
    ofstream file;
    file.open("File1.txt",ios::out|ios::app);
    file<<"Welcome ";

    cout<<"Enter your name:";
    getline(cin,name);
    file<<"Eng. "<<name<<endl;

    file.close();
    return 0;
}
