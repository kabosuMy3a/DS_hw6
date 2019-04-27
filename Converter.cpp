#include "Converter.h"


Converter::Converter(){

	stackForConverter = new LinkedStack();
	NameIdEmail = "";
	IdNameEmail = "";

}


Converter::~Converter(){

	delete stackForConverter ;

}


void Converter::Read(string fileName){
	
	ifstream infile(fileName.c_str());

	while(getline(infile,NameIdEmail)){

		stackForConverter->push(NameIdEmail);

	}
	


}//read and call SwapNameID, then use stack

void Converter::SwapNameId(){

}


void Converter::Print(){

	while(1){
		IdNameEmail = stackForConverter->pop() ;
		if(IdNameEmail.compare(string())==0)  break ;
		cout << IdNameEmail << endl ;		
	}

}//PoP PoP


