#pragma once
#include "../OrderOBJ/Order.h"

class OrderCreator
{
private:
    unsigned int max_pool_id;
    Order* pool;
    long long int current_id;
    unsigned int usr_id;
public:
    OrderCreator(const unsigned int pool_size);
    ~OrderCreator() = default;
    Order* MakeAnOrder(uint8_t order_type);
};

OrderCreator::OrderCreator(const unsigned int pool_size) : current_id(0), max_pool_id(pool_size - 1)
{
    pool = new Order[pool_size];
    this->usr_id = usr_id;
}
