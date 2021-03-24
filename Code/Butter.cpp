#include "Butter.h"
#include "zav1.h"
#include <iostream>

using namespace std;

Butter::Butter() {
	name = "";
	dobavka = 1;
	price = 0;
}

Butter::Butter(string a, bool b, int c) {
	name = a;
	dobavka = b;
	price = c;
}

int Butter::get_price() {
	return price;
}

bool Butter::get_dobavka() {
	return dobavka;
}

string Butter::get_name() {
	return name;
}

void Butter::set_name(string a) {
	name = a;
}

void Butter::set_dobavka(bool b) {
	dobavka = b;
}

void Butter::set_price(int c) {
	price = c;
}
