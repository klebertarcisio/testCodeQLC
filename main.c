int main(){
	#ifdef MACRO
		// uma fraqueza
		if ("abc" == "Hello World") {} //[-Wstring-compare] 
	#else
		// mesma fraqueza	
		if ("abc" == "Hello World") {} //[-Wstring-compare] 
	#endif
	return 0;
}
