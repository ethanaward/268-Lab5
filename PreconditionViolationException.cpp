/**
*	@file : PreconditionViolationException.cpp
*	@author : Ethan Ward
*	@date : 2015.03.16
*	@brief: Implements the functionality of PreconditionViolationException.h.
*/
#include "PreconditionViolationException.h"

PreconditionViolationException::PreconditionViolationException(const char* message):std::runtime_error(message) {

}
