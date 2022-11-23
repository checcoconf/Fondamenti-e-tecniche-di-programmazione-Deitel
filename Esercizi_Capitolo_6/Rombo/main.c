#include <stdio.h>
#define SIZE 7

int main() {
    char A[SIZE][SIZE];

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            A[i][j] = ' ';
        }
    }
    A[0][3] = '*';
    A[6][3] = '*';

    for(int i = 1; i < SIZE-1; i++){
        for(int j = 1; j < SIZE-1; j++){
            if(i+j ==  3 || i+j == 9 || i+j % 2 == 1 || j+i % 2 == 1 || i-j % 2 == 1 || j-i % 2 == 1){
                A[i][j] = '*';
            }
        }
    }

    for(int j = 0; j < SIZE; j++){
        A[3][j] = '*';
    }


    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            printf("%c ",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
