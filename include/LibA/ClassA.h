/*
 * ClassA.h
 *
 *  Created on: 3 Dec 2013
 *      Author: student
 */

#ifndef CLASSA_H_
#define CLASSA_H_

#include <string>

class ClassA {
public:
    ClassA();
    ClassA(std::string output);
	virtual ~ClassA();

private:
    std::string name_;
};

#endif /* CLASSA_H_ */
