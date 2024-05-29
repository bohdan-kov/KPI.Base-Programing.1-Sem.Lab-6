#include <iostream>
using namespace std;

int base[10];

void input_array (){
    cout << "Input numbers array: " << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Input number #" << i + 1 << " ";
        cin >> base[i];
    }
}

int main()
{
    input_array();
    int max_elem[2]; //Масив для зберігання макс. елемн. (індек/елемент)
    int min_elem[2]; //Масив для зберігання мін. елемен. (індек/елемент)

    max_elem[0] = 0;
    min_elem[0] = 0;

    max_elem[1] = base[0];
    min_elem[1] = base[0];

    for (int i = 0; i < 10; i++) {
        if (max_elem[1] < base[i]) {
            max_elem[0] = i;
            max_elem[1] = base[i];
        }
        if (min_elem[1] > base[i]) {
            min_elem[0] = i;
            min_elem[1] = base[i];
        }
    }
    if (max_elem[0] > min_elem[0])
        cout << max_elem[1];
    else 
        cout << min_elem[1];

}
