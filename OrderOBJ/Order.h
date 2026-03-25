#include <cstdint>
#include <iostream>
class Order
{
private:
    long long int id;
    uint8_t type;
    double quantity;
    double price;
    long long int timestamp;

public:
    Order() = default;
    Order(long long int id,
          uint8_t type,
          double quantity,
          double price,
          long long int timestamp);
    Order(Order &o) = default;
    ~Order();

    bool operator==(const Order &that);
};