#ifndef BLOB_DECK_HPP
#define BLOB_DECK_HPP

#include <vector>
#include "card.hpp"

namespace game {
    namespace blob {
        class Deck{
            public:
                Deck();
                Deck(int);
            private:
                std::vector<Card> cards;
        };
    }
}
#endif