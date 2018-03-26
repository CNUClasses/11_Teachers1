/*
 * Prof.h
 *
 *  Created on: Mar 26, 2018
 *      Author: keith
 */

#ifndef PROF_H_
#define PROF_H_

#include "Teacher.h"

class Prof: public Teacher {
public:
	Prof();
	virtual ~Prof();
	virtual void work();
};

#endif /* PROF_H_ */
