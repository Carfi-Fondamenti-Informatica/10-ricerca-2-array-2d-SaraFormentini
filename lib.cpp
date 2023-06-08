#include <iostream>
#include "lib.h"
using namespace std;

void init (char mat[], int n){
    for(int i=0;i<n;i++){
        mat[i]= ' ';
    }
}
void init(char mat[5][15]){
    for(int i=0;i<5;i++){
        init(mat[i],15);
    }
}
void inserimento(char nomi[5][15], char cognomi[5][15]){
    for(int i=0; i<5;i++){
        inserimento(nomi[i],15);
        inserimento(cognomi[i],15);
    }
}


void inserimento(char mat [], int n){
    char temp[n*10];
     init(temp,n*10);
    cin>>temp;
    for(int i=0; i<15;i++){
        temp [i]= mat[i];
    }
}


int ricerca (char nomi[5][15], char cognomi [5][15], char nome[15], char cognome[15]){
    for(int i=0;i<5;i++){
        for(int j=0;j<15;j++){
            if (nomi[i][j]!=nome[j] || cognomi [i][j]!= cognome [j]){
                return -1;
            }else{
                return i;
            }
        }
    }
}

