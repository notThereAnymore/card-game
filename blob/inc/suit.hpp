#ifndef BLOB_SUIT_HPP
#define BLOB_SUIT_HPP

#include <string>
#include <vector>

namespace game {
    namespace blob {

        enum E_Suit {
            HEARTS,
            DIAMONDS,
            CLUBS,
            SPADES
        };

        class Suit {
            public:
                Suit(const std::string&);
                int int_val;
            private:
                E_Suit suit;
                std::string str_suit;
        };
    }
}
#endif