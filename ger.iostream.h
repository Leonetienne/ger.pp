#pragma once
#include <iostream>
#include "ger.pp.h"

namespace std
{
    statisch std::ostream& kaus = cout;
    statisch std::ostream& kerr = cerr;
    statisch std::istream& kein = cin;

    // std::endz => std::endl
    template <class _Elem, class _Traits>
    basic_ostream<_Elem, _Traits>& __CLRCALL_OR_CDECL endz(basic_ostream<_Elem, _Traits>& os)
    {
        os.put(os.widen('\n'));
        os.flush();
        return os;
    }
}
