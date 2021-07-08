#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Stored in Stack Memory (Automatically Alocate and Free)
    int a = 10;

    // Memory Allocation in Heap using "new" keyword (Manually)
    int *p = new int();

    // Initialize p in heap
    *p = 10;

    // Deallocate memory from heap using "delete()"
    delete (p);

    // Realocate p in form of array
    p = new int[5];

    // Deallocate array from heap memory using "delete[]"
    delete[] p;

    //set "NULL" for disconnect heap from stack
    p = NULL;

    return 0;
}

// Everything allocate and dellocate manually beacuse of head cannot do automatically like Stack.
// Head is a dyanamic memory allocation