Libft

Libft is a library containing a collection of functions that will be a useful tool for your cursus. This project requires you to code many fundamental C library functions yourself. This library will help you to use your own functions throughout your other projects.
Technical considerations

    Declaring global variables is forbidden.
    If you need helper functions to split a more complex function, define them as static functions. This way, their scope will be limited to the appropriate file.
    Place all your files at the root of your repository.
    Turning in unused files is forbidden.
    Every .c files must compile with the flags -Wall -Wextra -Werror.
    You must use the command ar to create your library. Using the libtool command is forbidden.
    Your libft.a has to be created at the root of your repository.

Part 1 - Libc functions

To begin, you must redo a set of functions from the libc. Your functions will have the same prototypes and implement the same behaviors as the originals. They must comply with the way they are defined in their man. The only difference will be their names. They will begin with the 'ft_' prefix. For instance, strlen becomes ft_strlen.

The following functions must be implemented:

    isalpha
    isdigit
    isalnum
    isascii
    isprint
    strlen
    memset
    bzero
    memcpy
    memmove
    strlcpy
    strlcat
    toupper
    tolower
    strchr
    strrchr
    strncmp
    memchr
    memcmp
    strnstr
    atoi

In order to implement the two following functions, you will use malloc():

    calloc
    strdup

Part 2 - Additional functions

In this second part, you must develop a set of functions that are either not in the libc, or that are part of it but in a different form.

The following functions must be implemented:

    ft_substr
    ft_strjoin
    ft_strtrim
    ft_split
    ft_itoa
    ft_strmapi

Turn in files

The following files should be included in your submission:

    Makefile
    libft.h
    ft_*.c (all your function files)

External functions

The following external functions are allowed:

    malloc
    free

Conclusion

This project will help you gain a deeper understanding of C and its standard library. It will also be a useful tool for future projects as you will be able to reuse your own functions throughout your other projects.
