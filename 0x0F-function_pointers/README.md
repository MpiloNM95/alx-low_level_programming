<h4>Task 0:</h4>
<ol>
<li>A function that prints a name</li>
<li>Prototype: void print_name(char *name, void (*f)(char *));</li>
</ol>
<h4>Task 1:</h4>
<ol>
<li>A function that executes a function given as a parameter on each element of an array.</li>
<li>Prototype: void array_iterator(int *array, size_t size, void (*action)(int));</li>
<li>Where size is the size of the array</li>
<li>Action is a pointer to the function you need to use</li>
</ol>
<h4>Task 2:</h4>
<ol>
<li>A function that searches for an interger</li>
<li>Prototype: int int_index(int *array, int size, int (*cmp)(int));</li>
<li>where size is the number of elements in the array array</li>
<li>cmp is a pointer to the function to be used to compare values</li>
<li>int_index returns the index of the first element for which the cmp function does not return 0</li>
<li>If no element matches, return -1</li>
<li>If size <= 0, return -1</li>
</ol>
<h4>Task 3:</h4>
<ol>
<li>A program that performs simple operations</li>
</ol>
