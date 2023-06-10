# 0x1A-hash_tables
This repository contains the source code for the hash table implementation in the ALX Low Level Programming course.

## Overview
A hash table is a data structure that maps keys to values. It is a more efficient way to store data than a linked list, as it can access data in constant time. The hash table implementation in this repository uses a chaining technique to resolve collisions. This means that when two keys hash to the same value, the values are stored in a linked list.

## Usage
To use the hash table implementation, you can include the `hash_table.h` header file in your code. You can then create a new hash table by calling the `hash_table_create()` function.

To add a key-value pair to the hash table, you can call the `hash_table_add()` function. To get the value for a given key, you can call the `hash_table_get()` function.

To destroy a hash table, you can call the `hash_table_destroy()` function.

## Example
The following code shows how to create a hash table, add a key-value pair to the hash table, get the value for a given key, and destroy the hash table:

```c
#include <stdio.h>
#include <stdlib.h>
#include "hash_table.h"

int main() {
    // Create a new hash table
    hash_table *table = hash_table_create();

    // Add a key-value pair to the hash table
    hash_table_add(table, "key1", "value1");

    // Get the value for a given key
    char *value = hash_table_get(table, "key1");

    // Print the value
    printf("The value for key1 is: %s\n", value);

    // Destroy the hash table
    hash_table_destroy(table);

    return 0;
}

