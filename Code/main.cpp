#include <iostream>
#include "Butter.h"
#include "zav1.h"
#include "Line.h"
#include "zav2.h"
using namespace std;

int main() {
	int ChooseTask;
	cout << "The developer of the course work on object-oriented programming is Dedovskiy Dmytro, a student of group IT-91" << endl;
	cout << "In the coursework we have 2 tasks.\nIf you want open first task - enter number 1.\nIf you want open second task - enter number 2.\nYou choose ->";
	cin >> ChooseTask;
	while (!cin.good() || cin.fail() || (ChooseTask != 1 && ChooseTask != 2)) {
		cout << "In the coursework we have 2 tasks.\nIf you want open first task - enter number 1.\nIf you want open second task - enter number 2.\nYou choose ->";
		cin.clear();
		cin.ignore(32767, '\n');
		cin >> ChooseTask;
	}
	system("cls");
	if (ChooseTask == 1) {
		cout << "\nResult First Task -> " << Print_Res_zav1() << endl;
	}
	else {
		cout << "\nResult Second   Task \n" << Print_Res_zav2() << endl;
	}
	system("pause");
	return 0;

}