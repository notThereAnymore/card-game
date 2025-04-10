#include "suit.hpp"
#include "def.hpp"
#include <sstream>

game::blob::Suit::Suit(const std::string& str) {
    if(str == "diamonds") {
        this->suit = game::blob::DIAMONDS;
    }else if(str == "clubs") {
        suit = game::blob::CLUBS;
    } else if (str == "hearts") {
        suit = game::blob::HEARTS;
    } else if (str == "spades") {
        suit = game::blob::SPADES;
    }

    game::Exceptions e;
    std::stringstream s;
    s << str << "is not a valid suit";
    e.ex_msg = s.str();
    e.exception_code = game::E_exception_codes::InputMissMatchException;
    throw e;
    
    this->str_suit = str;
    this->int_val = (int)this->suit;
}
