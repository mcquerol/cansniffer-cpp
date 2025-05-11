/*
 * ExtendedCANMessage.cpp
 *
 *  Created on: 9 May 2025
 *      Author: mateo
 */

#include "ExtendedCANMessage.h"

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
	string result;
    result = "ExtendedId: 0x" + extendedID + ", DLC: " + dlc + ", Data: ";
    for (const auto& byte : getData())
    {
    	result += static_cast<int>(byte) + ' ';
    }
    return result;
}
