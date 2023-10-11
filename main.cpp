#include <iostream>
void task1() {
    int max;
    for (int i = 0; i < 3; i++) {
        int a;
        std::cout << "Enter chislo: ";
        std::cin >> a;
        if (a >= max)
        {
            max = a;
        }
    }
    std::cout << "max " << max << std::endl;
}

void task2()
{
    int a, i, f;

    std::cout << "Enter chislo: ";
    std::cin >> a;
    f = 0;
    for (i = 1; i <= a; i++) {
        f = f + i;
    }
    std::cout << f << std::endl;
}

void task3()
{
    int i,j;

    for (i=1; i<100; i++)
    {
        int kol=0;
        for (j=1; j<=i; j++)
            if (i%j==0) kol++;
        if (kol==1 || kol==2)
            std::cout << i << " ";
    }
    std::cout << std::endl;
}

void task4()
{
    int a, i, f;

    std::cout << "Enter chislo: ";
    std::cin >> a;
    f = 1;
    for (i = 1; i <= a; i++) {
        f = f * i;
    }
    std::cout << f << std::endl;
}

    const int N =5;
    const int M = 3;

    void Print_Matr(int A[N][M]);
    void Input_Matr(int A[N][M]);
    void Change_Els(int A[N][M]);
    void swap(int A[N][M], int l)

    void swap(int A[N][M], int k) {
        int j;
        int B[M];
        for (j = 0; j < M; j++) {
            B[j] = A[k][j];
            A[k][j] = A[N - 1 - k][j];
            A[N - 1 - k][j] = B[j];
        }
    }

    void Change_Els(int A[N][M]) {
        int i;
        for ( i = 0; i < (int)N / 2 ; ++i) {
            swap(A, i);
        }
    }

    void Print_Matr(int A[N][M]) {
        int i, j;
        for (i = 0; i < N ; i++) {
            for (j = 0; j < M ; j++) {
                std::cout << A[i][j] << " ";
            }
        }
        std::cout <<  std::endl;
    }

    void Input_Matr(int A[N][M]) {
        int i, j;
        for (i = 0; i < N ; i++) {
            for (j = 0; j < M ; j++) {
                std::cout << A[i][j];
            }
        }
    }

int main() {
//  task1();
//  task2();
//  task3();
//  task4();

    int A[N][M];
    Input_Matr(A);
    Print_Matr(A);
    Change_Els(A);
    Print_Matr(A);
    return 0;
}
