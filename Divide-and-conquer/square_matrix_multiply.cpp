//
// Created by logan on 2020/4/8.
//

#include "iostream"

using namespace std;
/*
//n阶矩阵A，B相乘暴力解法
int **Square_Matrix_Multiply(int A[2][2], int B[2][2], int n) {
    int **C;
    C = (int **) malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}

int main() {
    int** C;
    int A[2][2] = { {1, 2} , {3, 4} };
    int B[2][2] = { {1, 2} , {3, 4} };
    C = Square_Matrix_Multiply(A, B, 2);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;*/
#define LEN 4

typedef struct
{
    int rowstart;
    int rowend;
    int colstart;
    int colend;
}Square;

int A[LEN][LEN]={{1,2,3,4},{3,4,5,6},{5,6,7,8},{7,8,9,10}};
int B[LEN][LEN]={{5,6,7,8},{7,8,9,10},{11,12,13,14},{15,16,17,18}};

void recurMult(int C[LEN][LEN],Square a,Square b)
{
    if(a.rowstart==a.rowend && a.colstart==a.colend &&
       b.rowstart==b.rowend && b.colstart==b.colend)
    {
        C[a.rowstart][b.colstart]+=A[a.rowstart][a.colstart]*B[b.rowstart][b.colstart];
        return;
    }

    Square a11={a.rowstart,(a.rowstart+a.rowend)/2,a.colstart,(a.colstart+a.colend)/2};
    Square a12={a.rowstart,(a.rowstart+a.rowend)/2,(a.colstart+a.colend)/2+1,a.colend};
    Square a21={(a.rowstart+a.rowend)/2+1,a.rowend,a.colstart,(a.colstart+a.colend)/2};
    Square a22={(a.rowstart+a.rowend)/2+1,a.rowend,(a.colstart+a.colend)/2+1,a.colend};
    Square b11={b.rowstart,(b.rowstart+b.rowend)/2,b.colstart,(b.colstart+b.colend)/2};
    Square b12={b.rowstart,(b.rowstart+b.rowend)/2,(b.colstart+b.colend)/2+1,b.colend};
    Square b21={(b.rowstart+b.rowend)/2+1,b.rowend,b.colstart,(b.colstart+b.colend)/2};
    Square b22={(b.rowstart+b.rowend)/2+1,b.rowend,(b.colstart+b.colend)/2+1,b.colend};

    recurMult(C,a11,b11);
    recurMult(C,a12,b21);
    recurMult(C,a11,b12);
    recurMult(C,a12,b22);
    recurMult(C,a21,b11);
    recurMult(C,a22,b21);
    recurMult(C,a21,b12);
    recurMult(C,a22,b22);
}

void print(int a[LEN][LEN])
{
    for(int i=0;i<LEN;i++)
    {
        for(int j=0;j<LEN;j++)
        {
            printf("%4d ",a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int C[LEN][LEN]={0};
    Square a={0,LEN-1,0,LEN-1};
    Square b={0,LEN-1,0,LEN-1};
    recurMult(C,a,b);
    print(C);
}