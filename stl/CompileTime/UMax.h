// Copyright (c) 2018,  Zhirnov Andrey. For more information see 'LICENSE'

#pragma once

namespace FG
{
namespace _fg_hidden_
{
	struct _UMax
	{
		template <typename T>
		ND_ constexpr operator T () const
		{
			STATIC_ASSERT( ~T(0) > T(0) );
			return T(~T(0));
		}
			
		template <typename T>
		ND_ friend constexpr bool operator == (const T& left, const _UMax &right)
		{
			return T(right) == left;
		}
			
		template <typename T>
		ND_ friend constexpr bool operator != (const T& left, const _UMax &right)
		{
			return T(right) != left;
		}
	};

}	// _fg_hidden_


	static constexpr _fg_hidden_::_UMax		UMax {};

}	// FG