#pragma once
#include"Drink.h"
#include<string>
using namespace std;
class Cold_drinks : public Drink
{
public:;
	  string type, ingredients, sugar;
	  int kaloria;
	  Cold_drinks();
	  Cold_drinks(string name, int price, string company, string country, string type, string ingredients, int kaloria, string sugar);
	  void printCold_drinks();
};

