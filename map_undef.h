#pragma once
/**
 * Undef all macros defined by map.h
 * This file is to be included after MAP usage is finished.
 * We don't want to have a bunch of dormant macros lurking around
 */

#undef EVAL0
#undef EVAL1
#undef EVAL2
#undef EVAL3
#undef EVAL4
#undef EVAL5

#ifdef _MSC_VER
	#undef EVAL6
	#undef EVAL
#else
	#undef EVAL
#endif

#undef MAP_END
#undef MAP_OUT

#undef EMPTY 
#undef DEFER

#undef MAP_GET_END2
#undef MAP_GET_END1
#undef MAP_GET_END
#undef MAP_NEXT0
#undef MAP_NEXT1
#undef MAP_NEXT
#undef MAP_INC

#undef MAP0
#undef MAP1

#undef MAP_LIST0
#undef MAP_LIST1
#undef MAP_LIST2

#undef MAP
#undef MAP_LIST