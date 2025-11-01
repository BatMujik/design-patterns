#include "ProcessorAdapters.h"

PayPalProcessorAdapter::PayPalProcessorAdapter(const std::string& account)
    : accountName(account) {
    paypalService = std::make_unique<PayPalService>();
}

void PayPalProcessorAdapter::executePayment(double amount) {
    std::cout << "Adapter: Converting request for PayPal..." << std::endl;
    paypalService->transferMoney(accountName, amount);
}

StripeProcessorAdapter::StripeProcessorAdapter(const std::string& currency)
    : currencyCode(currency) {
    stripeService = std::make_unique<StripeService>();
}

void StripeProcessorAdapter::executePayment(double amount) {
    std::cout << "Adapter: Converting request for Stripe..." << std::endl;
    stripeService->chargeCard(amount, currencyCode);
}
