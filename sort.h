#ifndef _SORT_H_
#define _SORT_H_
#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
int partition(int *array, int lo, int hi, size_t size);
void quick_s(int *array, int lo, int hi, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void swapme(listint_t *current, listint_t *current_old, listint_t **list);
int arr_max(int *array, size_t size);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void copy_array(int *arr, int *cpy, int size);
void print_left_right(int *array, int size, int first, int mid);
void merge(int *array, int size, int first, int mid, int *cpy);
void mergeSort(int *cpy, int first, int size, int *array);
void heap_sort(int *array, size_t size);

#endif
