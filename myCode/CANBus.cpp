/*
 * VehicleCANBus.cpp
 *
 *  Created on: 9 May 2025
 *      Author: mateo
 */

#include "CANBus.h"

void CANBus::sendMessage(const std::shared_ptr<CANMessage> &message)
{
	messageQueue.emplace_back(message);
}

std::shared_ptr<CANMessage> CANBus::receiveMessage()
{
}

bool CANBus::hasMessages() const
{
}

void CANBus::clear()
{
}

std::ostream operator <<(std::ostream &out, const CANBus &bus)
{
}
