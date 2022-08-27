## File Descriptions
**[search_algos.h](search_algos.h)** - header file containing all function prototypes and definitions for types `listint_t` and `skiplist_t`.

### Mandatory
**[0-linear.c](0-linear.c)** - function that searches for a value in an array of integers using the linear search algorithm.

**[1-binary.c](1-binary.c)** - function that searches for a value in a sorted array of integers using the binary search algorithm.

**[2-O](2-O)** - time complexity (worst case) of a linear search in an array of size n.

**[3-0](3-0)** - space complexity (worst case) of an iterative linear search algorithm in an array of size n.

**[4-0](4-0)** - time complexity (worst case) of a binary search in an array of size n.

**[5-0](5-0)** - space complexity (worst case) of a binary search in an array of size n.

**[6-0](6-0)** - space complexity of this function:
```C
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```
