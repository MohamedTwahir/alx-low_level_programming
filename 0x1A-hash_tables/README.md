# What is a HAsh Table Data Structure
A hash table is a data structure that implements an associative array abstract data type, a structure that can map keys to values. It uses a hash function to compute an index into an array of buckets or slots, from which the desired value can be found.

Here are the key characteristics of a hash table:

* Key-Value Mapping:

A hash table allows you to associate keys with corresponding values. Each key is unique within the hash table.
Hash Function:

The hash function takes a key as input and returns an index (hash code) within the range of the array size. It is designed to distribute keys evenly across the array.
* Array of Buckets:

The hash table typically consists of an array of buckets or slots. Each bucket can hold a key-value pair or, in the case of collision resolution, a linked list of key-value pairs.
* Collision Resolution:

Collisions occur when two or more keys hash to the same index. There are various strategies to resolve collisions, and one common approach is chaining, where a linked list is maintained for each array index to handle multiple key-value pairs.
* Load Factor:

The load factor is the ratio of the number of stored elements to the size of the array. A low load factor means there are fewer elements per bucket, reducing the likelihood of collisions.
* Dynamic Sizing:

Hash tables can dynamically resize to maintain an optimal load factor. When the load factor becomes too high, the array is resized, and all key-value pairs are rehashed.
* Fast Search, Insertion, and Deletion:

On average, hash table operations (search, insertion, and deletion) have constant time complexity (O(1)). However, the worst-case time complexity is influenced by factors such as collisions and load factor.
Hash tables are widely used in computer science and programming due to their efficiency in providing fast access to data based on a key. They are employed in various applications, including databases, caches, symbol tables, and more.

# Hash Function
A hash function is a function that takes an input (or "message") and produces a fixed-size string of characters, which is typically a hash code. The purpose of a hash function is to map data of arbitrary size to a fixed size. In the context of hash tables, the hash code is often used to determine the index in the array where a key-value pair should be stored.

Here are some key characteristics of a good hash function:

* Deterministic:

The same input should always produce the same hash code.
* Efficient:

The computation of the hash code should be fast and require a constant amount of time.
* Avalanche Effect:

A small change in the input should produce a significantly different hash code. This property helps distribute keys evenly across the hash table.
Uniform Distribution:

The hash function should distribute keys uniformly across the available hash codes (buckets) to minimize collisions.
* Collision Resistance:

While collisions (two different inputs producing the same hash code) are inevitable due to the finite size of hash codes, a good hash function should minimize the likelihood of collisions.
* Pre-image Resistance:

Given a hash code, it should be computationally infeasible to find the original input (pre-image).
* Adequate Size:

The size of the hash code should be sufficient to accommodate the expected number of keys in the hash table.
