/*
 * VehicleCANBus.h
 *
 *  Created on: 9 May 2025
 *      Author: mateo
 */

#ifndef CANBUS_H_
#define CANBUS_H_

#include "CANMessage.h"
#include <vector>
#include <memory>

class CANBus {
private:
    std::vector<std::shared_ptr<CANMessage>> messageQueue;

public:
    void sendMessage(const std::shared_ptr<CANMessage>& message);
    std::shared_ptr<CANMessage> receiveMessage();
    bool hasMessages() const;
    void clear();
};

std::ostream operator<<(std::ostream& out, const CANBus& bus);

#endif /* CANBUS_H_ */
