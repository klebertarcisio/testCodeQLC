#include <stdio.h>
int main(){
	#ifdef MACRO
		// uma fraqueza
		if ("abc" == "Hello World") {}
	#else
		// mesma fraqueza	
		if ("abc" == "Hello World") {}
	#endif
	return 0;
}

/* The fp file is opened but not closed
 Resource leak - CWE 775
 Detected by Cppcheck */
void file(){
   FILE *fp;
   fp = fopen("/tmp/test.txt", "w+");
   fputs("This is testing for fputs...\n", fp);
}
