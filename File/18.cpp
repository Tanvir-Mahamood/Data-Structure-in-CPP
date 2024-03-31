#include<iostream>
#include<fstream>
using namespace std;

class student
{
private:
    int roll;
    float cgpa;
public:
    student(int a=0,int b=0){}
    void set_roll(int r){roll=r;}
    void set_cgpa(float g){cgpa=g;}

    int get_roll(){return roll;}
    float get_cgpa(){return cgpa;}

    //void print(){cout<<"Roll="<<roll<<" and CGPA= "<<cgpa<<endl;}

    student(const student &obj) //copy constructor for swap operation
    {
        roll=obj.roll;
        cgpa=obj.cgpa;
    }
};

int main()
{
    ifstream file("18.txt");
    ofstream f("18output.txt",ios::out|ios::app);
    int i,j,R;
    float G;
    student s[5];
    student temp;
    for(i=0;i<5;i++) //Taking Input
    {
        file>>R>>G;
        s[i].set_roll(R);
        s[i].set_cgpa(G);
    }
    //Descending accoriding to CGPA
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(s[j].get_cgpa()>s[i].get_cgpa()) //need to swap objects
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }

    //Final printing
    for(i=0;i<5;i++)
    {
        f<<s[i].get_roll()<<" "<<s[i].get_cgpa()<<endl;
    }
    file.close();
    f.close();
    return 0;
}

