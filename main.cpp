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



int main() {
//  task1();
//  task2();
//  task3();
//  task4();

    return 0;
}
