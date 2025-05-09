/*
 * ExtendedCANMessage.h
 *
 *  Created on: 9 May 2025
 *      Author: mateo
 */

#ifndef EXTENDEDCANMESSAGE_H_
#define EXTENDEDCANMESSAGE_H_

#include "CANMessage.h"

class ExtendedCANMessage : public CANMessage
{
private:
    uint32_t extendedID;  // 29-bit ID stored in 32-bit container

public:
    ExtendedCANMessage(uint32_t id, uint8_t dlc, const std::array<uint8_t, 8>& data);

    uint32_t getID() const;
    std::string toString() const;
};


#endif /* EXTENDEDCANMESSAGE_H_ */
