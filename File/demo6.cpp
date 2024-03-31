#include<iostream>
#include <fstream>
using namespace std;
int main()
{
    int arr[5];
    ifstream file("File4.txt");
    for(int i=0;i<5;i++)
    {
        file>>arr[i];
    }
    for(int i=0;i<5;i++) cout<<arr[i]<<" ";
    file.close();
    return 0;
}
