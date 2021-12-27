#include<iostream>

using namespace std;

enum colors {BLUE = 1, GREEN, LIGHT_LIGHT_BLUE, RED, PURPLE, YELLOW, WHITE, GRAY, LIGHT_BLUE, LIGHT_GREEN, L3_BLUE, LIGHT_RED, LIGHT_PURPLE, LIGHT_YELLOW, LIGHT_WHITE};

void switchColor(int color) {
	switch (color) {
		case BLUE:
			system("color 01");
			break;
		case GREEN:
			system("color 02");
			break;
		case LIGHT_LIGHT_BLUE:
			system("color 03");
			break;
		case RED:
			system("color 04");
			break;
		case PURPLE:
			system("color 05");
			break;
		case YELLOW:
			system("color 06");
			break;
		case WHITE:
			system("color 07");
			break;
		case GRAY:
			system("color 08");
			break;
		case LIGHT_BLUE:
			system("color 09");
			break;
		case LIGHT_GREEN:
			system("color 0A");
			break;
		case L3_BLUE:
			system("color 0B");
			break;
		case LIGHT_RED:
			system("color 0C");
			break;
		case LIGHT_PURPLE:
			system("color 0D");
			break;
		case LIGHT_YELLOW:
			system("color 0E");
			break;
		case LIGHT_WHITE:
			system("color 0F");
			break;
		default:
			system("color 00");
	}
}

int main() {
	setlocale(LC_ALL, "");
	//  Вывести на экран пустой прямоугольник
	//	с заданными размерами заданным символом заданного цвета.
	char symbol;
	int height, width, color;
	cout << "Введите длину прямоугольника: ";
	cin >> height;
	cout << "Введите ширину прямоугольника: ";
	cin >> width;
	cout << "Введите цвет прямоугольника (от 1 до 15): ";
	cin >> color;
	cout << "Введите символ которым будет отрисован прямоугольник: ";
	cin >> symbol;
	system("cls");
	switchColor(color);

	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			if (i == 0 || j == 0 || i == width - 1 || j == height - 1) {
				cout << " " << symbol;
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}

	return 0;
}