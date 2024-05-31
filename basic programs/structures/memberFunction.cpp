// create a structure in c++ using encapsulation//
#include<iostream>
using namespace std;
//structures c c does not all encapsulation in it, but this possible with c++//
struct book
/*this is call encapsulation, when we bundling data and related functions 
together while controlling access using access specifiers like public,private, and protected.*/
{
    int bookid;
    char title[20];
    float price;
    
   void input()
   {
       cout<<"enter bookid, title, price of book";
       cin>>bookid>>title>>price;
   }
    void display()
    {
        cout<<"BOOKID= "<<bookid<<endl<<"BOOK TITLE= "<<title<<endl<<"BOOK PRICE= "<<price<<endl;
    }
};
 
int main()
{
    struct book b1;
    b1.input();
    b1.display();
    return 0;
}

