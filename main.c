int main(){
	#ifdef MACRO
		// uma fraqueza
		if ("abc" == "Hello World") {}
		// teste de integração
	#else
		// mesma fraqueza	
		if ("abc" == "Hello World") {}
	#endif
	return 0;
}
