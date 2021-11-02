#include <iostream>
#include<iomanip>

using namespace std;

int moveRow[8]={-1,-2,-2,-1,1,2,2,1};
int moveColumn[8]={2,1,-1,-2,-2,-1,1,2};
int chessBoard[8][8];

bool continueOrNot = true;

int currentRow;
int currentColumn;

int counterMove = 1;

void cleanUpArray(int inputArray[8][8]){
    for (int i = 0; i<8; i++){
        for (int j=0; j<8; j++){
            inputArray[i][j]=0;
        }
    }
}


void checkMove(){
    int outputRow=-1,outputColmn=-1;
    bool isOK=false;
    for (int moveNumber = 0; moveNumber < 8; moveNumber += 1){
        outputRow = currentRow + moveRow[moveNumber];
        outputColmn = currentColumn + moveColumn[moveNumber];
       if (outputRow < 8 && outputRow >= 0 && outputColmn < 8 && outputColmn >= 0 && chessBoard[outputRow][outputColmn] == 0){
           currentRow = outputRow;
           currentColumn = outputColmn;
           isOK=true;
           break;
       }
    }
    if (isOK == false){
        continueOrNot = false;
    }

}


int main(){

    cleanUpArray(chessBoard);

    cin>>currentRow>>currentColumn;

    chessBoard[currentRow][currentColumn]=1;
    checkMove();
    while(1){
        if (continueOrNot == true){
            counterMove += 1;
            chessBoard[currentRow][currentColumn]=counterMove;
        }else{
            break;
        }
    checkMove();
    }

    for (int i=0;i<8;i++){
        for (int j=0;j<8;j++){
            cout<<setw(3)<<chessBoard[i][j];
        }
        cout<<endl;
    }

    return 0;
}