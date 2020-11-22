#include "Temps.h"
#include <iostream>
#include <string>
using namespace std;

Temps::Temps()
{
	this->heure = 0;
	this->min = 0;
	this->sec = 0;
}

Temps::Temps(int h, int m, int s)
{
	this->heure = h;
	this->min = m;
	this->sec = s;
}

void Temps::afficherHeureFr()
{
	cout << to_string(this->heure) + ":" + to_string(this->min) + ":" + to_string(this->sec)<< endl;
}

void Temps::afficherHeureEn()
{
	if (this->heure > 12 && this->heure < 23)
	{
		int hour;
		hour = this->heure - 12;
		cout << to_string(hour) + ":" + to_string(this->min) + ":" + to_string(this->sec) + " PM" << endl;
	}
	else {
		cout << to_string(this->heure) + ":" + to_string(this->min) + ":" + to_string(this->sec) + " AM" << endl;
	}
}

bool Temps::inferieur(const Temps& t)
{
	if (this->heure < t.heure || this->min < t.min || this->sec < t.sec) {
		return true;
	}
	return false;
}

Temps Temps::operator>>(const Temps& t)
{
	cin >> t.heure;
	cin >> t.min;
	cin >> t.sec;
	return t;
}