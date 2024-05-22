#include <string>
#include <iostream>
using namespace std;


int contar(int num) {
	return std::to_string(std::abs(num)).length();
}



int primeros(int n,int x) {
	string sub;
	for (int i{ 0 }; i < n; i++) {
		sub = sub + to_string(i);
	}
	int s = stoi(sub);
	return s;
}

int ultimos(int n, int x) {
	string sub;
	for (int i{ n }; i < contar(x); i++) {
		sub = sub + to_string(i);
	}
	int s = stoi(sub);
	return s;
}

void asignar(int x, int y) {
	x = y;
}

int restar(int a, int b) {
	return a - b;
}

int Mult10(int m, int n) {
	return m * 10 ^ n;
}

int sumar(int a, int b) {
	return a + b;
}

int Mult(int u, int v, int n, int base) {
	if (n == base) {
		return u * v;
	}
	else {
		int w{0}, x{ 0 }, y{ 0 }, z{ 0 }, m1{ 0 }, m2{ 0 }, m3{ 0 };
		asignar(w, primeros(n / 2, u));
		asignar(x, ultimos(n / 2, u));
		asignar(y, primeros(n / 2, v));
		asignar(z, ultimos(n / 2, v));

		asignar(m1, Mult(w, y, n / 2, base));
		asignar(m2, Mult(x, z, n / 2, base));

		asignar(m3, Mult(restar(w,x), restar(z,y), n / 2, base));
		return sumar(sumar(Mult10(m1, n), Mult10(sumar(sumar(m1, m2), m3), n / 2)), m2);
	}
}

int main() {

}