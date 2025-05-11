/*
 * StandardCANMessage.cpp
 *
 *  Created on: 9 May 2025
 *      Author: mateo
 */

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
	string result;
    result = "StandardID: 0x" + to_string(standardID) + ", DLC: " + to_string(dlc) + ", Data: ";
    for (const auto& byte : getData())
    {
    	result += static_cast<int>(byte) + ' ';
    }
    return result;
}
