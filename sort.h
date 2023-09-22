#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <stdbool.h>

/* Function prototypes */
void swap_ints(int *a, int *b);
void bubble_sort(int *array, size_t size);
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

#endif /* SORT_H */
