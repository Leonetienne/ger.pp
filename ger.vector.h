#pragma once
#include "ger.pp.h"
#include "ger.vector.h"
#include <vector>

namespace std
{
	vorlage <klasse T, klasse Alloz = std::allocator<T>>
		klasse vektor : geheim std::vector<T, Alloz>
	{
	bekannt:
		//! at
		T & bei(std::size_t pos)
		{
			rueckgeben Basis::at(pos);
		}

		konstante T & bei(std::size_t pos) konstante
		{
			rueckgeben Basis::at(pos);
		}

		//! push_back
		nichts hinten_schieben(konstante T & wert)
		{
			Basis::push_back(wert);
			rueckgeben;
		}

		//! push_back
		nichts hinten_schieben(konstante T && wert)
		{
			Basis::push_back(wert);
			rueckgeben;
		}



		geheim:
		typdef std::vector<T, Alloz> Basis;

	};
}
