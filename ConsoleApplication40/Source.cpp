#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int x;
	cout << "" << endl;
	cin >> x;

	if (x == 1) {
	//Дан целочисленный квадратный массив 10×10.Найти сумму элементов  каждой строки.

		int x[10][10],sum;

		for (int i = 0; i < 10; i++) {
			sum = 0;
			for (int j = 0; j < 10; j++) {
				x[i][j] = 1 + rand() % 99;
				sum += x[i][j];
				cout << x[i][j] << " \t";
			}
			cout << "=   " << sum << endl;
		}

		
	}

	else if (x == 2) {
	//Дан целочисленный квадратный массив 4×4.Найти строку с наименьшей суммой элементов
		int x[4][4], sum,min=2000,f;

		for (int i = 0; i < 4; i++) {
			sum = 0;
			cout << i <<") "<< " \t";
			for (int j = 0; j < 4; j++) {
				x[i][j] = 1 + rand() % 99;
				sum += x[i][j];
				cout << x[i][j] << " \t";
			}
			cout<<"=  "<<sum<<endl;
			if (sum < min) {
				min = sum;
				f = i;
			}			
		}
		cout <<"Найменьшая сумма находиться "<<f<<" строке и = "<<min<< endl;
	}

	else if (x == 3) {
	//Дана целочисленная матрица  6× 8. Найти произведение положительных элементов первого столбца.
		int x[6][8], sum=1;

		for (int i = 0; i < 6; i++) {
			cout << i << ") " << " \t";
			for (int j = 0; j < 8; j++) {
				x[i][j] = -10 + rand() % 20;
				cout << x[i][j] << " \t";
			}	
			cout << endl;
		}
		for (int i = 0; i < 6; i++){
			if (x[i][0] > 0) {
				sum *= x[i][0];
			}
	}

		cout << "Произведение положительных элементов первого столбца = " << sum << endl;
	}

	else if (x == 4) {
	//Дан двухмерный целочисленный массив A(M, N).Составить  одномерный массив B из номеров строк этого массива
	
		int x[5][5],y[5];
		for (int i = 0; i < 5; i++) {
			cout << i << ") " << " \t";
			for (int j = 0; j < 5; j++) {
				x[i][j] = 10 + rand() % 90;
				cout << x[i][j] << " \t";

			}
			y[i] = i;
			cout << endl;
		}
		for (int i = 0; i < 5; i++) {
			cout << y[i] << endl;
		}


	}

}