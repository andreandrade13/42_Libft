# Libft

Libft is the first project of 42 cursus.

The goal is re-write standard functions to use on the next projects. Through the formation, more functions will be included.



<p align="center">
  <img src="https://user-images.githubusercontent.com/43358672/144503431-4c4d623b-9787-42be-9fe2-c99841945744.png">
</p>


### Part1 - Libc Functions (Mandatory)
- [isalpha](https://github.com/andreandrade13/Libft/blob/main/ft_isalpha.c): checks for an alphabetic character.
- [isdigit](https://github.com/andreandrade13/Libft/blob/main/ft_isdigit.c): checks for a digit (0 through 9).
- [isalnum](https://github.com/andreandrade13/Libft/blob/main/ft_isalnum.c): checks for an alphanumeric character.
- [isascii](https://github.com/andreandrade13/Libft/blob/main/ft_isascii.c): checks if it is a 7-bit unsigned char value that fits into the ASCII character set.
- [isprint](https://github.com/andreandrade13/Libft/blob/main/ft_isprint.c): checks for any printable character including space.
- [strlen](https://github.com/andreandrade13/Libft/blob/main/ft_strlen.c): calculates and return the length of str.
- [memset](https://github.com/andreandrade13/Libft/blob/main/ft_memset.c): fill memory with a constant byte.
- [bzero](https://github.com/andreandrade13/Libft/blob/main/ft_bzero.c): zero a byte string.
- [memcpy](https://github.com/andreandrade13/Libft/blob/main/ft_memcpy.c): copy memory area.
- [memmove](https://github.com/andreandrade13/Libft/blob/main/ft_memmove.c): copy memory area.
- [strlcpy](https://github.com/andreandrade13/Libft/blob/main/ft_strlcpy.c): size-bounded string copying.
- [toupper](https://github.com/andreandrade13/Libft/blob/main/ft_toupper.c): convert to uppercase.
- [tolower](https://github.com/andreandrade13/Libft/blob/main/ft_tolower.c): convert to lowercase.
- [strchr](https://github.com/andreandrade13/Libft/blob/main/ft_strchr.c): locate character in string (first occur).
- [strrchr](https://github.com/andreandrade13/Libft/blob/main/ft_strrchr.c): locate character in string (last occur).
- [strncmp](https://github.com/andreandrade13/Libft/blob/main/ft_strncmp.c): compare two strings
- [memchr](https://github.com/andreandrade13/Libft/blob/main/ft_memchr.c): scan memory for a character (first occur).
- [memcmp](https://github.com/andreandrade13/Libft/blob/main/ft_memcmp.c): compare memory areas.
- [strnstr](https://github.com/andreandrade13/Libft/blob/main/ft_strnstr.c): locate a substring in a string.
- [atoi](https://github.com/andreandrade13/Libft/blob/main/ft_atoi.c): convert a string to an integer.
- [calloc](https://github.com/andreandrade13/Libft/blob/main/ft_calloc.c): allocate and free dynamic memory.
- [strdup](https://github.com/andreandrade13/Libft/blob/main/ft_strdup.c): duplicate a string.


### Part2 - Additional Functions (Mandatory)
- [ft_substr](https://github.com/andreandrade13/Libft/blob/main/ft_substr.c): returns a substring from the string.
- [ft_strjoin](https://github.com/andreandrade13/Libft/blob/main/ft_strjoin.c): returns a new string, which is the result of the concatenation.
- [ft_strtrim](https://github.com/andreandrade13/Libft/blob/main/ft_strtrim.c): returns a copy of ’s1’ with the characters specified in ’set’
- [ft_split](https://github.com/andreandrade13/Libft/blob/main/ft_split.c): returns an array of strings obtained by splitting ’s’ using delimiter 'c'.
- [ft_itoa](https://github.com/andreandrade13/Libft/blob/main/ft_itoa.c): returns a string representing the integer received as an argument.
- [ft_strmapi](https://github.com/andreandrade13/Libft/blob/main/ft_strmapi.c): Applies the function ’f’ to each character of the string ’s’.
- [ft_striteri](https://github.com/andreandrade13/Libft/blob/main/ft_striteri.c): Applies the function f to each character of the string passed as argument.
- [ft_putchar_fd](https://github.com/andreandrade13/Libft/blob/main/ft_putchar_fd.c): Outputs the character ’c’ to the given file descriptor.
- [ft_putstr_fd](https://github.com/andreandrade13/Libft/blob/main/ft_putstr_fd.c): Outputs the string ’s’ to the given file descriptor.
- [ft_putendl_fd](https://github.com/andreandrade13/Libft/blob/main/ft_putendl_fd.c): Outputs the string ’s’ to the given file descriptor, followed by a newline.
- [ft_putnbr_fd](https://github.com/andreandrade13/Libft/blob/main/ft_putstr_fd.c): Outputs the integer ’n’ to the given file descriptor


### Bonus Part
- [ft_lstnew](https://github.com/andreandrade13/Libft/blob/main/ft_lstnew.c): returns a new element.
- [ft_lstadd_front](https://github.com/andreandrade13/Libft/blob/main/ft_lstadd_front.c): Adds the element ’new’ at the beginning of the list.
- [ft_lstsize](https://github.com/andreandrade13/Libft/blob/main/ft_lstsize.c): Counts the number of elements in a list.
- [ft_lstlast](https://github.com/andreandrade13/Libft/blob/main/ft_lstlast.c): Returns the last element of the list.
- [ft_lstadd_back](https://github.com/andreandrade13/Libft/blob/main/ft_lstadd_back.c): Adds the element ’new’ at the end of the list.
- [ft_lstdelone](https://github.com/andreandrade13/Libft/blob/main/ft_lstdelone.c): Takes as a parameter an element and frees the memory of the element.
- [ft_lstclear](https://github.com/andreandrade13/Libft/blob/main/ft_lstclear.c): Deletes and frees the given element and every successor of that element.
- [ft_lstiter](https://github.com/andreandrade13/Libft/blob/main/ft_lstiter.c): Iterates the list ’lst’ and applies the function ’f’ to the content of each element.
- [ft_lstmap](https://github.com/andreandrade13/Libft/blob/main/ft_lstmap.c): Iterates the list ’lst’ and applies the function ’f’ to the content of each element.
<br>


### Tests
![image](https://user-images.githubusercontent.com/43358672/145719595-a9e814d0-91db-4ffb-86dd-752e71525fbc.png)
![image](https://user-images.githubusercontent.com/43358672/145719811-2253388a-74bb-4742-9367-5dfe118b7a4d.png)



<br>
<p align="center">
  <a href="https://www.linkedin.com/in/andre-christofori/"><img src="https://user-images.githubusercontent.com/43358672/144511674-87bb4eb9-6250-4cbd-8739-239e6c9f8a97.png" style="height: 40px; width: 40px;"></a>
</p>



