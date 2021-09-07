int __cdecl compare(const void* pfirst, const void* psecond) {
	const int first = *((const int*)pfirst);
	                /* dereference first arg */
	const int second = *((const int*)psecond);
	                /* dereference second arg */

	return (first - second);
}