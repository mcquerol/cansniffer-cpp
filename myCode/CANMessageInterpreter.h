/*
 * CANMessageInterpreter.h
 *
 *  Created on: 9 May 2025
 *      Author: mateo
 */

#ifndef CANMESSAGEINTERPRETER_H_
#define CANMESSAGEINTERPRETER_H_

#include "CANMessage.h"
#include <memory>

class CANMessageInterpreter
{
public:
    virtual ~CANMessageInterpreter() = default;
    virtual void interpret(const std::shared_ptr<CANMessage>& message) = 0;
};


#endif /* CANMESSAGEINTERPRETER_H_ */
