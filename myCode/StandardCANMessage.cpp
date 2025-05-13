/*
 * StandardCANMessage.cpp
 *
 *  Created on: 9 May 2025
 *      Author: mateo
 */

#include <sstream>

#include "StandardCANMessage.h"
#include <iomanip>

using namespace std;

StandardCANMessage::StandardCANMessage(uint16_t id, uint8_t dlc, const std::array<uint8_t, 8> &data) : CANMessage{dlc, data}, standardID{id}
{
}

uint32_t StandardCANMessage::getID() const
{
	return standardID;
}

std::string StandardCANMessage::toString() const
{
    ostringstream ss;
	ss << "StandardID: 0x" << hex << standardID << ", DLC: " << dec << static_cast<int>(dlc) << ", Data: ";
	for (size_t i = 0; i < dlc; ++i)
	{
		ss << hex << setw(2) << setfill('0') << static_cast<int>(data[i]) << ' ';
	}
	return ss.str();
}
