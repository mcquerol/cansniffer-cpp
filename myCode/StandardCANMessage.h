/*
 * StandardCANMessage.h
 *
 *  Created on: 9 May 2025
 *      Author: mateo
 */

#ifndef STANDARDCANMESSAGE_H_
#define STANDARDCANMESSAGE_H_

#include "CANMessage.h"

class StandardCANMessage : public CANMessage
{
private:
    uint16_t standardID;  // 11-bit ID stored in 16-bit container

public:
    StandardCANMessage(uint16_t id, uint8_t dlc, const std::array<uint8_t, 8>& data);

    uint32_t getID() const override;
    std::string toString() const override;
};

#endif /* STANDARDCANMESSAGE_H_ */
