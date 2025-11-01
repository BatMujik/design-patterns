#pragma once

#include <iostream>
#include <string>

class PayPalService {
public:
    void transferMoney(const std::string& accountName, double amount) {
        std::cout << "PayPal: Transferring $" << amount << " to account '" << accountName << "'." << std::endl;
        std::cout << "PayPal: Transfer completed successfully!" << std::endl;
    }
};

class StripeService {
public:
    void chargeCard(double amount, const std::string& currencyCode) {
        std::cout << "Stripe: Charging $" << amount << " in " << currencyCode << "." << std::endl;
        std::cout << "Stripe: Card charged successfully!" << std::endl;
    }
};
