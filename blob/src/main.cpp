#include "card.hpp"
#include <iostream>

int main() {

    game::blob::Card c("diamonds", 10);

    std::cout << "suit" << c.get_suit().str_suit << "rank" << c.get_rank().get_rank_as_string()
     << "value of rank" << c.get_rank().get_value();

    
    return 0;
}