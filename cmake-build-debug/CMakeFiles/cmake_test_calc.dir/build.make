# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\CLionProjects\leetcode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\CLionProjects\leetcode\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cmake_test_calc.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cmake_test_calc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cmake_test_calc.dir/flags.make

CMakeFiles/cmake_test_calc.dir/calc.cpp.obj: CMakeFiles/cmake_test_calc.dir/flags.make
CMakeFiles/cmake_test_calc.dir/calc.cpp.obj: CMakeFiles/cmake_test_calc.dir/includes_CXX.rsp
CMakeFiles/cmake_test_calc.dir/calc.cpp.obj: ../calc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLionProjects\leetcode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cmake_test_calc.dir/calc.cpp.obj"
	D:\Mingw\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\cmake_test_calc.dir\calc.cpp.obj -c D:\CLionProjects\leetcode\calc.cpp

CMakeFiles/cmake_test_calc.dir/calc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cmake_test_calc.dir/calc.cpp.i"
	D:\Mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CLionProjects\leetcode\calc.cpp > CMakeFiles\cmake_test_calc.dir\calc.cpp.i

CMakeFiles/cmake_test_calc.dir/calc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cmake_test_calc.dir/calc.cpp.s"
	D:\Mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\CLionProjects\leetcode\calc.cpp -o CMakeFiles\cmake_test_calc.dir\calc.cpp.s

# Object files for target cmake_test_calc
cmake_test_calc_OBJECTS = \
"CMakeFiles/cmake_test_calc.dir/calc.cpp.obj"

# External object files for target cmake_test_calc
cmake_test_calc_EXTERNAL_OBJECTS =

cmake_test_calc.exe: CMakeFiles/cmake_test_calc.dir/calc.cpp.obj
cmake_test_calc.exe: CMakeFiles/cmake_test_calc.dir/build.make
cmake_test_calc.exe: ../lib/libtest_library.a
cmake_test_calc.exe: CMakeFiles/cmake_test_calc.dir/linklibs.rsp
cmake_test_calc.exe: CMakeFiles/cmake_test_calc.dir/objects1.rsp
cmake_test_calc.exe: CMakeFiles/cmake_test_calc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CLionProjects\leetcode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cmake_test_calc.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cmake_test_calc.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cmake_test_calc.dir/build: cmake_test_calc.exe

.PHONY : CMakeFiles/cmake_test_calc.dir/build

CMakeFiles/cmake_test_calc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cmake_test_calc.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cmake_test_calc.dir/clean

CMakeFiles/cmake_test_calc.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CLionProjects\leetcode D:\CLionProjects\leetcode D:\CLionProjects\leetcode\cmake-build-debug D:\CLionProjects\leetcode\cmake-build-debug D:\CLionProjects\leetcode\cmake-build-debug\CMakeFiles\cmake_test_calc.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cmake_test_calc.dir/depend

