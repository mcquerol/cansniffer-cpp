/*
 * CANMessage.h
 *
 *  Created on: 9 May 2025
 *      Author: mateo
 */

#ifndef CANMESSAGE_H
#define CANMESSAGE_H

#include <array>
#include <stdint.h>
#include <string>

class CANMessage
{
protected:
    uint8_t dlc; // data length code (0-8)
    std::array<uint8_t, 8> data;

public:
    CANMessage(uint8_t dlc, const std::array<uint8_t, 8>& data);
    virtual ~CANMessage() = default;

    virtual uint32_t getId() const;
    virtual std::string toString() const = 0;
};

#endif /* CANMESSAGE_H_ */
