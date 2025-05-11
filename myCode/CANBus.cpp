/*
 * VehicleCANBus.cpp
 *
 *  Created on: 9 May 2025
 *      Author: mateo
 */

#include "CANBus.h"
#include <iostream>

using namespace std;

void CANBus::sendMessage(const std::shared_ptr<CANMessage> &message)
{
	messageQueue.emplace_back(message);
}

bool CANBus::hasMessages() const
{
	return !messageQueue.empty();
}

const std::vector<std::shared_ptr<CANMessage>>& CANBus::getMessageQueue() const
{
	return messageQueue;
}

void CANBus::clear()
{
	messageQueue.clear(); //check individually clearing shared pointers is needed
}

std::ostream& operator <<(std::ostream& out, const CANBus& bus)
{
	while(bus.hasMessages())
	{
		auto queue = bus.getMessageQueue();
		for(const auto& message : queue)
		{
			out << message->toString() << endl;
		}
	}

	return out;
}
