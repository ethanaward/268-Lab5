/**
*	@file : PreconditionViolationException.h
*	@author : Ethan Ward
*	@date : 2015.03.16
*	@brief: Inherits from std::runtime_error to create a new type of exception that passes in a message to the std::runtime_error constructor.
*/
#ifndef PRECONDITIONVIOLATIONEXCEPTION_H
#define PRECONDITIONVIOLATIONEXCEPTION_H

#include <stdexcept>

class PreconditionViolationException: public std::runtime_error{

public:
/**
	*  @pre None
	*  @post Creates a PreconditionViolationException, and passes the message taken in to the std::runtime_error constructor
	*  @return None
	*/
	PreconditionViolationException(const char* message);
};

#endif
