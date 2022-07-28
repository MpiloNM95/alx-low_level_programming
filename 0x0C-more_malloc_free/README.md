<h4>Task 0:</h4>
<ol>
<li>A function that allocates memory using malloc.</li>
<li>Prototype: void *malloc_checked(unsigned int b);</li>
<li>Returns a pointer to the allocated memory</li>
<li>if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98</li>
</ol>
<h4>Task 1:</h4>
<ol>
<li>A function that concatenates two strings.</li>
<li>Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);</li>
<li>The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated</li>
<li>If the function fails, it should return NULL</li>
<li>If n is greater or equal to the length of s2 then use the entire string s2</li>
<li>if NULL is passed, treat it as an empty string</li>
</ol>
<h4>Task 2:</h4>
<ol>
<li>A function that allocates memory for an array, using malloc.</li>
<li>Prototype: void *_calloc(unsigned int nmemb, unsigned int size);</li>
<li>The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.</li>
<li>The memory is set to zero</li>
<li>If nmemb or size is 0, then _calloc returns NULL</li>
<li>If malloc fails, then _calloc returns NULL</li>
</ol>
<h4>Task 3:</h4>
<ol>
<li>A function that creates an array of integers.</li>
<li>Prototype: int *array_range(int min, int max);</li>
<li>The array created should contain all the values from min (included) to max (included), ordered from min to max</li>
<li>Return: the pointer to the newly created array</li>
<li>If min > max, return NULL</li>
<li>If malloc fails, return NULL</li>
</ol>
