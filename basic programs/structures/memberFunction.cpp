// create a structure in c++ named book with its member variables and its member function//
#include<iostream>
using namespace std;

struct book
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

