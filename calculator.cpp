/* Rumana Khan 
 * Computer Science 1 L02
 * Hw#5
 */

#include <iostream>
#include <cmath>
using namespace std;

// the functions of the calculator where A is most likely a bigger integer
int Add(int A, int B);
int Sub(int A, int B);
int Multiply(int A, int B);
double Divide(int A, int B);
int Remainder( int A, int B);
// Fibonacci B equals the term and will be cin
int Fibonacci (int B);


int main()
{
   int A;
   int B;
   char oper;
   bool value = 0;

// This is welcome section 

   cout << "You are in calculator mode!";
   cout << "Please enter all operations in A Op B, where A and B are integers";
   cout << " Op can be: + - * / % F; " << endl;
   cout << "Fibonacci must start with 1, and B must be between 1 and 30.";
   cout << "Finally, to quit the program please enter 0 $ 0." << endl;
   cout << "Please enter A";
   cout << " Then please enter which operation you would like: +, -, *, /, %, F" << endl;
   cout << "Enter B afterwards" << endl;
   
// where the loop starts     
   do 
   {
   cout << "[CALC] ";
   cin >> A;
   cin >> oper;
   cin >> B;
   switch (oper)
   {
       case '+': 
           cout << Add(A, B) << endl;
           value = 1;
           break;
       case '-':
           cout << Sub(A, B) << endl;
           value = 1;
           break;
       case '*':
           cout << Multiply(A, B) << endl;
           value = 1;
           break;
       case '/':
           if (B == 0)
           {
               cout << "B can not be zero.The calculator will now be reseted." << endl;
               cout << "Please enter all operations in A Op B, where A and B are integers";
               cout << " Op can be: + - * / % F; " << endl;
               cout << "Fibonacci must start with 1, and B must be between 1 and 30.";
               cout << "Finally, to quit the program please enter 0 $ 0." << endl;
               cout << "Please enter A";
               cout << " Then please enter which operation you would like: +, -, *, /, %, F" << endl;
               cout << "Enter B afterwards" << endl;
               value = 1;
           }
           else 
          {
                cout << Divide(A, B) << endl;
                value = 1;
           }
           break;
       case '%':
           if (B == 0)
           {
               cout << "B can not be zero.The calculator will now be reseted." << endl;
               cout << "Please enter all operations in A Op B, where A and B are integers";
               cout << " Op can be: + - * / % F; " << endl;
               cout << "Fibonacci must start with 1, and B must be between 1 and 30.";
               cout << "Finally, to quit the program please enter 0 $ 0." << endl;
               cout << "Please enter A";
               cout << " Then please enter which operation you would like: +, -, *, /, %, F" << endl;
               cout << "Enter B afterwards" << endl;
               value = 1;
           }
           else 
           {
                cout << Remainder(A, B) << endl;
                value = 1;
           }
           break;
       case 'F':
       case 'f':
           if (A != 1)
           {
               cout << "A MUST BE 1!!! THE CALCULATOR WILL RESET NOW.";
               cout << "Please enter all operations in A Op B, where A and B are integers";
               cout << " Op can be: + - * / % F; " << endl;
               cout << "Fibonacci must start with 1, and B must be between 1 and 30.";
               cout << "Finally, to quit the program please enter 0 $ 0." << endl;
               cout << "Please enter A";
               cout << " Then please enter which operation you would like: +, -, *, /, %, F" << endl;
               cout << "Enter B afterwards" << endl;
               value = 1;
           }
           else if ((B > 30) && (B < 0))
           {
               cout << "B MUST BE BETWEEN 1 AND 30. Calculator will not reset.";
               cout << "Please enter all operations in A Op B, where A and B are integers";
               cout << " Op can be: + - * / % F; " << endl;
               cout << "Fibonacci must start with 1, and B must be between 1 and 30.";
               cout << "Finally, to quit the program please enter 0 $ 0." << endl;
               cout << "Please enter A";
               cout << " Then please enter which operation you would like: +, -, *, /, %, F" << endl;
               cout << "Enter B afterwards" << endl;
               value = 1;
           }
           else 
           {
                cout << "1 F " << B << endl; 
                cout << Fibonacci(B) << endl;
                value = 1;
           }
           break;
 // THIS WILL END THE CALC
     default :
          if (A == 0 && oper == '$' && B == 0)
       { 
           cout << "You have decided to quit." << endl;
           value = 0;
       }
 // THIS IS FOR INVALID OPER

          else 
          {
               cout << "That is unvalid. Please enter 0 $ 0 to quit.The calculator will now reset.";
               cout << "Please enter all operations in A Op B, where A and B are integers";
               cout << " Op can be: + - * / % F; " << endl;
               cout << "Fibonacci must start with 1, and B must be between 1 and 30.";
               cout << "Finally, to quit the program please enter 0 $ 0." << endl;
               cout << "Please enter A";
               cout << " Then please enter which operation you would like: +, -, *, /, %, F" << endl;
               cout << "Enter B afterwards" << endl;
               value = 1;

          }  
      }
      }
       while (value == 1); 
          
        return 0;
}

// THE FUNCTIONS

int Add(int A, int B)
{ 
    return (A+B);
}

int Sub(int A, int B)
{ 
    return (A-B);
}

int Multiply(int A, int B)
{ 
    return (A*B);
}

double Divide(int A, int B)
{ 
   
        return static_cast<double>(A)/B;
    
}

int Remainder(int A, int B)
{  
    return (A % B);
}
int Fibonacci(int B)
{
    int i;
    int A = 1;
    int b = 1;
    int C;
    if (B <= 2)
        C = 1;
    else 
    {
        for (i = 2; i < B ; i++)
        {
            C = A + b;
            A = b;
            b = C;
        }
    }
    return C;
}








    





