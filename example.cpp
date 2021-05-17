#include "ger.pp.h"
#include "ger.iostream.h"
#include "ger.vector.h"

[[nichtverwerfen]] ganzzahl max(konstante ganzzahl a, konstante ganzzahl b) keineausnahme
{
    rueckgeben (a < b) ? b : a;
}

ganzzahl einstieg()
{
    std::aus << "Hallo, Welt!" << std::endz;

    std::vektor<ganzzahl> vek;

    vek.hinten_schieben(99);

    std::aus << vek.bei(0) << std::endz;

    rueckgeben 0;
}
