// C++ recursive function to
// solve tower of hanoi puzzle
//Total cases 2^n -1
#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n,char from_rod,char to_rod,char aux_rod)
{
    if(n==0) return;

    towerOfHanoi(n-1,from_rod,aux_rod,to_rod);

    cout<<"Move disk "<<n<<" from rod "<<from_rod<<" to rod "<<to_rod<<endl;

    towerOfHanoi(n-1,aux_rod,to_rod,from_rod);
}

int main()
{
    int N;
    cin>>N;
    towerOfHanoi(N,'A','C','B');
    return 0;
}



