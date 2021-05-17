#pragma once
#include "ger.pp.h"
#include "ger.vector.h"
#include <vector>

namespace std
{
	vorlage <klasse T, klasse Alloz = std::allocator<T>>
		klasse vektor : bekannt std::vector<T, Alloz>
	{
	bekannt:
		//! at
		T & bei(size_t pos)
		{
			rueckgeben Basis::at(pos);
		}

		//! at
		konstante T & bei(size_t pos) konstante
		{
			rueckgeben Basis::at(pos);
		}

		//! push_back
		nichts hinten_schieben(konstante T& wert)
		{
			Basis::push_back(wert);
			rueckgeben;
		}

		//! push_back
		nichts hinten_schieben(konstante T&& wert)
		{
			Basis::push_back(wert);
			rueckgeben;
		}



	geheim:
		typdef vector<T, Alloz> Basis;

		// Force users to use the translated methods
		konstante nichts push_back(konstante T& wert)		{ Basis::push_back(wert); };
		konstante nichts push_back(konstante T&& wert)		{ Basis::push_back(wert); };
		T& at(size_t pos)									{ rueckgeben Basis::at(pos); };
		konstante T& at(size_t pos) konstante				{ rueckgeben Basis::at(pos); };

	};
}
