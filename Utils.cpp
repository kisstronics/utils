/*
 * Utils.cpp
 *
 *  Created on: 25-Mar-2017
 *      Author: root
 */

#include "Utils.h"

Utils::Utils() {
	// TODO Auto-generated constructor stub

}

Utils::~Utils() {
	// TODO Auto-generated destructor stub
}
std::string Utils::ToString(int val) {
	ostringstream ss;
	ss << val;
	try {
		return ss.str();
	} catch (exception &e) {
		cout << e.what() << endl;
	}
	return "";
}

