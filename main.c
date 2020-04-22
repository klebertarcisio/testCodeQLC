#include <stdio.h>
#include<string.h>
#include<signal.h>
int main(){
	#ifdef MACRO
		// uma fraqueza
		char *cptr;
   		char *str = "Hello World";
   		strcpy(cptr,str);
   		if (cptr == "Hello World") {}
   		if (cptr == &f) {}
	#else
		// mesma fraqueza	
		char *cptr;
   		char *str = "Hello World";
   		strcpy(cptr,str);
   		if (cptr == "Hello World") {}
   		if (cptr == &f) {}
	#endif
	return 0;
}
