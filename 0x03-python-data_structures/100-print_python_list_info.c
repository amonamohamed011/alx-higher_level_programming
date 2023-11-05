#include <stdio.h>
#include "lists.h"
/**
* print_python_list_info - shows info about python lists
* @p: opject
*
* Return: 0
*/
void print_python_list_info(PyObject *p)
{
    long int list_size, a, i;
    i = 0;
    PyObject *opj;   
    list_size = PyList_Size(p);
    a = ((PyListObject *)p)->allocated;
    printf("[*] Size of the Python list = %ld\n", list_size);
    printf("[*] Allocated = %ld\n", a);
    while (i < list_size)
    {
        obj = PyList_GetItem(p, i);
        printf("Element %ld: %s\n", i, Py_TYPE(obj)->tp_name);
        i++;
    }
}
