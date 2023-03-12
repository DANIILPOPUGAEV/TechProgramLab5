#pragma once
#include <iostream>
#include <string>
#include <random>

using namespace std;

class Mechanical;

class Watch
{
protected:

	string name;
	string country;
	int prise;

public:

	void set_name(string a) { name = a; }
	string get_name() { return name; }

	void set_country(string b) { country = b; }
	string get_country() { return country; }

	void set_prise(int c)  { prise = c; }
	int get_prise() { return prise; }
};

class Electronical: private Watch
{
private:
	
	int battery;
	int dial;

public:

	void set_battery(int d) { battery = d; }
	int get_battery() { return battery; }

	void set_dial(int e) { dial = e; }
	int get_dial() { return dial; }

	void set_name(string a) { name = a; }
	string get_name() { return name; }

	void set_country(string b) { country = b; }
	string get_country() { return country; }

	void set_prise(int c) { prise = c; }
	int get_prise() { return prise; }

	friend string Maximum(Electronical electronical[5], Mechanical mechanical[5]);
};

class Mechanical: public Watch
{
private:
	int weight;
	int diametr;

public:
	void set_weight(int f) { weight = f; }
	int get_weight() { return weight; }

	void set_diametr(int g) { diametr = g; }
	int get_diametr() { return diametr; }

	friend string Maximum(Electronical electronical[5], Mechanical mechanical[5]);
};
string Maximum(Electronical electronical[5], Mechanical mechanical[5])
{
	int max = 0;
	string nameofWatch;
	for (int i = 0; i < 5; i++)
	{
		if (electronical[i].get_prise() > max)
		{
			max = electronical[i].get_prise();
			nameofWatch = electronical[i].get_name();
		}
	}
	for (int i = 0; i < 5; i++)
	{
		if (mechanical[i].get_prise() > max)
		{
			max = mechanical[i].get_prise();
			nameofWatch = mechanical[i].get_name();
		}
	}
	return nameofWatch;
}