# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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
include CMakeFiles/Strassen.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Strassen.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Strassen.dir/flags.make

CMakeFiles/Strassen.dir/Divide-and-conquer/square_matrix_multiply.cpp.obj: CMakeFiles/Strassen.dir/flags.make
CMakeFiles/Strassen.dir/Divide-and-conquer/square_matrix_multiply.cpp.obj: CMakeFiles/Strassen.dir/includes_CXX.rsp
CMakeFiles/Strassen.dir/Divide-and-conquer/square_matrix_multiply.cpp.obj: ../Divide-and-conquer/square_matrix_multiply.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLionProjects\leetcode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Strassen.dir/Divide-and-conquer/square_matrix_multiply.cpp.obj"
	D:\Mingw\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Strassen.dir\Divide-and-conquer\square_matrix_multiply.cpp.obj -c D:\CLionProjects\leetcode\Divide-and-conquer\square_matrix_multiply.cpp

CMakeFiles/Strassen.dir/Divide-and-conquer/square_matrix_multiply.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Strassen.dir/Divide-and-conquer/square_matrix_multiply.cpp.i"
	D:\Mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CLionProjects\leetcode\Divide-and-conquer\square_matrix_multiply.cpp > CMakeFiles\Strassen.dir\Divide-and-conquer\square_matrix_multiply.cpp.i

CMakeFiles/Strassen.dir/Divide-and-conquer/square_matrix_multiply.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Strassen.dir/Divide-and-conquer/square_matrix_multiply.cpp.s"
	D:\Mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\CLionProjects\leetcode\Divide-and-conquer\square_matrix_multiply.cpp -o CMakeFiles\Strassen.dir\Divide-and-conquer\square_matrix_multiply.cpp.s

# Object files for target Strassen
Strassen_OBJECTS = \
"CMakeFiles/Strassen.dir/Divide-and-conquer/square_matrix_multiply.cpp.obj"

# External object files for target Strassen
Strassen_EXTERNAL_OBJECTS =

Strassen.exe: CMakeFiles/Strassen.dir/Divide-and-conquer/square_matrix_multiply.cpp.obj
Strassen.exe: CMakeFiles/Strassen.dir/build.make
Strassen.exe: CMakeFiles/Strassen.dir/linklibs.rsp
Strassen.exe: CMakeFiles/Strassen.dir/objects1.rsp
Strassen.exe: CMakeFiles/Strassen.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CLionProjects\leetcode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Strassen.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Strassen.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Strassen.dir/build: Strassen.exe

.PHONY : CMakeFiles/Strassen.dir/build

CMakeFiles/Strassen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Strassen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Strassen.dir/clean

CMakeFiles/Strassen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CLionProjects\leetcode D:\CLionProjects\leetcode D:\CLionProjects\leetcode\cmake-build-debug D:\CLionProjects\leetcode\cmake-build-debug D:\CLionProjects\leetcode\cmake-build-debug\CMakeFiles\Strassen.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Strassen.dir/depend

