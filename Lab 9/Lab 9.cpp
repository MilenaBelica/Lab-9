#include <iostream>
using namespace std;

int poleprostokata(int x, int y);

struct Zadanie1 {
	int x;
	int y;
};
struct Zadanie2 {
	int a;
	int b;
};
int main() {

	//zadanie 1
	Zadanie1 zmienna;
	zmienna.x = 10;
	zmienna.y = 20;

	cout << zmienna.x << "\t" << zmienna.y << endl;

	//zadanie 2
	Zadanie2 prostokat;
	prostokat.a = 10;
	prostokat.b = 20;

	cout << poleprostokata(prostokat.a, prostokat.b) << endl;

	//zadanie 3

}
int poleprostokata(int x, int y) {
	return x * y;
}