#!/bin/bash

# Array of filenames with prototypes
file_names=(
    "1-putchar.c:int _putchar(char c)"
    "2-_islower.c:int _islower(int c)"
    "3-_isalpha.c:int _isalpha(int c)"
    "4-_abs.c:int _abs(int n)"
    "5-_isupper.c:int _isupper(int c)"
    "6-_isdigit.c:int _isdigit(int c)"
    "7-_strlen.c:int _strlen(char *s)"
    "8-_puts.c:void _puts(char *s)"
    "9-_strcpy.c:char *_strcpy(char *dest, char *src)"
    "10-_atoi.c:int _atoi(char *s)"
    "11-_strcat.c:char *_strcat(char *dest, char *src)"
    "12-_strncat.c:char *_strncat(char *dest, char *src, int n)"
    "13-_strncpy.c:char *_strncpy(char *dest, char *src, int n)"
    "14-_strcmp.c:int _strcmp(char *s1, char *s2)"
    "15-_memset.c:char *_memset(char *s, char b, unsigned int n)"
    "16-_memcpy.c:char *_memcpy(char *dest, char *src, unsigned int n)"
    "17-_strchr.c:char *_strchr(char *s, char c)"
    "18-_strspn.c:unsigned int _strspn(char *s, char *accept)"
    "19-_strpbrk.c:char *_strpbrk(char *s, char *accept)"
    "20-_strstr.c:char *_strstr(char *haystack, char *needle)"
)

# Loop to create files with empty functions
for file_proto in "${file_names[@]}"; do
    file_name="${file_proto%%:*}"
    function_proto="${file_proto#*:}"
    
    # Create the file
    touch "$file_name"
    
    # Add the function prototype to the file
    echo "$function_proto" >> "$file_name"
    
    # Add an empty function definition
    echo "{" >> "$file_name"
    echo "}" >> "$file_name"
done

echo "Files with empty functions created successfully."
