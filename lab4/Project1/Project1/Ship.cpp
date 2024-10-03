#include "Ship.h"


//default constructor
Ship::Ship() : name("N/A") {
	cout << "A Ship was created named: " << name << endl;
};

//parameterized constructors
Ship::Ship(string name) : name() {
	cout << "A Ship named: " << name << "has sunk " << endl;
};
Ship::~Ship() {
	cout << "destructor is working for : " << name << endl;
}
