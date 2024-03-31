#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string name;
    int m;
    ofstream file;
    file.open("File2.txt",ios::out|ios::app);

    cout<<"Enter a number:";
    cin>>m;
    file<<" "<<m;

    file.close();
    return 0;
}

