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

string Converter::SwapNameId(string inputStr){
	
	if (inputStr.compare(string())==0) return string() ;

	int len = strlen(inputStr.c_str()) ; 
	char * inputChar = new char[len] ;
	char Name[len] ;
	char Id[len] ;
	char Email[len] ;
	char * p ;

	strcpy(inputChar,inputStr.c_str()) ;

	string outputStr = "";

	p = strtok(inputChar,",");
	strcpy(Name,p) ;
	Name[strlen(Name)]= 0x0;
	strcpy(Name,trim(Name));

	p = strtok(0x0,",");
	strcpy(Id,p) ;
	Id[strlen(Id)] = 0x0;
	strcpy(Id,trim(Id));

	p = strtok(0x0,",");
	strcpy(Email,p) ;
	Email[strlen(Email)] = 0x0;
	strcpy(Email,trim(Email));

	outputStr.append(Id);
	outputStr.append(",");
	outputStr.append(Name);
	outputStr.append(",");
	outputStr.append(Email);	
		
	
	delete [] inputChar ;
	return outputStr ;

}


char * Converter::trim(char * s){

	int len = strlen(s) ;
	int i = 0;

	char newChar[len];

	while(s[i]==' '){

		i++ ;
	}

	if(i>0){
		int j;
		for(j=0 ; j< (len -i) ; j++){
			
			newChar[j] = s[j+i] ;	
		}
		
		newChar[j] = 0x0;
		strcpy(s,newChar) ;
	}
	

	return s ;

}

void Converter::Print(){

	while(1){
		IdNameEmail = SwapNameId(stackForConverter->pop()) ;
		if(IdNameEmail.compare(string())==0)  break ;
		cout << IdNameEmail << endl ;	
	}

}//PoP PoP


