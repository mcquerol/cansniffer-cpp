#include <iostream>
#include <array>
#include <memory>
#include "CANBus.h"
#include "StandardCANMessage.h"
#include "ExtendedCANMessage.h"

int main()
{
    CANBus bus;

    // Create some CAN messages
    std::array<uint8_t, 8> data1 = {10, 20, 30, 40, 50, 60, 70, 80};
    std::array<uint8_t, 8> data2 = {1, 2, 3, 4, 5, 6, 7, 8};

    std::shared_ptr<CANMessage> msg1 = std::make_shared<StandardCANMessage>(0x123, 8, data1);
    std::shared_ptr<CANMessage> msg2 = std::make_shared<ExtendedCANMessage>(0x1ABCDE, 8, data2);

    // Send messages to the bus
    bus.sendMessage(msg1);
    bus.sendMessage(msg2);

    // Print contents of the CAN bus
    std::cout << "CAN Bus Contents:\n" << bus << std::endl;

    return 0;
}
