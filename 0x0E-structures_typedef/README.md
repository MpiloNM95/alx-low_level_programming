<h4>Task 0:</h4>
<ol>
<li>Define a new type struct dog with the following elements:</li>
<li>name, type = char *</li>
<li>age, type = float</li>
<li>owner, type = char *</li>
</ol>
<h4>Task 1:</h4>
<ol>
<li>A function that initialize a variable of type struct dog</li>
<li>Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);</li>
</ol>
<h4>Task 2:</h4>
<ol>
<li>A fucntion that prints a struct dog</li>
<li>Prototype: void print_dog(struct dog *d);</li>
<li>Allowed to use standard library</li>
<li>If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))</li>
<li>If d is NULL print nothing.</li>
</ol>
<h4>Task 3:</h4>
<ol>
<li>Define a new type dog_t as a new name for the type struct dog.</li>
</ol>
<h4>Task 4:</h4>
<ol>
<li>A function that creates a new dog.</li>
<li>Prototype: dog_t *new_dog(char *name, float age, char *owner);</li>
<li>Must store a copy of name and owner</li>
<li>Return NULL if the function fails</li>
</ol>
<h4>Task 5:</h4>
<ol>
<li>A function that frees dogs</li>
<li>Prototype: void free_dog(dog_t *d);</li>
</ol>
