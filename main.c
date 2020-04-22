int main(){
	#ifdef MACRO
		// uma fraqueza
		if ("abc" == "Hello World") {}
	#else
		// mesma fraqueza	
		if ("abc" == "Hello World") {}
	#endif
		if ("abc" == "Hello World") {}
	return 0;
}
