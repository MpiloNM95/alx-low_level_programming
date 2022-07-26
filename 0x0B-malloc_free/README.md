<h4>Task 0:</h4>
<ol>
<li>A funtction that creates an array of chars, and initializes it with a specific char.</li>
<li>Prototype: char *create_array(unsigned int size, char c);</li>
<li>Returns NULL if size = 0</li>
<li>Returns a pointer to the array, or NULL if it fails</li>
</ol>
<h4>Task 1:</h4>
<ol>
<li>A function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.</li>
<li>Prototype: char *_strdup(char *str);</li>
<li>The _strdup() function returns a pointer to a new string which is a duplicate of the string str.</li>
<li>Memory for the new string is obtained with malloc, and can be freed with free.</li>
<li>Returns NULL if str = NULL</li>
<li>On success, the _strdup function returns a pointer to the duplicated string.</li>
<li>It returns NULL if insufficient memory was available</li>
</ol>
<h4>Task 2:</h4>
<ol>
<li>A function that concatenates two strings.</li>
<li>Prototype: char *str_concat(char *s1, char *s2);</li>
<li>The returned pointer should point to a newly allocated space in memory which contains the contents of s1.</li>
<li>Followed by the contents of s2, and null terminated.</li>
<li>if NULL is passed, treat it as an empty string</li>
<li>The function should return NULL on failure</li>
</ol>
<h4>Task 3:</h4>
<ol>
<li>A function that returns a pointer to a 2 dimensional array of integers.</li>
<li>Prototype: int **alloc_grid(int width, int height);</li>
<li>Each element of the grid should be initialized to 0</li>
<li>The function should return NULL on failure</li>
<li>If width or height is 0 or negative, return NULL</li>
</ol>
<h4>Task 4:</h4>
<ol>
<li>A function that frees a 2 dimensional grid previously created by your alloc_grid function.</li>
<li>Prototype: void free_grid(int **grid, int height);</li>
<li>Note that we will compile with your alloc_grid.c file. Make sure it compiles.</li>
</ol>
