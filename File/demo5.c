#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    int i;
    int arr[5];
    cout<<"Enter array of 5 members";
    for(i=0;i<5;i++) cin>>arr[i];

    ofstream file;
    file.open("File4.txt",ios::out|ios::app);
    for(i=0;i<5;i++)
    {
        file<<arr[i]<<" ";
    }
    file.close();
    return 0;
}
