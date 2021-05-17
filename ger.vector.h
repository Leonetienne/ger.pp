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
	bekannt:
		//! at
		CONST_NOCONST_METHOD(
		T& bei(kardinal_t pos),
		{
			gebe_zurueck at(pos);
		})

		//! push_back
		nichts hinten_schieben(konstante T& wert)
		{
			push_back(wert);
			gebe_zurueck;
		}

		//! push_back
		nichts hinten_schieben(konstante T&& wert)
		{
			push_back(wert);
			gebe_zurueck;
		}

		CONST_NOCONST_METHOD(
		T& vorne(),
		{
			gebe_zurueck front();
		})

		//! back
		CONST_NOCONST_METHOD(
		T& hinten(),
		{
			gebe_zurueck back();
		})

		//! data
		CONST_NOCONST_METHOD(
		T* daten(),
		{
			gebe_zurueck data();
		})

		//! empty
		bool leer() konstante
		{
			gebe_zurueck empty();
		}

		//! size
		kardinal_t groesse() konstante
		{
			gebe_zurueck size();
		}

		//! max_size
		kardinal_t maximale_groesse() konstante
		{
			gebe_zurueck size();
		}

		//! reserve
		nichts reservieren(kardinal_t neues_limit)
		{
			reserve(neues_limit);
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
	};
}
