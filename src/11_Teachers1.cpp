//============================================================================
// Name        : 11_Teachers1.cpp
// Author      : 
// Version     :
// Copyright   : Steal this code!
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <vector>
#include <memory>
#include <iostream>
#include "Prof.h"

using namespace std;


int main() {
	//simple demo
	//	Person *p;
	//	Teacher t;
	//	Prof pf;
	//	
	//	p=&t;
	//	p->work();
	//	p->getTime();
	//	
	//	p=&pf;
	//	p->work();
	//	p->getTime();	
	
	//demo using vector full of unique pointers to Person objects
	//where the people go, BTW you need c++11 for the unique_ptrs
	vector<unique_ptr<Person>> myPeople;
	
	//add some Profs
	myPeople.push_back( unique_ptr<Person>(new Prof()));
	myPeople.push_back( unique_ptr<Person>(new Prof));

	//add some Teachers
	myPeople.push_back( unique_ptr<Person>(new Teacher()));
	myPeople.push_back( unique_ptr<Person>(new Teacher));
	
	for(auto &p:myPeople)
		p->work();
	
	//notice that I do not need to delete what the unique_ptr's point to
	

	return 0;
}
