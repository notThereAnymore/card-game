#include "card.hpp"

game::blob::Card::Card(const std::string& suit, int rank): rank(rank), suit(suit) {
  
}

game::blob::Rank game::blob::Card::get_rank(){
    return this->rank;
}

game::blob::Suit game::blob::Card::get_suit(){
    return this->suit;
}