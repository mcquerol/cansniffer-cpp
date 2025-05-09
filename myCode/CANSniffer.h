/*
 * CANSniffer.h
 *
 *  Created on: 9 May 2025
 *      Author: mateo
 */

#ifndef CANSNIFFER_H_
#define CANSNIFFER_H_

#include "CANMessageInterpreter.h"
#include <vector>
#include <memory>

class CANSniffer
{
private:
    std::vector<std::shared_ptr<CANMessageInterpreter>> interpreters;

public:
    void addInterpreter(const std::shared_ptr<CANMessageInterpreter>& interpreter);
    void receiveMessage(const std::shared_ptr<CANMessage>& message);
};

#endif /* CANSNIFFER_H_ */
