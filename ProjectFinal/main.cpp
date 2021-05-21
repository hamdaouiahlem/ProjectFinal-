
#include <iostream>
#include <string>
#include "Case.h"
#include "Robot.h"
#include "ZoneGeographique.h"
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	Robot r(1, 1);
	r.choisir();
	r.setValeurs();
	r.parcours();
	return 0;
}

