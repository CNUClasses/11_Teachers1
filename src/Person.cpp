/*
 * Person.cpp
 *
 *  Created on: Mar 26, 2018
 *      Author: keith
 */

#include "Person.h"

Person::Person() {
	this->iID= sID++;
}

Person::~Person() {
	// TODO Auto-generated destructor stub
}

void Person::getTime(){
	
	w.getTime();
}

//initializethis
int Person::sID=0;


