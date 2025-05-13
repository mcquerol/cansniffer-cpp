/*
 * ExtendedCANMessage.cpp
 *
 *  Created on: 9 May 2025
 *      Author: mateo
 */

#include "ExtendedCANMessage.h"
#include <sstream>
#include <iomanip>

using namespace std;

ExtendedCANMessage::ExtendedCANMessage(uint32_t id, uint8_t dlc, const std::array<uint8_t, 8> &data) : CANMessage{dlc, data}, extendedID{id}
{
}

uint32_t ExtendedCANMessage::getID() const
{
	return extendedID;
}

std::string ExtendedCANMessage::toString() const
{
    ostringstream ss;
	ss << "ExtendedID: 0x" << hex << extendedID << ", DLC: " << dec << static_cast<int>(dlc) << ", Data: ";
	for (size_t i = 0; i < dlc; ++i)
	{
		ss << hex << setw(2) << setfill('0') << static_cast<int>(data[i]) << ' ';
	}
	return ss.str();
}
