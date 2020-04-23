#include <stdio.h> 
#include <stdlib.h> 

/* ptr is not released
 Memory leak - CWE 401
 detected by Cppcheck */
void malloc_with_free_test(){ 
    int* ptr; 
    int n = 5; 
    ptr = (int*)malloc(n * sizeof(int)); 
} 

int main(){
	#ifdef MACRO
		// uma fraqueza
		if ("abc" == "Hello World") {}
	#else
		// mesma fraqueza	
		if ("abc" == "Hello World") {}
	#endif
	malloc_with_free_test();	
	if ("abc" == "Hello World") {}
	return 0;
}
