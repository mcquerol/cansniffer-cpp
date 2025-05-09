/*
 * CANMessage.cpp
 *
 *  Created on: 9 May 2025
 *      Author: mateo
 */

#include "CANMessage.h"

CANMessage::CANMessage(uint8_t dlc, const std::array<uint8_t, 8> &data) : dlc{dlc}, data{data}
{
}

uint8_t CANMessage::getDLC() const
{
	return dlc;
}

std::array<uint8_t, 8> CANMessage::getData() const
{
	return data;
}
