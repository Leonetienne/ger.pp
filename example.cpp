#include "ger.pp.h"
#include "ger.iostream.h"
#include "ger.vector.h"

[[nichtverwerfen]] ganzzahl max(konstante ganzzahl a, konstante ganzzahl b) keineausnahme
{
    gebe_zurueck (a < b) ? b : a;
}

ganzzahl einstieg()
{
    std::aus << "Hallo, Welt!" << std::endz;

    std::vektor<ganzzahl> vek;

    vek.hinten_schieben(99);
    vek.hinten_schieben(2);
    vek.hinten_schieben(56);
    vek.hinten_schieben(112);

    fuer(konstante ganzzahl & i : vek)
        std::aus << i << std::endz;

    gebe_zurueck 0;
}
