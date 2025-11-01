#pragma once

class PaymentProcessor {
public:
    virtual void executePayment(double amount) = 0;
    virtual ~PaymentProcessor() {}
};
