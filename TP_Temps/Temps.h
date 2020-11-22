#pragma once
class Temps
{
public:
	Temps();
	Temps(int, int, int);
	void afficherHeureFr();
	void afficherHeureEn();
	bool inferieur(const Temps &t);
	Temps operator>>(const Temps& t);

private:
	int heure, min, sec;
};

