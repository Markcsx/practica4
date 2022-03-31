
/*
 * main.cpp
 *
 *  Created on: 5 feb. 2019
 */

//
// Programa principal

// C++ headers
#include <iostream>
#include <fstream>
#include <cstdlib> // EXIT_SUCCESS
using namespace std;

// Llista de includes a afegir

#include "repte040a.h"

int
main(int argc, char const *argv[])
{
	ofstream fitxer;

	fitxer.open("repte040a.txt");
	Repte040a(cout);
	Repte040a(fitxer);
	fitxer.close();

	return EXIT_SUCCESS;
}
