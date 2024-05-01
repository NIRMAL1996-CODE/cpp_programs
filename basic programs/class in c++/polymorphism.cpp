//write a program to demonstrates polymorphism//
#include<iostream>
#include<string>
using namespace std;

class animal
{
public:
    void animalsound()
    {
        cout<<"THE ANIMALS MAKES SOUNDS\n";
    }
};
class duck: public animal
{
public:
   void animalSound() {
     cout << "The pig says: wee wee \n";
   }
};

class dog :public animal
{
public:
   void animalSound() {
     cout << "The dog says: bow wow \n";
   }
};
int main()
{
    animal objanimal;
    duck objduck;
    dog objdog;
    objanimal.animalsound();
    objduck.animalsound();
    objdog.animalsound();
    return 0;
}