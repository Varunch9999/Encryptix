#include<iostream>
using namespace std;

char board[3][3];
char currentplayer;

void initializeBoard(){
    currentplayer = 'X';
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            board[i][j]=' ';
        }
    }
}

void displayboard(){
    cout << "  0 1 2" <<endl;
     for(int i=0;i<3;i++){
        cout << i << " " ;
        for(int j=0;j<3;j++){
            cout << board[i][j];
            if(j<2){
                cout <<"|";
            }
        }
        cout << endl;
        if(i<2){
            cout << "  -----"<<endl;
        }
     }
}


bool isMovevalid(int row,int col){
    return row >=0 && row <3 && col >=0 && col<3 && board[row][col]==' ';
}

void playerMove(){
    int row,col;
    while (true){
        cout << "Player "<< currentplayer <<", enter your move (row and coloum) :";
        cin >> row >>col;
        if (isMovevalid(row,col)) {
            board[row][col]=currentplayer;
            break;
            }
            else {
                cout << "Invalid move.Try again."<< endl;
            }
        }
    }

bool checkWin(){
    for(int i=0;i<3;i++){
        if(board[i][0]==currentplayer && board[i][1]==currentplayer && board[i][2]==currentplayer)return true;
        if(board[0][i]==currentplayer && board[1][i]==currentplayer && board[2][i]==currentplayer)return true;
    }
    if(board[0][0]==currentplayer && board[1][1]==currentplayer && board[2][2]==currentplayer)return true;
    if(board[0][2]==currentplayer && board[1][1]==currentplayer && board[2][0]==currentplayer)return true;
    
    return false;
}

bool checkdraw(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(board[i][j]==' ')return false;
        }
    }
    return true;
}

void switchplayer(){
    currentplayer=(currentplayer=='X')?'0':'X';
}

int main() {
    char Playagain;
    do {
        initializeBoard();
        while(true){
            displayboard();
            playerMove();
            if (checkWin()){
                displayboard();
                cout << "Player " << currentplayer << " wins!"<<endl;
                break;
            }
            if(checkdraw()){
                displayboard();
                cout << "the game is draw!"<< endl;
                break;
            }
            switchplayer();


        }
        cout <<"do you want to play again? (y/n):";
        cin>>Playagain;
    }
    while(Playagain=='y' || Playagain =='Y');
    return 0;
}