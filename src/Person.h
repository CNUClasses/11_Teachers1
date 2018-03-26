/*
 * Person.h
 *
 *  Created on: Mar 26, 2018
 *      Author: keith
 */

#ifndef PERSON_H_
#define PERSON_H_
#include "Watch.h"

class Person {
private:
	Watch w;
	static int sID;	//just a number to ID the person
protected:
	int iID;
public:
	Person();
	virtual ~Person();
	virtual void work()=0;
	void getTime();
};

#endif /* PERSON_H_ */
