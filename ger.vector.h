#pragma once
#include "ger.pp.h"
#include "ger.vector.h"
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
		T& bei(size_t pos),
		{
			rueckgeben at(pos);
		})

		//! push_back
		nichts hinten_schieben(konstante T& wert)
		{
			push_back(wert);
			rueckgeben;
		}

		//! push_back
		nichts hinten_schieben(konstante T&& wert)
		{
			push_back(wert);
			rueckgeben;
		}

		CONST_NOCONST_METHOD(
		T& vorne(),
		{
			rueckgeben front();
		})

		//! back
		CONST_NOCONST_METHOD(
		T& hinten(),
		{
			rueckgeben back();
		})

		//! data
		CONST_NOCONST_METHOD(
		T* daten(),
		{
			rueckgeben data();
		})

		//! empty
		bool leer() konstante
		{
			rueckgeben empty();
		}

		//! size
		size_t groesse() konstante
		{
			rueckgeben size();
		}

	geheim:
		typdef vector<T, Alloz> Basis;


		// Force users to use the translated methods

		nichts push_back(konstante T& wert)								{ Basis::push_back(wert); }
		nichts push_back(T&& wert)										{ Basis::push_back(wert); }

		T& at(size_t pos)												{ rueckgeben Basis::at(pos); }
		konstante T& at(size_t pos) konstante							{ rueckgeben Basis::at(pos); }

		T& front()														{ rueckgeben Basis::front(); }
		konstante T& front() konstante									{ rueckgeben Basis::front(); }

		T& back()														{ rueckgeben Basis::back(); }
		konstante T& back() konstante									{ rueckgeben Basis::back(); }

		T* data()														{ rueckgeben Basis::data(); }
		konstante T* data() konstante									{ rueckgeben Basis::data(); }

		bool empty() konstante											{ rueckgeben Basis::empty(); }

		size_t size() konstante											{ rueckgeben Basis::size(); }
	};
}
