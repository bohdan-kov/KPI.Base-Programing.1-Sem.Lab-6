#include <iostream>
using namespace std;

int base[10];
int result[10];
int data_result[2] = { 0, 0 }; //Створення масива для зберігання поч. кінця серії


void input_numbers() {
	cout << "Input numbers of date:" << endl;
	int tmp_num;
	for (int i = 0; i <= 9; i++) {
		cout << "Numbers #" << i << ": ";
		cin >> tmp_num;
		base[i] = tmp_num;
	}
}

void out_numbers() {
	int len_arr = data_result[1] - data_result[0];
	cout << "Result numbers: ";
	for (int i = 0; i < (9 - len_arr); i++) { 
		cout << result[i] << " ";
	}
	cout << endl;
}

int main()
{   
	input_numbers();
	int j;
	for (int i = 0; i <= 9; i++) {
		j = i + 1;
		while (j < 10 && base[i] == base[j])
		{
			j++;
			if (j - i > (data_result[1] + 1) - data_result[0]) {
				data_result[0] = i; //Початок серії
				data_result[1] = j - 1; //Кінець серії
			}
		}
	}
	cout << endl << endl << "Start Iterations: " << data_result[0] << " Finish Iterations: " << data_result[1] << endl << endl << endl;

	int index_res = 0;
	for (int i = 0; i <= 9; i++) {
		if (i < data_result[0] || i > data_result[1]) {
			result[index_res] = base[i];
			index_res++;
		}
	}
	out_numbers();
}