/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 21:17:29 by paescano          #+#    #+#             */
/*   Updated: 2022/10/08 15:54:14 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

// Return a size of any string
size_t	ft_strlen(const char *s);
// Copy the content of any string in other a return size of src
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
// Concatenate src and dst returning size of new string
size_t	ft_strlcat(char *dst, const char *src, size_t size);
// Returns a pointer to the first occurrence of the character c in the string s.
char	*ft_strchr(const char *s, int c);
// Returns a pointer to the last occurrence of the character c in the string s.
char	*ft_strrchr(const char *s, int c);
/**
*	Locates the first occurrence of the null-terminated string s1 in the 
*	null-terminated string s2, where not more than len characters are searched.
*/
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
// Returns a pointer to a new string which is a duplicate of the string s.
char	*ft_strdup(const char *s);
/**
*	Returns the substrings of the given string at the given start position 
*	with the given length
*/
char	*ft_substr(char const *s, unsigned int start, size_t len);
// Combine strings into one string
char	*ft_strjoin(char const *s1, char const *s2);
// Remove pointer set from the beginning and the end of a string
char	*ft_strtrim(char const *s1, char const *set);
// Split a pointer into pieces delimited by char returning all pieces
char	**ft_split(char const *s, char c);
// Constructs a string representation of an integer.
char	*ft_itoa(int n);
/**
*	Applies the function f to each character of the
*	string s to create a new string (with malloc(3))
*	resulting from successive applications of f.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
// Checks for an alphabetic character
int		ft_isalpha(int c);
// Checks for a digit character
int		ft_isdigit(int c);
// Checks for an alphanumeric character
int		ft_isalnum(int c);
/**
*	Checks whether c is a 7-bit unsigned char value that fits 
*	into the ASCII character set.
*/
int		ft_isascii(int c);
// Convert a string to an integer
int		ft_atoi(const char *str);
// Convert lowercase letters to uppercase
int		ft_toupper(int c);
// Convert uppercase letters to lowercase
int		ft_tolower(int c);
// Checks for any printable character including space.
int		ft_isprint(int c);
/**
*	Compares the two strings s1 and s2. it only compares 
*	the first (at most) n bytes of s1 and s2.
*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);
// Compares the first n bytes of the memory areas s1 and s2.
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/**
*	Fills the first n bytes of the memory areanpointed to by s
*	with the constant byte c.
*/
void	*ft_memset(void *s, int c, size_t n);
/**
*	Erases the data in the n bytes of the memory
*	starting at the location pointed to by s, by writing zeros (bytes
*	containing '\0') to that area.
*/
void	ft_bzero(void *s, size_t n);
/**
*	Copies n bytes from memory area src to
*	memory area dest.  The memory areas must not overlap.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n);
/**
*	copies n bytes from memory area src to
*	memory area dest.  The memory areas may overlap: copying takes
*	place as though the bytes in src are first copied into a
*	temporary array that does not overlap src or dest, and the bytes
*	are then copied from the temporary array to dest.
*/
void	*ft_memmove(void *dest, const void *src, size_t n);
/**
*	scans the initial n bytes of the memory
*	area pointed to by s for the first instance of c.  Both c and the
*	bytes of the memory area pointed to by s are interpreted as
*	unsigned char.
*/
void	*ft_memchr(const void *s, int c, size_t n);
/**
*	allocates memory for an array of nmemb elements of size bytes each
*	and returns a pointer to the allocated memory. The memory is set to zero.
*/
void	*ft_calloc(size_t nmemb, size_t size);
/**
*	Applies the function f to each pointer char of the
*	string s to create a new string (with malloc(3))
*	resulting from successive applications of f.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
// Send character 'c' to descriptor file
void	ft_putchar_fd(char c, int fd);
// Send string 's' to descriptor file
void	ft_putstr_fd(char *s, int fd);
// send string 's' to descriptor file with a end of line
void	ft_putendl_fd(char *s, int fd);
// send number 'n' to descriptor file
void	ft_putnbr_fd(int n, int fd);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// Create a new node of t_list
t_list	*ft_lstnew(void *content);
// Add the 'new' node to the beginning of the 'lst' list.
void	ft_lstadd_front(t_list **lst, t_list *new);
// Count how long is a list o element
int		ft_lstsize(t_list *lst);
// Return the last node of a list
t_list	*ft_lstlast(t_list *lst);
// Add the 'new' node to the back of the 'lst' list.
void	ft_lstadd_back(t_list **lst, t_list *new);
// Erase 'lst' node
void	ft_lstdelone(t_list *lst, void (*del)(void*));
// Erase a node 'lst' and the consecutive node
void	ft_lstclear(t_list **lst, void (*del)(void*));
// Iteri the list 'lst' and aplly the funtion f in each node
void	ft_lstiter(t_list *lst, void (*f)(void *));
/**
*	iteri and create the list 'lst' apllying the funtion f in each node,
*	The 'del' function is used to remove the contents of a node, if you do lack.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif