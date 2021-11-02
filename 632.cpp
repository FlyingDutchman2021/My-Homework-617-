#include <iostream>
#include <iomanip>

using namespace std;

int chessBoard[8][8];
void cleanBoard(){
    for (int i=0;i<8;i++){
        for (int j=0;j<7;j++){
            chessBoard[i][j]=0;
        }
    }
}

int currentRow=0,currentColumn=0;

int moveRow[8]={-1,-2,-2,-1,1,2,2,1};
int moveColumn[8]={2,1,-1,-2,-2,-1,1,2};

int originalRandomNumber, cyclingRandomNumber;
bool isTheEnd = false;

int moveTime = 2;


bool isValidMove(int &inputRow, int &inputColumn){
    if (inputRow < 8 && inputColumn < 8 && inputRow >= 0 && inputColumn >= 0 && chessBoard[inputRow][inputColumn] == 0){
        return true;
    }else{
        return false;
    }
}

void addCyclingNumber(int &target){
    target += 1;
    if (target > 7){
        target -= 8;
    }
}

void move(){
    int tempRow,tempColumn;
    tempRow = currentRow + moveRow[cyclingRandomNumber];
    tempColumn = currentColumn + moveColumn[cyclingRandomNumber];

    if (isValidMove(tempRow,tempColumn) == true){
        currentRow = tempRow;
        currentColumn = tempColumn;
    }else{
        addCyclingNumber(cyclingRandomNumber);
        if (cyclingRandomNumber == originalRandomNumber){
            isTheEnd = true;
        }else{
            move();
        }
    }
}

int main(){
    int SEED;
    cin>>SEED;
    srand(SEED);
    cleanBoard();

    chessBoard[0][0]=1;
    while(isTheEnd == false){
        originalRandomNumber = rand() % 8;
        cyclingRandomNumber = originalRandomNumber;
        move();
        if (isTheEnd == true){
            break;
        }
        chessBoard[currentRow][currentColumn]= moveTime;
        moveTime += 1;
    }

    for (int i=0;i<8;i++){
        for (int j=0;j<8;j++){
            cout<<setw(3)<<chessBoard[i][j];
        }
        cout<<endl;
    }

    return 0;
}