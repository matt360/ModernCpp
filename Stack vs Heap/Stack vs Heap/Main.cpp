// Stack vs Heap https://www.youtube.com/watch?v=wJ1L2nSIV1s&index=54&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb

// When our programme starts it gets divided into a lot more than just a stack and a heap 
// but the two we care about most is the stact and the heap
// When out application runs the operating system will the entire programme into memroy as well as allocate a whole bunch of physcial RAM
// so our application can run.
// The stack and the heap are the two areas that we have in our RAM:
// The stack is typically an area of memeory that has a pre-defined size (Usually around 2 MB)
// The heap is also an area that is (kind of) pre-defined to a default value however it can grow and change as our appication goes on.
// Stack and Heap are always physically stored in RAM, some people tend to say it's in the CPU cache (It's likely to be hot in the cache, 
// becaue we're continually accessing it, NOT ALL of it will be stored in out cache and that's not how all of it works)

// Memory in our programme is used so we can actually store data, we need a place to store data so we can actally run our programme;
// Whether it'd be our local variables or we read stuff from a file, we need to store our data; we need a place to store that.
// The stack and the heap are areas that we're allowed to store data.
// They work very differently. But fundamentally what they do is the same.
// We can ask C++ to give us some memory from either the stack or the heap and it will give us a block of memory of our requested size;
// if everything goes well. 

// The difference is how it allocates that memory.
// Let's say we want to store an ineger (on most platforms it's 4 bytes)
// How do we find a contiguous block of 4 bytes of memory (contiguous - means in a row); how do we find this block of 4 bytes of memory?
// The way the stack will give us this memory vs the way the heap will give us this memory - that's different.
// When we ask for the memory like that that's waht we call the memory allocation or just an allocation for short.

// CODE

#include <iostream>
#include <string>

int main()
{

	cin.get();
}