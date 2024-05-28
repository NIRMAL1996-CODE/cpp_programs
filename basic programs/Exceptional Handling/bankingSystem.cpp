//write a program on banking system using exceptional handling//
#include<iostream>
#include<stdexcept>//library for exception class//

using namespace std;

int main()
{
    double bal=1000;//present balance in account//
    
    try//under try block we write code that may throw an exception//
    {
        double amt;//declare variable for deposit or withdrawn amount//
        
        //deposit//
        cout<<"Enter Deposit Amount :  ";
        cin>>amt;
        if(amt<=0)
        {
            throw invalid_argument("INVALID DEPOSIT AMOUNT");//throw keyword is used to signal an error or exceptional conditio. when throw is excuted proram looks for the nearest 'catch' block. that can handle the specific type of exception being thrown//
        }
        bal= bal+ amt;// current amt after deposit//
        cout<<"Available Amount :  "<<bal<<endl;
        
        //withdrawn//
        cout<<"Enter Withdrawn Amount :  ";
        cin>>amt;
        if(amt<=0)
        {
            throw invalid_argument("INVALID WITHDRAWN AMOUNT");
            //invalid argument is a standard exception type in c++ used to indicate that an argument passed to a function is invalid//
        }
        
        if(amt>bal)
        {
            throw runtime_error("INSUFFICIENT AMOUNT");
            //runtime error is a standard exception type in c++ used to indicate error that occur during program's excution//
        }
            bal= bal- amt;//current amt after withdrawn//
            cout<<"Available Amount :  "<<bal<<endl;
        
    }
    //catch is a keyword in c++ used to handle exceptions that are thrown within a try block.when an exception occurs within the try block, control is transferred to the appropriate catch block that matches the type of the thrown exception, allowing the program to handle the exceptional condition gracefully.//
    //under catch block we write code that to handle the exception//
    
    /*syntax:- catch(exceptionType& e)
                  {
                     //exception handling code
                  }
      1. exceptionType= type of exception to catch
     2. e means parameter to store the eception object
     3. code inside the catch block handles the exception
     4. what() = display strings describing the exception which has thrown */
    
    
    catch (exception &e)
    {
        cout<<e.what()<<endl;
    }
}
