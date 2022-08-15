<h4>Task 0:</h4>
<ol>
<li>A function that  prints all the elements of a listint_t list.</li>
<li>Prototype: size_t print_listint(const listint_t *h);</li>
<li>Return: the number of nodes</li>
<li>Allowed to use printf</li>
</ol>
<h4>Task 1:</h4>
<ol>
<li>A function that returns a number of elements in a linked listint_t list.</li>
<li>Prototype: size_t listint_len(const listint_t *h);</li>
</ol>
<h4>Task 2:</h4>
<ol>
<li>A fucntion that adds a new node at the begginning of listint_t list.</li>
<li>Prototype: listint_t *add_nodeint(listint_t **head, const int n);</li>
<li>Return: the address of the new element, or NULL if it failed</li>
</ol>
<h4>Task 3:</h4>
<ol>
<li>A fucntion that adds a new node at the end of a listint_t list</li>
<li>Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);</li>
<li>Return: the address of the new element, or NULL if it failed</li>
</ol>
<h4>Task 4:</h4>
<ol>
<li>A function that frees a listint_t list.</li>
<li>Prototype: void free_listint(listint_t *head);</li>
</ol>
<h4>Task 5:</h4>
<ol>
<li>A function that frees a listint_t list.</li>
<li>Prototype: void free_listint2(listint_t **head);</li>
<li>The function sets the head to NULL</li>
</ol>
<h4>Task 6:</h4>
<li>A functiont that deletes he head node of a listit_t linked list, nd returns the node's data (n).</li>
<li>Prototype: int pop_listint(listint_t **head);</li>
<li>if the linked list is empty return 0</li>
</ol>
<h4>Task 7:</h4>
<ol>
<li>A function that returns the nth node of listint_t linked list</li>
<li>Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);</li>
<li>Where index is the index of the node, starting at 0</li>
<li>if the node does not exist, return NULL</li>
</ol>
<h4>Task 8:</h4>
<ol>
<li>A function that returns the sum of all the date (n) of a listint_t linked list</li>
<li>Prototype: int sum_listint(listint_t *head);</li>
<li>if the list is empty, return 0</li>
</ol>
<h4>Task 9:</h4>
<ol>
<li>A function that inserts a new node at a given position</li>
<li>Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);</li>
<li>Where idx is the index of the list where the new node should be added. Index starts at 0</li>
<li>Returns: the address of the new node, or NULL if it failed</li>
<li>if it is not possible to add the new node at index idx, do not add the new node and return NULL</li>
</ol>
<h4>Task 10:</h4>
<ol>
<li>A function that deletes the node at the index index of a listint_t linked list.</li>
<li>Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);</li>
<li>Where index is the index of the node that should be deleted. Index starts at 0</li>
<li>Returns: 1 if it succeeded, -1 if it failed</li>
</ol>

