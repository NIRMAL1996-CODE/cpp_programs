//create a structure in c++ named book with its member variables//
#include<iostream>
#include<string.h>
using namespace std;

struct book//here struct is a keyword for sturctures and book is a datatype//
{
    int bookid;
    char title[20];//these are member variables//
    float price;
};

int main()
{//struct keyword is optional to write in program in c++ ,but its compulsory in c language//
    struct book b1;//here we declared variable b1 of book datatype//
    b1.bookid=10;//using dot operator we can access member of structure//
    
   // b1.title="art of living";
    //this is wrong as array type is not assignable because their names(like title)act as constant pointers to their 1st elements. this pointer behaviour means you can't reassign the entire array's address//

    // to copy a string into an array, you must use a function like strcpy that cpoies the contents character by character.//
    strcpy(b1.title,"art of living");
    b1.price=300.0;
    
    cout<<"BOOKID= "<<b1.bookid<<endl<<"BOOK TITLE= "<<b1.title<<endl<<"BOOK PRICE= "<<b1.price<<endl;
    return 0;
}

