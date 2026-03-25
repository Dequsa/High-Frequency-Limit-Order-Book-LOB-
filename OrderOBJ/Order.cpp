#include "Order.h"

Order::Order(long long int id,
             uint8_t type,
             double quantity,
             double price,
             long long int timestamp)
{
    this->id = id;
    this->type = type;
    this->quantity = quantity;
    this->price = price;
    this->timestamp = timestamp;
}

bool Order::operator==(const Order &that)
{
    if (this != &that)
    {
        if (price == that.price && quantity == that.quantity)
        {
            return true;
        }

        return false;
    }

    return true;
}