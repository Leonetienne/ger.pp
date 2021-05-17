#include "ger.pp.h"
#include "ger.iostream.h"

[[nichtverwerfen]] ganzzahl max(konstante ganzzahl a, konstante ganzzahl b) keineausnahme
{
    rueckgeben (a < b) ? b : a;
}

ganzzahl einstieg()
{
    std::kaus << "Hallo Welt!" << std::endz;

    rueckgeben 0;
}
