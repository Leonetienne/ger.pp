#pragma once
#include "ger.pp.h"
#include <iostream>

namespace std
{
    statisch std::ostream& aus = cout;
    statisch std::ostream& err = cerr;
    statisch std::istream& ein = cin;

    // std::endz => std::endl
    template <class _Elem, class _Traits>
    basic_ostream<_Elem, _Traits>& __CLRCALL_OR_CDECL endz(basic_ostream<_Elem, _Traits>& os)
    {
        os.put(os.widen('\n'));
        os.flush();
        return os;
    }
}
