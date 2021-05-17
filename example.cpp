#include "ger.pp.h"
#include "ger.iostream.h"
#include "ger.vector.h"

[[nichtverwerfen]] ganzzahl max(konstante ganzzahl a, konstante ganzzahl b) keineausnahme
{
    gebe_zurueck (a < b) ? b : a;
}

ganzzahl einstieg()
{
    std::aus << "Hallo, Welt!" << std::umbruch;

    // Erstelle vektor
    std::vektor<ganzzahl> vek;

    // Schiebe Werte in den Vektor
    vek.hinten_schieben(99);
    vek.hinten_schieben(2);
    vek.hinten_schieben(56);
    vek.hinten_schieben(112);

    // Gebe alle Werte aus
    fuer (konstante ganzzahl  i : vek)
        std::aus << i << std::umbruch;

    // Entferne die letzten zwei Werte
    vek.platze_hinten();
    vek.platze_hinten();

    // Arbeitsspeicher entlasten
    vek.schrumpfe_um_zu_passen();

    gebe_zurueck 0;
}
