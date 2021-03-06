/*
 * variable.cpp
 *
 *  Created on: 13 août 2014
 *      Author: valentin
 */

# include "variable.h"

Variable::Variable(std::string iName)
	: mName (iName)
	, mIsBinary (false)
	, mLowerLimit (0)
	, mUpperLimit (PINF) {
}

Variable::Variable(std::string iName, bool iIsBinary)
	: mName (iName)
	, mIsBinary (iIsBinary)
	, mLowerLimit (0)
	, mUpperLimit (iIsBinary ? 1 : PINF) {}

Variable::Variable(const Variable& iVariable)
	: mName (iVariable.mName)
	, mIsBinary (iVariable.mIsBinary)
	, mLowerLimit (iVariable.mLowerLimit)
	, mUpperLimit (iVariable.mUpperLimit) {}

Variable::~Variable() {}

bool
Variable::operator<(const Variable iRightVariable) const {
	return true;
}
