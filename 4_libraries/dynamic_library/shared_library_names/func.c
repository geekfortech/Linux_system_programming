void __attribute__ ((constructor)) initLibrary(void) {
	printf("%s\n", __func__);
}


int func()
{
	return 11;
}

void __attribute__ ((destructor)) cleanupLibrary(void) {
	printf("%s\n", __func__);
}
