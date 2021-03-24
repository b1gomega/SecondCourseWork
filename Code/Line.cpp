#include "Line.h"
#include "zav2.h"
#include <iostream>

using namespace std;

Line::Line() {
	x1 = x2 = y1 = y2 = 0;
	color = "";
}

Line::Line(double val_x1, double val_x2, double val_y1, double val_y2) {
	x1 = val_x1;
	x2 = val_x2;
	y1 = val_y1;
	y2 = val_y2;
}

double Line::get_x1() {
	return x1;
}

double Line::get_x2() {
	return x2;
}

double Line::get_y1() {
	return y1;
}

double Line::get_y2() {
	return y2;
}

string Line::get_color() {
	return color;
}

void Line::set_x1(double val_x1) {
	x1 = val_x1;
}

void Line::set_x2(double val_x2) {
	x2 = val_x2;
}

void Line::set_y1(double val_y1) {
	y1 = val_y1;
}

void Line::set_y2(double val_y2) {
	y2 = val_y2;
}

void Line::set_color(string val_color) {
	color = val_color;
}

Line Line::operator>>=(Line op2) {
	Line temp;
	temp.x1 = (x1 + op2.x1) / 2.0;
	temp.x2 = (x2 + op2.x2) / 2.0;
	temp.y1 = (y1 + op2.y1) / 2.0;
	temp.y2 = (y2 + op2.y2) / 2.0;
	return temp;
}

void Line::show() {
	cout << "Koordinats new line: " << endl;
	cout << "Koordinat x1 -> " << x1 << endl;
	cout << "Koordinat x2 -> " << x2 << endl;
	cout << "Koordinat y1 -> " << y1 << endl;
	cout << "Koordinat y2 -> " << y2 << endl;
}
