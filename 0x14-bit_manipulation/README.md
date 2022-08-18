<h4>Task 0:</h4>
<ol>
<li>A fucntion that coneverts a binary number to an unsigned int.</li>
<li>Prototype: unsigned int binary_to_uint(const char *b);</li>
<li>Where b is pointing to a string of 0 and 1 chars</li>
<li>Return: the converted number, or 0 if</li>
<ul>
<li>there is one or more chars in the string b that is not 0 or 1</li>
<li>b is NULL</li>
</ul>
</ol>
<h4>Task 1:</h4>
<ol>
<li>A function tag prints the binary representation of a number</li>
<li>Prototype: void print_binary(unsigned long int n);</li>
<li>Not allowed to use arrays</li>
<li>Not allowed to use malloc</li>
<li>Not allowed to use the % or / operators</li>
</ol>
<h4>Task 2:</h4>
<ol>
<li>A function that returns the value of a bit at a given ndex</li>
<li>Prototype: int get_bit(unsigned long int n, unsigned int index);</li>
<li>Where index is the index, starting from 0 of the bit you want to get</li>
<li>Returns: the value of the bit at index index or -1 if an error occured</li>
</ol>
<h4>Task 3:</h4>
<ol>
<li>A function that sets the value of a bit to 1 at a given index.</li>
<li>Prototype: int set_bit(unsigned long int *n, unsigned int index);</li>
<li>Where index is the index, starting from 0 of the bit you want to set</li>
<li>Returns: 1 if it worked, or -1 if an error occurred</li>
</ol>
<h4>Task 4:</h4>
<ol>
<li>A function that sets the value of a bit to 0 at a given index</li>
<li>Prototype: int clear_bit(unsigned long int *n, unsigned int index);</li>
<li>Where index is the index, starting from 0 of the bit you want to set</li>
<li>Returns: 1 if it worked, or -1 if an error occurred</li>
</ol>
<h4>Task 5:</h4>
<ol>
<li>A function that returns the number of bits to youwould need to flip to get from one number to another</li>
<li>Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);</li>
<li>Not allowed to use the % or / operators</li>
</ol>
