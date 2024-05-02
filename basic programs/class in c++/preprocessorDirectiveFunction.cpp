//preprocessor directives function//
#include<iostream>
using namespace std;

#define max(x,y) (x>y?x:y)
#define msg(x) #x
int main()
{
    cout<<max(10,12)<<endl;
    return 0;
}