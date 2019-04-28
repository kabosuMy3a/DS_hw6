#include "LinkedStack.h"


LinkedStack::LinkedStack(){

	top = new list_stack() ;
	top = 0x0;

}


LinkedStack::~LinkedStack(){

	if (top!= 0x0) removeNode(top);
	
}

void LinkedStack::removeNode(list_stack * e){

	if (e->link!=0x0) {
	
		removeNode(e->link) ;
		
	}

	delete e; 
	

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
	
	if(isEmpty()==true) return string(); 

	e = top->IdNameEmail ;
	del = top;
	top = top->link ;	
	delete del ;
	return e; 
	
}

bool LinkedStack::isEmpty(){

	return(top==0x0);

}


