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
		void Read(string fileName) ;
		string SwapNameId(string inputStr);
		char* trim(char * s) ;
		void Print() ;
	

};

#endif
