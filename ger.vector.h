#pragma once
#include "ger.pp.h"
#include "ger.vector.h"
#include "ger.size_t.h"
#include "ger.pp.internal.h"
#include <vector>

namespace std
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
		kardinal_t schrumpfe_um_zu_passen() konstante
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

	geheim:
		typdef vector<T, Alloz> Basis;


		// Force users to use the translated methods

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

		void pop_back()													{ Basis::pop_back; }
	};
}
