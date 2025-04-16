# Stack Overflow Exploration Program

This program explores the behavior of **stack overflows** by declaring a very large local array and attempting to allocate memory beyond the system's stack size limit. The program helps in understanding what happens when the stack size is exceeded, leading to a **segmentation fault**.

## Program Overview

The program tries to allocate a large local array (`int array[100000000]`), which requires approximately **400MB of memory**. On systems with a limited stack size (e.g., macOS with ~8MB stack), this will likely cause a **stack overflow**, triggering a segmentation fault.

### Key Concepts:
- **Stack memory**: A region of memory where local variables are allocated. Its size is limited by the operating system.
- **Segmentation fault**: Occurs when a program tries to access memory that is outside of its allowed memory region, such as when stack space is exhausted.

### Code Breakdown:
- **Array Declaration**: Declares a large local array (`int array[100000000]`), which likely exceeds the available stack size.
- **Stack Address**: The program prints the address of the array to show where it’s located in the stack.
- **Array Usage**: The program populates and prints the first 10 elements of the array to prevent the compiler from optimizing the array allocation away.

---

## Build & Run Instructions

### 1. **Prerequisites**
Ensure you have **C++ compiler** installed:
- **macOS**: You can use `clang++`, which comes with Xcode Command Line Tools.
- **Linux**: Use `g++` or `clang++`.
- **Windows**: You can use MSVC or MinGW.

### 2. **Compiling the Program**

Open your terminal and navigate to the directory containing the `main.cpp` file.

For **macOS/Linux**:

```bash
g++ main.cpp -o stack_overflow_program
```

For **Windows (MSVC)**:

```bash
cl main.cpp
```

### 3. **Running the Program**

To run the compiled program:

```bash
./stack_overflow_program
```

For **Windows**:

```bash
stack_overflow_program.exe
```

### 4. **Check Stack Size** (macOS only)

You can check your **stack size** with the following command:

```bash
ulimit -s
```

On most systems, this will output something like `8192` or `8176` KB, which is roughly **8MB**.

---

## Conclusion

This program helps in understanding how stack overflows occur when you exceed the system's stack size limit. It provides insight into the importance of memory management in software development and how systems handle overflow situations. For advanced learning, explore dynamic memory allocation, recursion, signal handling, and cross-platform memory differences.

---