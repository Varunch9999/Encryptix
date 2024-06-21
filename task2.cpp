#include<iostream>

using namespace std;
int main(){
    double num1,num2;
    char operation;

    cout << "Enter the first number :" << endl;
    cin  >> num1;
    cout << "Enter the second number :" << endl;
    cin  >> num2;
    cout << "   CHOOSE THE OPERATION   " <<endl;
    cout <<"For addition press + symbol" <<endl;
    cout <<"For subtraction press - symbol"<<endl;
    cout <<"For multiplication press * symbol"<<endl;
    cout <<"For division press / symbol"<<endl;
    cin >>operation;

    switch(operation) {
        case '+' :
        cout << "RESULT :" << num1+num2 << endl;
        break ;
        case '-' :
        cout << "RESULT :" << num1-num2 << endl;
        break ;
        case '*' :
        cout << "RESULT :" << num1*num2 << endl;
        break ;
        case '/' :
        if(num2!=0){
            cout<<"RESULT :" << num1/num2 << endl;
        }
        else {
            cout << "ERROR :Division by 0 is not valid" << endl;
        };
        break;
        default :
        cout << "ERROR : Invalid operation" <<endl;
    }
    return 0;

}

