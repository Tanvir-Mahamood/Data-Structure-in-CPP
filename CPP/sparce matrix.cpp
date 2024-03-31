#include <iostream>
using namespace std;
int main()
{
    int i,j,row,col,k=0;
    cin>>row>>col;
    int a[row][col],s[100][3];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>a[i][j];
            if(a[i][j] != 0)
            {
                s[k][0]=i;
                s[k][1]=j;
                s[k][2]=a[i][j];
                k++;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
