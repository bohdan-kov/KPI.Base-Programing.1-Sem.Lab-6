#include <iostream>
using namespace std;

int cout_elem;
int base[1000];

void input() {
    srand(time(NULL));
    cout << "Input cout numbers (<=1000): ";
    cin >> cout_elem;
    for (int i = 0; i < cout_elem; i++) {
        base[i] = 1 + rand() % 35; // Генерація чисел від 1 до 25
    }
}

int main()
{   
    input();

    cout << endl << "Standart Array:" << endl;

    for (int i = 0; i < cout_elem; i++) {
        cout << base[i] << " ";
    }

    int iter, jter;
    int x;
    for (iter = 1; iter < cout_elem; iter++)
    {
        x = base[iter];
        jter = iter;

        while ((jter > 0) && (x < base[jter - 1])) 
        {
            base[jter] = base[jter - 1];
            jter--;
        }
        base[jter] = x;
    }

    cout << endl << endl << "Sorting array:" << endl << endl;

    for (int i = 0; i < cout_elem; i++) {
        cout << base[i] << " ";
    }
}
