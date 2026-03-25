#include "OrderCreator.h"

Order* OrderCreator::MakeAnOrder(uint8_t order_type)
{
    if (current_id >= max_pool_id)
    {
        std::cerr << "Max ammount of orders reached increase the pool size.";
        return nullptr
    }
    return &pool[current_id++];
}