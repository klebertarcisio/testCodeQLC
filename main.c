#include <stdio.h>
#include<string.h>
#include<signal.h>

void f(){}
int bad_compare() {
   #ifdef MACRO
	   char *cptr;
	   char *str = "Hello World";

	   strcpy(cptr,str);

	   if (cptr == "Hello World") {}

	   if (cptr == &f) {}
   #else
	   char *cptr;
	   char *str = "Hello World";

	   strcpy(cptr,str);

	   if (cptr == "Hello World") {}

	   if (cptr == &f) {}
   #endif

}
