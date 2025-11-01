#include "ECommerceStore.h"
#include "ProcessorAdapters.h"
#include <memory>

int main() {
    ECommerceStore store;

    std::cout << "=== Using PayPal for payment ===" << std::endl;
    store.selectPaymentProcessor(std::make_unique<PayPalProcessorAdapter>("user@example.com"));
    store.processOrder(150.50);

    std::cout << "=== Switching to Stripe for payment ===" << std::endl;
    store.selectPaymentProcessor(std::make_unique<StripeProcessorAdapter>("USD"));
    store.processOrder(299.99);

    std::cout << "=== Using Stripe with different currency ===" << std::endl;
    store.selectPaymentProcessor(std::make_unique<StripeProcessorAdapter>("EUR"));
    store.processOrder(89.75);

    return 0;
}
