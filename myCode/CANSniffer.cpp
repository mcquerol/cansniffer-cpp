/*
 * CANSniffer.cpp
 *
 *  Created on: 9 May 2025
 *      Author: mateo
 */

#include "CANSniffer.h"

void CANSniffer::addInterpreter(const std::shared_ptr<CANMessageInterpreter>& interpreter)
{
	interpreters.emplace_back(interpreter);
}

void CANSniffer::receiveMessage(const std::shared_ptr<CANMessage>& message)
{
	//TODO check with requirements what to do here
}
