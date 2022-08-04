<h4>Task 0:</h4>
<ol>
<li>A function that returns the sum of all its parameters</li>
<li>Prototype: int sum_them_all(const unsigned int n, ...);</li>
<li>If n == 0, return 0</li>
</ol>
<h4>Task 1:</h4>
<ol>
<li>A function that prints numbers, followed by a new line</li>
<li>Prototype: void print_numbers(const char *separator, const unsigned int n, ...);</li>
<li>where separator is the string to be printed between numbers</li>
<li>and n is the number of integers passed to the function</li>
<li>Allowed to use printf</li>
<li>If separator is NULL, don’t print it</li>
<li>Print a new line at the end of your function</li>
</ol>
<h4>Task 2:</h4>
<ol>
<li>A function that prints strings, followed by a new line</li>
<li>Prototype: void print_strings(const char *separator, const unsigned int n, ...);</li>
<li>where separator is the string to be printed between the strings</li>
<li>and n is the number of strings passed to the function</li>
<li>Allowed to use printf</li>
<li>If separator is NULL, don’t print it</li>
<li>If one of the string is NULL, print (nil) instead</li>
<li>Print a new line at the end of your function</li>
</ol>
<h4>Task 3:</h4>
<ol>
<li>A function that prints anything</li>
<li>Prototype: void print_all(const char * const format, ...);</li>
<li>where format is a list of types of arguments passed to the function</li>
<ul>
<li>c: char</li>
<li>i: integer</li>
<li>f: float</li>
<li>s: char * (if the string is NULL, print (nil) instead</li>
<li>any other char should be ignored</li>
</ul>
<li>Not allowed to use for, goto, ternary operator, else, do ... while</li>
<li>Can use a maximum of
<ul>
<li>2 while loops</li>
<li>2 if</li>
</ul>
<li>Can declare a maximum of 9 variables</li>
<li>Allowed to use printf</li>
<li>Print a new line at the end of your function</li>
</ol>
