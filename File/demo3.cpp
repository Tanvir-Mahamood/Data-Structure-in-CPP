#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    int n,m;
    ifstream file("File2.txt");
    file>>n;
    cout<<n<<" ";

    file>>m;
    cout<<m;
    file.close();
    return 0;
}

