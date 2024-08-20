# cpp08

### Templated Containers

**Templated containers** are data structures provided by C++ that can hold a collection of items. They use templates to allow you to create containers that work with any data type.

**Containers?**
- Think of a container like a box or a shelf where you can store things.
- **Examples**: A list of numbers, a set of words, or a collection of objects.

**Templates**: 
- Templates in C++ let you create a container that can work with any type of data, like `int`, `float`, `std::string`, or even custom classes.
- For instance, `std::vector<int>` is a container that stores integers, while `std::vector<std::string>` stores strings.

**Common Templated Containers**:
- `std::vector<T>`: A dynamic array that can grow or shrink.
- `std::list<T>`: A linked list where you can insert or remove elements easily.
- `std::set<T>`: A collection of unique elements, sorted automatically.

### Iterators

**Iterators** are like pointers that help you navigate through the elements of a container.

- An iterator is an object that lets you access elements in a container one by one, similar to how you use a pointer to traverse through an array.
- **Think of it like a bookmark**: It helps you keep track of your position in the container.

**Common Operations with Iterators**:
- **Move Forward**: Go to the next element.
- **Move Backward**: Go to the previous element.
- **Access the Element**: Read or modify the value of the current element.

**Example**:
- If you have a list of numbers and you want to print each number, you use an iterator to go through each number one by one.

### Putting It Together

**Templated Containers** + **Iterators**:
- **Templated Containers** allow you to store different types of data in a structured way.
- **Iterators** let you access and manipulate the data stored in these containers efficiently.

**Simple Example**:container (`std::vector<int>`) that stores numbers:

```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    // Using an iterator to go through the vector
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " "; // *it gives the value of the current element
    }
    return 0;
}
```

In this example:
- `std::vector<int>` is a container that holds integers.
- `std::vector<int>::iterator` is used to access each integer in the vector.


  **Templated Containers let you store and manage data of any type.
  Iterators help you navigate and access data within those containers**


## ex00


This function template, `easyfind`, is designed to search for a specific integer (`value`) in a container (like `std::vector`, `std::list`, etc.). The container can be of any type, hence the use of the template parameter `T`.

**template<typename T>**: This makes the function a template, meaning it can work with any type of container that supports iterators (like `std::vector`, `std::list`, etc.).

**std::find(container.begin(), container.end(), value)**:
   - `std::find` is a function from the Standard Library that searches for the first occurrence of `value` in the range between `container.begin()` and `container.end()`.
   - `container.begin()` returns an iterator to the first element in the container, and `container.end()` returns an iterator to the element past the last element in the container.

**return valuePos**: If the value is found, the function returns the iterator pointing to that element.

- This function template allows you to search for an integer in any container that supports iterators.
- If the integer is found, it returns an iterator pointing to it.
- If the integer isn't found, it throws an exception.

## ex01

`std::sort` will sort the elements in the range [begin, end) in **ascending order** by default.
