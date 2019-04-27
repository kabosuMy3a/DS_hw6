#ifndef __CONVERTER_H__
#define __CONVERTER_H__

#include "default.h"
#include "LinkedStack.h"

class Converter{



	private :
		
		LinkedStack * stackForConverter ;
		string NameIdEmail, IdNameEmail ;



	public :
	
		Converter() ;
		~Converter() ;
		void Read() ;
		void Print() ;
	

};

#endif
