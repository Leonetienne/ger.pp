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

// Primitives
// These are macros to support modifiers
#define ganzzahl int
#define zeichen char
#define gleitkommazahl float
#define doppel double
#define lange long
#define positive unsigned

typedef void nichts;

// Structures
#define klasse class
#define struktur struct
#define vereinigung union

// Misc keywords
#define rueckgeben return
#define nullzgr nullptr

// Switch
#define schalter switch
#define fall case

// Try-Catch
#define versuche try
#define abfangen catch

// Entry point
#define einstieg main
