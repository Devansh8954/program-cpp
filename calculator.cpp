#include <iostream>

using namespace std;

class calculator
{
    public :
     double num1;
     double num2;
     double ans;
     char op; 
};

    int main()
    {
        calculator myObj;
        myObj.num1;
        myObj.num2;
        myObj.op;
        myObj.ans;

        cout <<"Enter number 1" << endl;
        cin >> myObj.num1;
        cout <<"Enter number 2" << endl;
        cin >> myObj.num2;
        cout <<"Enter an operator (+, -, *, /, %):" << endl;
        cin >> myObj.op;

        switch(myObj.op) {
         case '+': myObj.ans = myObj.num1 + myObj.num2;
            break;
         case '-':
         if(myObj.num1>myObj.num2)
         {
            myObj.ans = myObj.num1 - myObj.num2;
         } 
         else{
            myObj.ans = myObj.num2 - myObj.num1;
         }
            break;
         case '*': myObj.ans = myObj.num1 * myObj.num2;
            break;
         case '/':
         if(myObj.num1>myObj.num2)
         {
            myObj.ans = myObj.num1 / myObj.num2;
         } 
         else{
            myObj.ans =myObj.num2 / myObj.num1;
         }
            break;

      default: cout <<"Error! Enter correct operator";
         return;

          cout <<"The result of the input is as given below :";
       if(myObj.num1>myObj.num2){
         cout << myObj.num1 << " " << myObj.op << " " << myObj.num2 <<" = " << myObj.ans;
        }
         else{
            cout << myObj.num2 << " " << myObj.op << " " << myObj.num1 << " = " << myObj.ans;
        }
   }

    return 0;
}
