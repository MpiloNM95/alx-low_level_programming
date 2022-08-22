<h4>Task 0:</h4>
<ol>
<li>A function that reads a text file and prints it to the POSIX standard output.</li>
<li>Prototype: ssize_t read_textfile(const char *filename, size_t letters);</li>
<li>Where letters is the number of letters it should read and print</li>
<li>Returns the actual number of letters it could read and print</li>
<li>if the file can not be opened or read, return 0</li>
<li>if filename is NULL return 0</li>
<li>if write fails or does not write the expected amount of bytes, return 0</li>
</ol>
<h4>Task 1:</h4>
<ol>
<li>A function that creates a file</li>
<li>Prototype: int create_file(const char *filename, char *text_content);</li>
<li>Where filename is the name of the file to create and text_content is a NULL terminated string to write to the file</li>
<li>Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…)</li>
<li>The created file must have those permissions: rw-------. If the file already exists, do not change the permissions.</li>
<li>if the file already exists, truncate it</li>
<li>if filename is NULL return -1</li>
<li>if text_content is NULL create an empty file</li>
</ol>
<h4>Task 2:</h4>
<ol>
<li>A fuction that appends a text at the end of a file</li>
<li>Prototype: int append_text_to_file(const char *filename, char *text_content);</li>
<li>Where filename is the name of the file and text_content is the NULL terminated string to add at the end of the file</li>
<li>Return: 1 on success and -1 on failure</li>
<li>Do not create the file if it does not exist</li>
<li>If filename is NULL return -1<li>
<li>If text_content is NULL, do not add anything to the file.</li> 
<li>Return 1 if the file exists and -1 if the file does not exist or if you do not have the required permissions to write the file</li>
</ol>
<h4>Task 3:</h4>
<ol>
<li>A program that copies the content of a file to another file</li>
<li>Usage: cp file_from file_to</li>
<li>if the number of argument is not the correct one, exit with code 97 and print Usage: cp file_from file_to, followed by a new line, on the POSIX standard error</li>
<li>if file_to already exists, truncate it</li>
<li>if file_from does not exist, or if you can not read it, exit with code 98 and print Error: Can't read from file NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error</li>
<ul>
<li>Where NAME_OF_THE_FILE is the first argument passed to your program</li>
</ul>
<li>if you can not close a file descriptor , exit with code 100 and print Error: Can't close fd FD_VALUE, followed by a new line, on the POSIX standard error</li>
<ul>
<li>Where FD_VALUE is the value of the file descriptor</li>
</ul>
<li>Permissions of the created file: rw-rw-r--. If the file already exists, do not change the permissions</li>
<li>Must read 1,024 bytes at a time from the file_from to make less system calls.</li> 
<li>Use a buffer</li>
<li>Allowed to use printf</li>
</ol>
