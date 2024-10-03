#include "Ship.h"




int main() {
	Ship* myObjPointer = nullptr;
	myObjPointer = new Ship();

	delete myObjPointer;


	Ship* myObjPointer = nullptr;
	myObjPointer = new Ship("new ship");

	delete myObjPointer;
}
