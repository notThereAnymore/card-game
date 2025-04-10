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
    }else{
        game::Exceptions e;
        std::stringstream s;
        s << str << "is not a valid suit";
        e.ex_msg = s.str();
        e.exception_code = game::E_exception_codes::InputMissMatchException;
        throw e;
    }

    
    
    this->str_suit = str;
    this->int_val = (int)this->suit;
}


game::blob::Suit::Suit(int suit) {
    this->int_val = suit;
    this->suit = (game::blob::E_Suit)suit;
    switch(suit) {
        case 0:
            str_suit = HEARTS;
        break;
        case 1:
            str_suit = DIAMONDS;
        break;
        case 2:
            str_suit = CLUBS;
        break;
        case 3:
            str_suit = SPADES;
        break;
        default:
            game::Exceptions e;
            std::stringstream s;
            s << suit << "is not a valid suit number valid are 0,1,2,3";
            e.ex_msg = s.str();
            e.exception_code = game::E_exception_codes::InputMissMatchException;
            throw e;
    }
}