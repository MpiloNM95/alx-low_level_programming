<h4>Task 0:</h4>
<ol>
<li>A function that fills memory with a constant byte.</li>
<li>Prototype: char *_memset(char *s, char b, unsigned int n);</li>
<li>The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b</li>
<li>Returns a pointer to the memory area s</li>
</ol>
<h4>Task 1:</h4>
<ol>
<li>A function that copies memory area.</li>
<li>Prototype: char *_memcpy(char *dest, char *src, unsigned int n);</li>
<li>The _memcpy() function copies n bytes from memory area src to memory area dest</li>
<li>Returns a pointer to dest</li>
</ol>
<h4>Task 2:</h4>
<ol>
<li>A function that locates a character in a string.</li>
<li>Prototype: char *_strchr(char *s, char c);</li>
<li>Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found</li>
</ol>
<h4>Task 3:</h4>
<ol>
<li>A function that gets the length of a prefix substring.</li>
<li>Prototype: unsigned int _strspn(char *s, char *accept);</li>
<li>Returns the number of bytes in the initial segment of s which consist only of bytes from accept</li>
</ol>
<h4>Task 4:</h4>
<ol>
<li>A function that searches a string for any of a set of bytes.</li>
<li>Prototype: char *_strpbrk(char *s, char *accept);</li>
<li>The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept</li>
<li>Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found</li>
</ol>
<h4>Task 5:</h4>
<ol>
<li>A function that locates a substring.</li>
<li>Prototype: char *_strstr(char *haystack, char *needle);</li>
<li>The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared</li>
<li>Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.</li>
</ol>
<h4>Task 6:</h4>
<ol>
<li>A function that prints the chessboard.</li>
<li>Prototype: void print_chessboard(char (*a)[8]);</li>
</ol>
<h4>Task 7:</h4>
<ol>
<li>A function that prints the sum of the two diagonals of a square matrix of integers.</li>
<li>Prototype: void print_diagsums(int *a, int size);</li>
<li>Allowed to use standard library</li>
</ol>
