#include "Cold_drinks.h"
#include<string>
#include<iostream>
using namespace std;
Cold_drinks :: Cold_drinks() {
}
Cold_drinks :: Cold_drinks(string name, int price, string company, string country, string type, string ingredients, int kaloria, string sugar) {
	this->name = name;
	this->price = price;
	this->company = company;
	this->country = country;
	this->type = type;
	this->ingredients = ingredients;
	this->kaloria = kaloria;
	this->sugar = sugar;
}
void Cold_drinks :: printCold_drinks() {
	cout << name << " " << price << " " << company << " " << country << " "
		<< type << " " << ingredients << " " << kaloria << " " << sugar << endl;
}