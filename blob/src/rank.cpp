#include "rank.hpp"

game::blob::Rank::Rank(int val) {
    this->rank = (game::blob::E_Rank)val;
}

std::string game::blob::Rank::get_rank_as_string() {
    std::string str;
    switch((int)this->rank) {
        case 0:
            str = "Ace";
        break;  
        case 1:
            str = "One";
        break;
        case 2:
            str = "Two";
        break;
        case 3:
            str = "Three";
        break;
        case 4:
            str = "Four";
        break;
        case 5:
            str = "Five";
        break;
        case 6:
            str = "Six";
        break;
        case 7:
            str = "Seven";
        break;
        case 8:
            str = "Eight";
        break;
        case 9:
            str = "Nine";
        break;
        case 10:
            str = "Ten";
        break;
        case 11:
            str = "Jack";
        break;
        case 12:
            str = "Queen";
        break;
        case 13:
            str = "King";
        break;
    }

    return str;
}

int game::blob::Rank::get_value() {
    int val = (int)this->rank;
    if(val == 0)
        val = 10;
        
    return val;    
}