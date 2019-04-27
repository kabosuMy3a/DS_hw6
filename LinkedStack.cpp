#include "LinkedStack.h"


LinkedStack::LinkedStack(){

	top = new list_stack() ;
	top->IdNameEmail = "";
	top->link = 0x0 ;

}


LinkedStack::~LinkedStack(){

	delete top ;
}

void LinkedStack::push(string e){

	list_stack * new_node = new list_stack();
	//question why struct new assign looks like class ?//	
	//question //if (new_node == 0x0) return   
	new_node->IdNameEmail = e ;
	new_node->link = top ;
	top = new_node ;
	
}


string LinkedStack::pop(){

	string e = "";

	list_stack * del = new list_stack();
	
	e = top->IdNameEmail ;
	del = top;
	top = top->link ;	
	delete del ;
	return e; 
	
}


