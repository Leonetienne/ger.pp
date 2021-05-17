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

     std::aus << vek.vorne() << std::endz;
     std::aus << vek.groesse() << std::endz;
     vek.leeren();
     std::aus << vek.groesse() << std::endz;

    gebe_zurueck 0;
}
