#ifndef DEFINITIONS_DEF_HPP
#define DEFINITIONS_DEF_HPP

namespace game {
    enum E_exception_codes {
        InputMissMatchException = 100
    };

    struct Exceptions{
        std::string ex_msg;
        E_exception_codes exception_code;
    };
}
#endif