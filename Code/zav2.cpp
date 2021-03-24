#include "zav2.h"
#include "Line.h"
#include <iostream>
#include <fstream>
using namespace std;

Line Print_Res_zav2() {
	double x1, x2, y1, y2;
	cout << "We have two lines, enter koordinats" << endl;
	cout << "First line, koordinat x1 -> ";
	cin >> x1;
	while (!cin.good() || cin.fail()) {
		cout << "First line, koordinat x1 -> ";
		cin.clear();
		cin.ignore(32767, '\n');
		cin >> x1;
	}
	cout << "First line, koordinat x2 -> ";
	cin >> x2;
	while (!cin.good() || cin.fail()) {
		cout << "First line, koordinat x2 -> ";
		cin.clear();
		cin.ignore(32767, '\n');
		cin >> x2;
	}
	cout << "First line, koordinat y1 -> ";
	cin >> y1;
	while (!cin.good() || cin.fail()) {
		cout << "First line, koordinat y1 -> ";
		cin.clear();
		cin.ignore(32767, '\n');
		cin >> y1;
	}
	cout << "First line, koordinat y2 -> ";
	cin >> y2;
	while (!cin.good() || cin.fail()) {
		cout << "First line, koordinat y2 -> ";
		cin.clear();
		cin.ignore(32767, '\n');
		cin >> y2;
	}
	Line first(x1, x2, y1, y2);
	cout << "First line, koordinat x1 -> ";
	cin >> x1;
	while (!cin.good() || cin.fail()) {
		cout << "First line, koordinat x1 -> ";
		cin.clear();
		cin.ignore(32767, '\n');
		cin >> x1;
	}
	cout << "First line, koordinat x2 -> ";
	cin >> x2;
	while (!cin.good() || cin.fail()) {
		cout << "First line, koordinat x2 -> ";
		cin.clear();
		cin.ignore(32767, '\n');
		cin >> x2;
	}
	cout << "First line, koordinat y1 -> ";
	cin >> y1;
	while (!cin.good() || cin.fail()) {
		cout << "First line, koordinat y1 -> ";
		cin.clear();
		cin.ignore(32767, '\n');
		cin >> y1;
	}
	cout << "First line, koordinat y2 -> ";
	cin >> y2;
	while (!cin.good() || cin.fail()) {
		cout << "First line, koordinat y2 -> ";
		cin.clear();
		cin.ignore(32767, '\n');
		cin >> y2;
	}
	cout << endl;
	Line second(x1, x2, y1, y2);
	Line test;
	test = first >>= second;
	ofstream myFile;
	myFile.open("zav2.txt");
	if (myFile.is_open()) {
		myFile << test << endl;
		cout << "Succesfully recorded in file called zav2.txt" << endl;
	}
	myFile.close();

	return test;
}