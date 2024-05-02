//write a program using namespace//
#include<iostream>
using namespace std;
namespace first
{
    void fun()
    {
       cout<<"first"<<endl;
     }
};

namespace second
{
    void fun()
   {
    cout<<"second"<<endl;
   }
};

using namespace first;
int main()
{
    fun();
    //first::fun();
    return 0;
}

