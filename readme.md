# ger.pp
ger.pp is an esoteric C++ derivative allowing users to program in german.  
This is implemented via preprocessor definitions, type definitions, and wrappers, and should thus provide a more or less good compatibility to C++11 compilers. No support for C++17/20.  

Includes a few STL translations.
These are for now:
- iostream (cout, cerr, cin, endl)
- Vector

## To keep in mind
ger.pp is an *esoteric* derivative. It is more or less meant as a joke.
To keep this joke project within limits, it is neither tested, nor under active development. I may extend it whenever i feel like it.

## Examples
### iostream
ger.pp introduces classics like `std::aus`, `std::ein`, `std::fehlaus`, and `std::umbruch`.
```cpp
ganzzahl einstieg()
{
    std::aus << "Hallo, Welt!" << std::umbruch;
    gebe_zurueck 0;
}
```

### Flow-control
ger.cpp further reintroduces oldies such as the `falls`-statement, the popular `fuer`- and `solange`-loop, as the slightly lesser known `mache solange`-loop.
```
ganzzahl einstieg(ganzzahl argZahl, zeichen** argWerte)
{
    falls (argZahl < 2)
    {
        std::fehlaus << "Mindestens ein Argument erforderlich!" << std::umbruch;
        gebe_zurueck -1;
    }

    fuer (zeichen* z = *argWerte; *z != '\0'; z++)
        std::aus << *argWerte;
    std::aus << std::umbruch;

    gebe_zurueck 0;
}
```

### std::vektor
ger.pp comes with well knowns such as `std::vektor::hinten_schieben`, `std::vektor::platze_hinten`, and `std::vektor::schrumpfe_um_zu_passen`.  
See for yourself!
```cpp
ganzzahl einstieg()
{
    // Erstelle vektor
    std::vektor<ganzzahl> vek;

    // Schiebe Werte in den Vektor
    vek.hinten_schieben(99);
    vek.hinten_schieben(2);

    // Gebe alle Werte aus
    fuer (konstante ganzzahl& i : vek)
        std::aus << i << std::umbruch;

    // Entferne den letzten Wert
    vek.platze_hinten();

    // Arbeitsspeicher entlasten
    vek.schrumpfe_um_zu_passen();

    gebe_zurueck 0;
}
```

## License
```
Don't Be a Jerk: The Open Source Software License.
Last Update: Jan, 7, 2021

This software is free and open source.

- *I* am the software author. *I* might be a *we*, but that's OK.
- *You* are the user of this software. *You* might also be a *we*, and that's also OK!

> This is free software.  I will never charge you to use, license, or obtain this software.  Doing so would make me a jerk.

> You may use this code (and by "code" I mean *anything* contained within in this project) for whatever you want.  Personal use, Educational use, Corporate use, Military use, and all other uses are OK!  Limiting how you can use something free would make me a jerk.

> I offer no warranty on anything, ever.  I've tried to ensure that there are no gaping security holes where using this software might automatically send your credit card information to aliens or erase your entire hard drive, but it might happen.  I'm sorry.  However, I warned you, so you can't sue me.  Suing people over free software would make you a jerk.

> If you find bugs, it would be nice if you let me know so I can fix them.  You don't have to, but not doing so would make you a jerk.

> Speaking of bugs, I am not obligated to fix anything nor am I obligated to add a feature for you.  Feeling entitled about free software would make you a jerk.

> If you add a new feature or fix a bug, it would be nice if you contributed it back to the project.  You don't have to, but not doing so would make you a jerk.   The repository/site you obtained this software from should contain a way for you to contact me.  Contributing to open source makes you awesome!

> If you use this software, you don't have to give me any credit, but it would be nice.

Don't be a jerk.
Enjoy your free software!
```
