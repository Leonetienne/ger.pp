#pragma once
#include "ger.pp.h"
#include "ger.vector.h"
#include "ger.size_t.h"
#include "ger.pp.internal.h"
#include <vector>

namensraum std
{
	vorlage <klasse T, klasse Alloz = std::allocator<T>>
	klasse vektor : bekannt std::vector<T, Alloz>
	{
	geheim:
		typdef vector<T, Alloz> Basis;

	bekannt:

		/*  Element access  */

		//! at
		CONST_NOCONST_METHOD(
		T& bei(kardinal_t pos),
		{
			gebe_zurueck Basis::at(pos);
		})

		//! front
		CONST_NOCONST_METHOD(
		T& vorne(),
		{
			gebe_zurueck Basis::front();
		})

		//! back
		CONST_NOCONST_METHOD(
		T& hinten(),
		{
			gebe_zurueck Basis::back();
		})

		//! data
		CONST_NOCONST_METHOD(
		T* daten(),
		{
			gebe_zurueck Basis::data();
		})


		/*  Capacity  */

		//! empty
		bool leer() konstante
		{
			gebe_zurueck Basis::empty();
		}

		//! size
		kardinal_t groesse() konstante
		{
			gebe_zurueck Basis::size();
		}

		//! max_size
		kardinal_t maximale_groesse() konstante
		{
			gebe_zurueck Basis::size();
		}

		//! reserve
		nichts reservieren(kardinal_t neues_limit)
		{
			Basis::reserve(neues_limit);
			gebe_zurueck;
		}

		//! capacity
		kardinal_t kapazitaet() konstante
		{
			gebe_zurueck Basis::capacity();
		}

		//! shrink_to_fit
		void schrumpfe_um_zu_passen()
		{
			Basis::shrink_to_fit();
			gebe_zurueck;
		}


		/*  Modifiers  */

		//! clear
		nichts leeren()
		{
			Basis::clear();
			gebe_zurueck;
		}

		//! push_back
		nichts hinten_schieben(konstante T& wert)
		{
			push_back(wert);
			gebe_zurueck;
		}

		//! push_back
		nichts hinten_schieben(konstante T&& wert)
		{
			Basis::push_back(wert);
			gebe_zurueck;
		}

		//! emplace_back
		vorlage <klasse... Args>
		nichts hinten_verschieben(Args&&... args)
		{
			Basis::emplace_back(args);
			gebe_zurueck;
		}

		//! erase
		Basis::iterator loeschen(Basis::const_iterator pos)
		{
			gebe_zurueck Basis::erase(pos);
		}

		//! erase
		Basis::iterator loeschen(Basis::iterator anfang, Basis::iterator ende)
		{
			gebe_zurueck Basis::erase(anfang, ende);
		}

		//! pop_back
		nichts platze_hinten()
		{
			Basis::pop_back();
			gebe_zurueck;
		}

		//! resize
		nichts groesse_aendern(kardinal_t neue_groesse)
		{
			Basis::resize(neue_groesse);
			gebe_zurueck;
		}

		nichts groesse_aendern(kardinal_t neue_groesse, T wert = T())
		{
			Basis::resize(neue_groesse, wert);
			gebe_zurueck;
		}


		/*  Iterators  */
		
		//! begin
		Basis::iterator anfang() keineausnahme
		{
			gebe_zurueck Basis::begin();
		}

		//! begin
		Basis::const_iterator anfang() konstante keineausnahme
		{
			gebe_zurueck Basis::begin();
		}

		//! cbegin
		Basis::const_iterator kanfang() keineausnahme
		{
			gebe_zurueck Basis::cbegin();
		}


		//! end
		Basis::iterator ende() keineausnahme
		{
			gebe_zurueck Basis::end();
		}

		//! end
		Basis::const_iterator ende() konstante keineausnahme
		{
			gebe_zurueck Basis::end();
		}

		//! cend
		Basis::const_iterator kende() keineausnahme
		{
			gebe_zurueck Basis::cend();
		}


		//! rbegin
		Basis::iterator ranfang() keineausnahme
		{
			gebe_zurueck Basis::rbegin();
		}

		//! rbegin
		Basis::const_iterator ranfang() konstante keineausnahme
		{
			gebe_zurueck Basis::rbegin();
		}

		//! crbegin
		Basis::const_iterator kranfang() keineausnahme
		{
			gebe_zurueck Basis::crbegin();
		}


		//! rend
		Basis::iterator rende() keineausnahme
		{
			gebe_zurueck Basis::rend();
		}

		//! rend
		Basis::const_iterator rende() konstante keineausnahme
		{
			gebe_zurueck Basis::rend();
		}

		//! crend
		Basis::const_iterator krende() keineausnahme
		{
			gebe_zurueck Basis::crend();
		}

	geheim:
		// Force users to use the translated methods
		// I know, this looks bad in the github file fiewer. It's all alligned in the IDE.

		nichts push_back(konstante T& wert)								{ Basis::push_back(wert); }
		nichts push_back(T&& wert)										{ Basis::push_back(wert); }

		T& at(kardinal_t pos)											{ gebe_zurueck Basis::at(pos); }
		konstante T& at(kardinal_t pos) konstante						{ gebe_zurueck Basis::at(pos); }

		T& front()														{ gebe_zurueck Basis::front(); }
		konstante T& front() konstante									{ gebe_zurueck Basis::front(); }

		T& back()														{ gebe_zurueck Basis::back(); }
		konstante T& back() konstante									{ gebe_zurueck Basis::back(); }

		T* data()														{ gebe_zurueck Basis::data(); }
		konstante T* data() konstante									{ gebe_zurueck Basis::data(); }

		bool empty() konstante											{ gebe_zurueck Basis::empty(); }

		kardinal_t size() konstante										{ gebe_zurueck Basis::size(); }

		kardinal_t max_size() konstante									{ gebe_zurueck Basis::max_size(); }

		nichts reserve(kardinal_t new_cap)								{ Basis::reserve(new_cap); }

		kardinal_t capacity()											{ gebe_zurueck Basis::capacity(); }

		nichts shrink_to_fit(kardinal_t new_cap)						{ Basis::shrink_to_fit(); }

		nichts clear()													{ Basis::clear(); }

		Basis::iterator erase(Basis::const_iterator pos)				{ gebe_zurueck Basis::erase(pos); }

		Basis::iterator erase(Basis::const_iterator first, Basis::const_iterator last)	{ gebe_zurueck Basis::erase(first, last); }

		vorlage <klasse... Args>
		nichts emplace_back(Args&&... args)								{ Basis::emplace_back(args); }

		nichts pop_back()												{ Basis::pop_back; }

		nichts resize(kardinal_t nsize)									{ Basis::resize(nsize); }
		nichts resize(kardinal_t nsize, T val = T())					{ Basis::resize(nsize, val); }

		// Can't privatize iterators, or i would break range-based for loops
	};
}
