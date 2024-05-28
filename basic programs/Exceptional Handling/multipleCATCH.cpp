/*Write a C++ program that using multiple catch*/

#include<iostream>
#include<stdexcept>//library for exception class//

using namespace std;
int division( int a , int b)
{
    if(b==0)
        throw 1;
    return a/b;
}
int main()
{
    try 
    {
        throw 1;
       // throw 'a';
       // throw 1.5f;
    }
    catch (int e)
    {
        cout<<"INT CATCH "<<endl;
    }
    catch (char e)
    {
        cout<<"CHAR CATCH "<<endl;
    }
    catch (...)
    {
        cout<<"ALL CATCH "<<endl;
    }
    cout<<"BYE"<<endl;
}
