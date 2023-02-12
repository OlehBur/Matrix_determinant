#include <iostream>
#include <Windows.h>
#include <cstdio>


using namespace std;

int main()
{

	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);


	int sizeMatrix = 0, matrixElements[4], matrixElements2[9];

	for (int i = 0; i < 120; i++)cout << "@";
	cout << " Вас вітає обчислювач визначників квадратних матриць\n";
	for (int i = 0; i < 120; i++)cout << "@";
	cout << endl << endl;
	while (true) {
		cout << " Введіть розмір квадратної матриці (2 або 3): \n";
		cin >> sizeMatrix;


		switch (sizeMatrix) {
		case 2:
			cout << endl;
			cout << " Введіть всі 4 елементи матриці в рядок через пробіл\n A = ";

			cin >> matrixElements[0] >> matrixElements[1] >> matrixElements[2] >> matrixElements[3];
			cout << " det(A) = " << matrixElements[0] * matrixElements[3] - matrixElements[1] * matrixElements[2] << endl;
			break;
		case 3:
			cout << endl;
			cout << " Введіть всі 9 елементів матриці в рядок через пробіл\n A = ";

			cin >> matrixElements2[0] >> matrixElements2[1] >> matrixElements2[2] >> matrixElements2[3] >> matrixElements2[4] >> matrixElements2[5] >> matrixElements2[6] >> matrixElements2[7] >> matrixElements2[8];
			cout << " det(A) = " << matrixElements2[0] * matrixElements2[4] * matrixElements2[8] + matrixElements2[2] * matrixElements2[3] * matrixElements2[7] + matrixElements2[1] * matrixElements2[5] * matrixElements2[6] - (matrixElements2[2] * matrixElements2[4] * matrixElements2[6] + matrixElements2[1] * matrixElements2[3] * matrixElements2[8] + matrixElements2[0] * matrixElements2[5] * matrixElements2[7]) << endl;
			break;`
		default:
			cout << endl;
			cout << " Недопустимий розмір матриці.....\n";
			return EXIT_SUCCESS;
		}
		for (int i = 0; i < 120; i++)cout << "_";

	}


}

