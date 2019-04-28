#ifndef __LINKEDSTACK_H__
#define __LINKEDSTACK_H__

#include "default.h"

typedef struct t_list_stack {
	
	string IdNameEmail ;
       	struct t_list_stack * link ;

} list_stack ;

class LinkedStack{



	private :

		list_stack * top ;


	public :

		LinkedStack();
		~LinkedStack();
		void removeNode(list_stack * e);
		void push(string e);
		string pop();
		bool isEmpty();



};

#endif
