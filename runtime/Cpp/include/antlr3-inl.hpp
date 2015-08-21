#ifndef ANTLR3__INL_HPP
#define ANTLR3__INL_HPP

#include "antlr3.hpp"


namespace antlr3 {

//static 
ANTLR_INLINE void GenericStream::displayRecognitionError( const StringType& str )
{
	fprintf(stderr, str.c_str() );
}

} // namespace antlr3

#endif // ANTLR3__INL_HPP

