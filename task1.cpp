#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){

    srand(time(nullptr));

    int randomNumber;
    randomNumber= (rand()% 100 + 1);

    int guess;

    cout << "HELLO,WELCOME TO THE NUMBER GUESSING GAME" << endl;
    cout << "THE NUMBER IS IN BETWEEN 1 AND 100.CAN YOU GUESS WHAT IT IS???" << endl;

    do {

    
    cout << "PLEASE ENTER YOUR GUESS " << endl;
    cin >> guess;

    
        if(guess < randomNumber){
           cout << "TRY BIGGER NUMBER" << endl;
        }

        else if(guess > randomNumber){
           cout << "TRY SMALLER NUMBER" << endl;
        }
    

        else {
        cout << "CONGRATULATIONS,YOUR GUESS IS CORRECT" << endl ;
        cout << "YOU WON" ;
        }
        }while(guess!=randomNumber);

        

    
       
       return 0;
}



    

