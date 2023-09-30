# Basic C++ Project

This is a basic project including C++ sources, tests, package management and CI automation.

## Getting started

To build the project follow these steps:

1. Clone this repository recursively

   ```sh
   git clone --recurse-submodules [URL_OF_THIS_REPO]
   ```

1. Bootstrap vcpkg, e.g.

   ```sh
   ./vcpkg/bootstrap-vcpkg.sh -disableMetrics
   ```

1. Configure the project via cmake, e.g.

   ```sh
   cmake -B build -S . -DCMAKE_TOOLCHAIN_FILE=vcpkg/scripts/buildsystems/vcpkg.cmake 
   cmake --build build
   ```

## Used components

The following elements are used:

- **CMake** to describe the build setup
- **vcpkg** as a package manager
- **Google Test** as a testing framework
- **clang format** as a formatting tool
