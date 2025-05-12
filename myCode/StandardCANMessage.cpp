/*
 * StandardCANMessage.cpp
 *
 *  Created on: 9 May 2025
 *      Author: mateo
 */

#include <sstream>

#include "StandardCANMessage.h"

using namespace std;

StandardCANMessage::StandardCANMessage(uint16_t id, uint8_t dlc, const std::array<uint8_t, 8> &data) : standardID{id}, CANMessage{dlc, data}
{
}

uint32_t StandardCANMessage::getID() const
{
	return standardID;
}

std::string StandardCANMessage::toString() const
{
    ostringstream ss;
	ss << "StandardID: 0x" << hex << standardID << ", DLC: " << dec << dlc << ", Data: ";
	for (size_t i = 0; i < dlc; ++i)
	{
		ss << static_cast<char>(data[i]);
	}
	return ss.str();
}
