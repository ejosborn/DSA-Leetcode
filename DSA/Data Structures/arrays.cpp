#include <iostream>
#include <array>

// Static Arrays
/*
 * Static arrays are fixed in size. When you declare a static array with size n
 * (ex. int numbers[n];) it will stay that size throughout its life. If you try
 * to add an element to a static array beyond its size, this can result in an
 * undefined behavior (compiler can do whatever it wants including crashing,
 * producing unexpected results, or appearing to work correctly but having
 * hidden issues)or your program can crash because you are accessing memory you
 * shouldn't be accessing.
 *
 * Static arrays are saved in a continuous block in RAM. This makes accessing
 * an element super fast, O(1) complexity.
 *
 * Look at the following examples for Big O Complexities of Operations on
 * Static Arrays
 */

int staticArrays()
{
    const int MAX_SIZE = 5;
    std::array<int, MAX_SIZE> array = {1, 2, 3, 4, 5};
    int arrSize = MAX_SIZE;

    // Access - O(1)
    int value = array[1];

    // Searching - O(n)
    int target = 4;
    int index = -1;

    for (int i = 0; i < array.size(); i++)
    {
        if (array[i] == target)
        {
            index = i;
            break;
        }
    }

    // Insertion and Deletion (of last item) - O(1)
    int newValue = 7;

    if (arrSize < MAX_SIZE)
    {
        array[arrSize] = newValue; // Insertion (last item)
        arrSize++;
    }

    if (arrSize > 0)
    {
        arrSize--; // Deletion (last item)
    }

    // Insertion and Deletion - O(n)
    int position = 2;

    for (int i = array.size(); i >= position; i++)
    {
        array[i] = array[i - 1]; // Deletion
    }

    array[position] = newValue; // Insertion

    return 0;
}

// Dynamic Arrays
/*
 *
 */

// Stacks
/*
 *
 */