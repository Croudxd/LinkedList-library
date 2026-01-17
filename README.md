# A ***(another)*** linked list library
Linked list header only library for C++ 

# Tests
To run test's:
```make && ./test```

# Projects
To use in a project:
2. Put linkedlist.h into your include/ directory.

# Documentation:

Start by importing into project `import <linkedlist.h>`  

#### Functions:

+ `LinkedList()` - Linked list contrusctor.  
example - `ll::LinkedList<std::string> LinkedListForStrings;`  

+ `add(T value)` - Adds a value to the list.  
example - `ll::LinkedListForStrings.add("hello");`  

+ `print()` - Prints the whole linked list.  
example - `ll::LinkedListForStrings.print();`  

+ `size()` - Returns size of linked list.  
example - `ll::LinkedListForStrings.size();`  

+ `merge_sort()` - Sorts linked list using merge sort.  
example - `ll::LinkedListForStrings.merge_sort();`

+ `get_middle()` - Returns the node at middle.  
example - `ll::LinkedListForStrings.get_middle();`

