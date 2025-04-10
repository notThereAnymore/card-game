#ifndef BLOB_RANK_HPP
#define BLOB_RANK_HPP

#include <string>

namespace game{
    namespace blob{

        enum E_Rank {
            ONE = 1,
            TWO = 2,
            THREE = 3,
            FOUR = 4,
            FIVE = 5,
            SIX = 6,
            SEVEN = 7,
            EIGHT = 8,
            NINE = 9,
            TEN = 10,
            JACK = 11,
            QUEEN = 12,
            KING = 13,
            ACE = 0
        };

        class Rank {
            public:
                Rank(int);
                std::string get_rank_as_string();
                int get_value();
            private:
                E_Rank rank;
        };
    }
}
#endif