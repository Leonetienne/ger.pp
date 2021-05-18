#pragma once
#include "ger.pp.h"
#include <iostream>

namensraum std
{
    statische std::ostream& aus = cout;
    statische std::ostream& fehlaus = cerr;
    statische std::istream& ein = cin;

    // std::endz => std::endl
    vorlage <klasse _Elem, klasse _Traits>
    basic_ostream<_Elem, _Traits>& __CLRCALL_OR_CDECL umbruch(basic_ostream<_Elem, _Traits>& os)
    {
        os.put(os.widen('\n'));
        os.flush();
        gebe_zurueck os;
    }
}
