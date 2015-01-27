#ifndef SERIALIZATION_STOCK_HPP
#define SERIALIZATION_STOCK_HPP

#include <string>


struct stock {
    std::string company;
    std::string code;
    std::string name;
    double open_price;
    double high_price;
    double low_price;
    double last_price;
    double buy_price;
    int buy_quantity;
    double sell_price;
    int sell_quantity;

    template <typename Archive>
    void serialize(Archive& ar) {
        ar & company;
        ar & code;
        ar & name;
        ar & open_price;
        ar & high_price;
        ar & low_price;
        ar & last_price;
        ar & buy_price;
        ar & buy_quantity;
        ar & sell_price;
        ar & sell_quantity;
    }
};


#endif // SERIALIZATION_STOCK_HPP