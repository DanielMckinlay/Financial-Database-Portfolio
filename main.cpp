#include <iostream>
#include "headers/Order"
int main()
{
    Order order;
    order.orderOwner = "Vodafone";
    std::cout << order.orderOwner << "\n";
}