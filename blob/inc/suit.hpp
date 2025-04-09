#ifndef BLOB_SUIT_HPP
#define BLOB_SUIT_HPP

#include <string>
#include <vector>

namespace game {
    namespace blob {
        static const std::vector<std::string> card_values = {"hearts", "diamonds", "clubes", "spades"};

        enum Suit {
            HEARTS,
            DIAMONDS,
            CLUBS,
            SPADES
        };
    }
}
#endif