/*
 * Teacher.h
 *
 *  Created on: Mar 26, 2018
 *      Author: keith
 */

#ifndef TEACHER_H_
#define TEACHER_H_

#include "Person.h"

class Teacher: public Person {
public:
	Teacher();
	virtual ~Teacher();
	virtual void work();
};

#endif /* TEACHER_H_ */
