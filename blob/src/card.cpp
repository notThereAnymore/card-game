#include <iostream>

#include "card.hpp"

game::blob::Card::Card(const std::string& suit, int rank): rank(rank), suit(suit) {
  
}

game::blob::Card::Card(int suit, int rank): rank(rank), suit(suit) {
  
}

game::blob::Rank game::blob::Card::get_rank(){
    return this->rank;
}

game::blob::Suit game::blob::Card::get_suit(){
    return this->suit;
}

void game::blob::Card::print() {
    std::cout << std::endl << "suit " << suit.str_suit << std::endl<< "rank " << rank.get_rank_as_string()
    << std::endl << "value of rank " << rank.get_value() << std::endl;
}