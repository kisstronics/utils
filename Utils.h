/*
 * Utils.h
 *
 *  Created on: 25-Mar-2017
 *      Author: Kisstronics
 */

#ifndef UTILS_H_
#define UTILS_H_

#include <iostream>
#include <sstream>

using namespace std;

class Utils {
public:
	Utils();
	virtual ~Utils();

	std::string ToString(int val);
};

#endif /* UTILS_H_ */
