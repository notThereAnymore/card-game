#ifndef BLOB_CARD_HPP
#define BLOB_CARD_HPP

#include "rank.hpp"
#include "suit.hpp"

namespace game {
    namespace blob {
        struct Card {
            game::blob::Rank rank;
            game::blob::Suit suit;
        };
    }
}
#endif