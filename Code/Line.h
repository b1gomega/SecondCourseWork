#pragma once
#include <iostream>
#include <string>
using namespace std;
class Line {
	double x1;
	double x2;
	double y1;
	double y2;
	string color;
public:
	Line();
	Line(double val_x1, double val_x2, double val_y1, double val_y2);
	double get_x1();
	void set_x1(double val_x1);
	double get_x2();
	void set_x2(double val_x2);
	double get_y1();
	void set_y1(double val_y1);
	double get_y2();
	void set_y2(double val_y2);
	string get_color();
	void set_color(string val_color);
	Line operator>>=(Line op2);
	void show();
	friend ostream& operator<< (ostream& out, const Line& line) {
		out << "Koordinats new line: " << endl << "Koordinat x1 -> " << line.x1 << endl << "Koordinat x2 -> " << line.x2 << endl << "Koordinat y1 -> " << line.y1 << endl << "Koordinat y2 -> " << line.y2 << endl;
		return out;
	}

};
