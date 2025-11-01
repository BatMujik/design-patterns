#include "ECommerceStore.h"
#include <iostream>
#include <utility> 

void ECommerceStore::selectPaymentProcessor(std::unique_ptr<PaymentProcessor> newProcessor) {
    processor = std::move(newProcessor);
}

void ECommerceStore::processOrder(double totalCost) {
    std::cout << "--- Processing order with total: $" << totalCost << " ---" << std::endl;

    if (processor) {
        processor->executePayment(totalCost);
        std::cout << "--- Order processed successfully. ---" << std::endl << std::endl;
    } else {
        std::cerr << "ERROR: Payment processor not configured!" << std::endl;
        std::cout << "--- Order processing failed. ---" << std::endl << std::endl;
    }
}
