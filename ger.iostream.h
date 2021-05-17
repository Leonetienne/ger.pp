#pragma once
#include <iostream>
namespace std
{
    static std::ostream& kaus = cout;
    static std::ostream& kerr = cerr;
    static std::istream& kein = cin;

    // std::endz => std::endl
    template <class _Elem, class _Traits>
    basic_ostream<_Elem, _Traits>& __CLRCALL_OR_CDECL endz(basic_ostream<_Elem, _Traits>& os)
    {
        os.put(os.widen('\n'));
        os.flush();
        return os;
    }
}
