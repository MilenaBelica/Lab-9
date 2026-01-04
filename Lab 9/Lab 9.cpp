#include <iostream>
using namespace std;

struct Zadanie1 {
	int x;
	int y;
};
struct Zadanie2 {
	int a;
	int b;
};
struct Trojkat {
	int a;
	int b;
	int c;
};
struct Konto {
	int numer;
	int saldo;
};

int poleprostokata(int x, int y);
void funkcja(Trojkat trojkat_1, Trojkat* trojkat_2);
void zaktualizuj(Konto noweDane, Konto* stareKonto);


int main() {
	/*
	//zadanie 1
	Zadanie1 zmienna;
	zmienna.x = 10;
	zmienna.y = 20;

	cout << zmienna.x << "\t" << zmienna.y << endl;

	//zadanie 2
	//sprobuj zobic tez innym sposobem - obiekt struktury jako argument funkcji
	Zadanie2 prostokat;
	prostokat.a = 10;
	prostokat.b = 20;

	cout << poleprostokata(prostokat.a, prostokat.b) << endl;

	//zadanie 3
	Trojkat trojkat_1;
	Trojkat trojkat_2;

	trojkat_1 = { 2,3,4 };
	trojkat_2 = { 5,6,8 };
	
	funkcja(trojkat_1, &trojkat_2);
	*/
	//zadanie 4*
	Konto noweDane = {1315, 11000 };
	Konto stareKonto = { 1315, 500 };

	zaktualizuj(noweDane, &stareKonto);
	cout << stareKonto.saldo;
}
void zaktualizuj(Konto noweDane, Konto* stareKonto) {
	stareKonto->numer = noweDane.numer;
	stareKonto->saldo = noweDane.saldo;
}
void funkcja(Trojkat trojkat_1, Trojkat* trojkat_2) {
	trojkat_2->a = trojkat_1.a;
	trojkat_2->b = trojkat_1.b;
	trojkat_2->c = trojkat_1.c;
}
int poleprostokata(int x, int y) {
	return x * y;
}