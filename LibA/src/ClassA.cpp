/*
 * ClassA.cpp
 *
 *  Created on: 3 Dec 2013
 *      Author: student
 */

#include <LibA/ClassA.h>
#include <iostream>



ClassA::ClassA() {}

ClassA::ClassA(std::string s) {
    name_ = s;
    std::cout << "ClassA object created " << s << std::endl;
}

ClassA::~ClassA() {
    std::cout << "Class A destroyed " << name_ << std::endl;
}

