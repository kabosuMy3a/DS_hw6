#include "default.h"
#include "Converter.h"


int main(){


	Converter * conv = new Converter();

	string fileName ;
	getline(cin,fileName);

	conv->Read(fileName);
	conv->Print();

	delete conv ;

	return 0;



}
