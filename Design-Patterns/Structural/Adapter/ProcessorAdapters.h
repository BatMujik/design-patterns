#pragma once
#include "PaymentProcessor.h" 
#include "ExternalAPIs.h"   
#include <memory>             

class PayPalProcessorAdapter : public PaymentProcessor {
private:
    std::unique_ptr<PayPalService> paypalService;
    std::string accountName; 

public:
    PayPalProcessorAdapter(const std::string& account);
    void executePayment(double amount) override;
};

class StripeProcessorAdapter : public PaymentProcessor {
private:
    std::unique_ptr<StripeService> stripeService;
    std::string currencyCode; 

public:
    StripeProcessorAdapter(const std::string& currency = "USD");
    void executePayment(double amount) override;
};
