#include <iostream>
using namespace std;
//int flag;

class A
{
private:
    //static int ax;
    int ax;
public:
    A()
    {
        /*if(flag==0)
        {
            int a;
            cout<<"Enter AX=";
            cin>>a;
            ax=a;
            flag=1;
        }*/
        int a;
        cout<<"Enter AX=";
        cin>>a;
        ax=a;
    }
    int get_priv(){return ax;}
    ~A() {cout<<"Destructor in class A\n";}
};

class B:public A
{
private:
    int bx;
public:
    B()
    {
        int b;
        cout<<"Enter BX=";
        cin>>b;
        bx=b;
    }
    int get_priv(){return bx;}
    ~B() {cout<<"Destructor in class B\n";}
};

class C:public A
{
private:
    int cx;
public:
    C()
    {
        int c;
        cout<<"Enter CX=";
        cin>>c;
        cx=c;
    }
    int sum(int value_bx)
    {
        int s=get_priv()+value_bx+cx;
        return s;
    }

    ~C() {cout<<"Destructor in class C\n";}
};

//int A::ax;

int main()
{
    B b1;
    C c1;
    int BX=b1.get_priv();
    cout<<c1.sum(BX)<<endl;
    return 0;
}





