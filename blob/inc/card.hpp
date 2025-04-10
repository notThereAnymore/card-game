#ifndef BLOB_CARD_HPP
#define BLOB_CARD_HPP

#include "rank.hpp"
#include "suit.hpp"

namespace game {
    namespace blob {
        class Card {
            private: 
            game::blob::Rank rank;
            game::blob::Suit suit;
            public:
            Card(const std::string& suit, int rank);
            game::blob::Rank get_rank();
            game::blob::Suit get_suit();
        };
    }
}
#endif