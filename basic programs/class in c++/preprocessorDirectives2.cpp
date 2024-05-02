//preprocessor directives//
#include<iostream>
using namespace std;

#define PI 3.1425
#ifndef PI
#definePI 3
#endif

int main()
{
    cout<<PI<<endl;
    return 0;
}