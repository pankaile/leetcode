#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<list>
//#include<NewHed.h>
using namespace std;

extern int z;
int i = 4;
class a{
    public:
    int aa =5;
    void fun(){};
    virtual ~a();
    
};
a:: ~a(){fun();
cout<<aa;}
class b:public a{
    public:
    int bb;
    
};

int main()
{
    a b2;
    //print();
    //cout<<j<<endl;
    //cout<<z<<endl;


    
}