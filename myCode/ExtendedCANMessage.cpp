/*
 * ExtendedCANMessage.cpp
 *
 *  Created on: 9 May 2025
 *      Author: mateo
 */

#include "ExtendedCANMessage.h"
#include <sstream>

using namespace std;

ExtendedCANMessage::ExtendedCANMessage(uint32_t id, uint8_t dlc, const std::array<uint8_t, 8> &data) : extendedID{id}, CANMessage{dlc, data}
{
}

uint32_t ExtendedCANMessage::getID() const
{
	return extendedID;
}

std::string ExtendedCANMessage::toString() const
{
    ostringstream ss;
	ss << "ExtendedID: 0x" << hex << extendedID << ", DLC: " << dec << dlc << ", Data: ";
	for (size_t i = 0; i < dlc; ++i)
	{
		ss << static_cast<char>(data[i]);
	}
	return ss.str();
}
