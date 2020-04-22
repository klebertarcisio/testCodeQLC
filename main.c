int main(){
	#ifdef MACRO
		// uma fraqueza
		char str1[] = "uma parte da string," + "outra parte.";
	#else
		// mesma fraqueza	
		char str1[] = "uma parte da string," + "outra parte.";
	#endif
	return 0;
}
