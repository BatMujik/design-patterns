#pragma once
#include "PaymentProcessor.h"
#include <memory>

class ECommerceStore {
private:
    std::unique_ptr<PaymentProcessor> processor;

public:
    void selectPaymentProcessor(std::unique_ptr<PaymentProcessor> newProcessor);
    void processOrder(double totalCost);
};
