#pragma once
#include <iostream>
#include <string>
using namespace std;
class Butter
{
	string name;
	bool dobavka;
	int price;
public:
	Butter();
	Butter(string a, bool b, int c);
	string get_name();
	bool get_dobavka();
	int get_price();
	void set_name(string a);
	void set_dobavka(bool b);
	void set_price(int c);
	friend ostream& operator<< (ostream& out, const Butter& butter) {
		out << butter.name << " " << butter.dobavka << " " << butter.price << " ";
		return out;
	}
};