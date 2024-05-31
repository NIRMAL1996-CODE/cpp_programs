// create a structure in c++ named book with its member variables and its member function//
#include<iostream>
using namespace std;

struct book
{
    int bookid;
    char title[20];
    float price;
};
book input()
{
    book b;
    cout<<"enter bookid, title, price of book";
    cin>>b.bookid>>b.title>>b.price;
    return b;
}

int main()
{
    //1st//
    struct book b1={10, "books",200.0};
    //input by user by using this three methods//
    //2nd//
    b1 = input();
    //3rd//
    cout<<"enter bookid, title, price of book";
    cin>>b1.bookid>>b1.title>>b1.price;
   
    
    return 0;
}

