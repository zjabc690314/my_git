#define _CRT_SECURE_NO_WARNINGS

#include "golf.h"
#include <cstring>
#include <iostream>


using namespace std;


void setgolf(golf& g, const char* name, int hc)
{
	strcpy(g.fullname, name);
	g.handicap = hc;
}

void setgolf(golf& g)
{
	char name[Len];
	int handicap;

	cout << "handicap: ";
	cin >> handicap;
	cout << "name: ";
	cin.getline(name, Len);

	setgolf(g, name, handicap);
}

void showgolf(golf& g)
{
	cout << "name: " << g.fullname << endl
		<< "handicap: " << g.handicap << endl;
}