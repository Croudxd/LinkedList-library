# A ***(another)*** linked list library
Linked list header only library for C++ 

1. [Run test's](#tests)  
2. [Install for project](#projects)  
3. [Documentation](#documentation)  

# Tests
To run test's:
1. Download files
2. Compile files with `gcc -o main main.cpp` 

# Projects
To use in a project:
1. Download files
2. Drag header files (linkedlist.h, node.h) into your project.  

# Documentation:

Start by importing into project `import "linkedlist.h"`  

#### Functions:

+ `LinkedList()` - Linked list contrusctor. 

  example - `LinkedList<std::string> LinkedListForStrings;`  


+ `add(T value)` - Adds a value to the list.

  example - `LinkedListForStrings.add("hello");`  


 + `print()` - Prints the whole linked list.

  example - `LinkedListForStrings.print();`  


 + `size()` - Returns size of linked list.

  example - `LinkedListForStrings.size();`  


 + `sort()` - Sorts linked list.

  example - `LinkedListForStrings.sort();`

