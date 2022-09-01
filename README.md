# Fibonacci Sequence
A simple Fibonacci program I went back to update and added something new. 

<p align="center">
  <img src="https://github.com/SirLorrence/ReadMeImages/blob/main/fibonacci-seq/fib01.gif?raw=true">
</p>


What I learned:
- How to make an basic CMAKE file for cross-platform compiling
- In some cases, the iterative algorithm is faster than a recursive version of it ([best thing i found about the speed differences](https://stackoverflow.com/a/72694))


To start off I needed to convert my Project from sln (Visual Studio solution) to something that will work cross-platform because I now use Linux/Unix-like systems more often. I had some basic knowledge of CMake, so that's what I went with. [*sigh...*] And working with it on windows was not straightforward as the [documentation](https://cmake.org/cmake/help/latest/guide/tutorial/A%20Basic%20Starting%20Point.html#build-and-run) made it out to be. After debugging and trying to figure out what I was doing wrong, I came across that I needed the argument in the command line: ``` -G "MinGW Makefiles" ```  - a very simple problem but it's extremely easy to overlook it. After taking care of that, writing the CMakeList file was very straightforward so I created a .bat file to compile and build the project easier.  

Initially what I had in mind was to build a pyramid that gave a visual representation of the Fibonacci sequence, then I realized the pyramid I was thinking of was pascal's triangle, and visually representing it with different colors would require external libraries (tried stdlib.h system(Color XY), didn't get the result I wanted) - so I scrapped it. Instead created a triangle representing each sequence step. Then I created a pyramid running each step in n amount of rows. 

This second process should me how slow my recursive implementation was. A solution was to use an iterative version of my method, which blow my mind how much faster it was. Then after that, it was just fixing some bugs and integer overflow for [higher iterations](https://planetmath.org/listoffibonaccinumbers).

Recursive             |  Iterative
:-------------------------:|:-------------------------:
![](https://github.com/SirLorrence/ReadMeImages/blob/main/fibonacci-seq/fib02-slow.gif?raw=true)  |  ![](https://github.com/SirLorrence/ReadMeImages/blob/main/fibonacci-seq/fib03-fast.gif?raw=true)


Compile on Unix:
```
cmake -B build
cmake --build build
```
Compile on windows:
```
cmake -G "MinGW Makefiles" 
cmake --build .
```
