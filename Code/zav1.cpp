#include "zav1.h"
#include "Butter.h"
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
double Print_Res_zav1() {
	int size;
	cout << "Size -> ";
	cin >> size;
	while (!cin.good() || cin.fail()) {
		cout << "Size -> ";
		cin.clear();
		cin.ignore(32767, '\n');
		cin >> size;
	}
	Butter* arr = new Butter[size];
	for (int i = 0; i < size; i++) {
		string name;
		bool dobavka;
		int price;
		cout << "Name oil -> ";
		cin.ignore(32767, '\n');
		getline(cin, name);
		cout << "Have additions(1 - yes, 0 - no) -> ";
		cin >> dobavka;
		while (!cin.good() || cin.fail()) {
			cout << "Have additions(1 - yes, 0 - no) -> ";
			cin.clear();
			cin.ignore(32767, '\n');
			cin >> dobavka;
		}
		cout << "Price -> ";
		cin >> price;
		while (!cin.good() || cin.fail()) {
			cout << "Price -> ";
			cin.clear();
			cin.ignore(32767, '\n');
			cin >> price;
		}
		arr[i] = Butter(name, dobavka, price);
	}
	bool SearchNumber;
	cout << "1. Oil, which have additions." << endl << "2. Oil, which do not have additions." << endl << "You choose -> ";
	int ChooseNumber;
	cin >> ChooseNumber;
	while (!cin.good() || cin.fail() || (ChooseNumber != 1 && ChooseNumber != 2)) {
		cout << "1. Oil, which have additions." << endl << "2. Oil, which do not have additions." << endl << "You choose -> ";
		cin.clear();
		cin.ignore(32767, '\n');
		cin >> ChooseNumber;
	}
	if (ChooseNumber == 1) {
		SearchNumber = 1;
	}
	else {
		SearchNumber = 0;
	}
	if (ChooseNumber) {
		cout << "A list of oils that have an additions: " << endl;
	}
	else {
		cout << "A list of oils that do not have an additions: " << endl;
	}
	int sum = 0;
	int amount = 0;
	for (int i = 0; i < size; i++) {
		if (SearchNumber) {
			if (arr[i].get_dobavka() == 1) {
				cout << amount + 1 << ". " << arr[i].get_name() << endl;
				amount++;
				sum = sum + arr[i].get_price();
			}
		}
		else {
			if (arr[i].get_dobavka() == 0) {
				cout << amount + 1 << ". " << arr[i].get_name() << endl;
				amount++;
				sum = sum + arr[i].get_price();
			}
		}
	}
	double res;
	res = (double)sum / amount;
	ofstream myFile;
	myFile.open("zav1.txt");
	if (myFile.is_open()) {
		myFile << res << endl;
		cout << "Successfully recorded in file called zav1.txt" << endl;
	}
	myFile.close();
	return res;
}