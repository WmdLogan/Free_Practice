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
include CMakeFiles/subarray.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/subarray.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/subarray.dir/flags.make

CMakeFiles/subarray.dir/Divide-and-conquer/maximum_subarray.cpp.obj: CMakeFiles/subarray.dir/flags.make
CMakeFiles/subarray.dir/Divide-and-conquer/maximum_subarray.cpp.obj: CMakeFiles/subarray.dir/includes_CXX.rsp
CMakeFiles/subarray.dir/Divide-and-conquer/maximum_subarray.cpp.obj: ../Divide-and-conquer/maximum_subarray.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLionProjects\leetcode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/subarray.dir/Divide-and-conquer/maximum_subarray.cpp.obj"
	D:\Mingw\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\subarray.dir\Divide-and-conquer\maximum_subarray.cpp.obj -c D:\CLionProjects\leetcode\Divide-and-conquer\maximum_subarray.cpp

CMakeFiles/subarray.dir/Divide-and-conquer/maximum_subarray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/subarray.dir/Divide-and-conquer/maximum_subarray.cpp.i"
	D:\Mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CLionProjects\leetcode\Divide-and-conquer\maximum_subarray.cpp > CMakeFiles\subarray.dir\Divide-and-conquer\maximum_subarray.cpp.i

CMakeFiles/subarray.dir/Divide-and-conquer/maximum_subarray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/subarray.dir/Divide-and-conquer/maximum_subarray.cpp.s"
	D:\Mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\CLionProjects\leetcode\Divide-and-conquer\maximum_subarray.cpp -o CMakeFiles\subarray.dir\Divide-and-conquer\maximum_subarray.cpp.s

# Object files for target subarray
subarray_OBJECTS = \
"CMakeFiles/subarray.dir/Divide-and-conquer/maximum_subarray.cpp.obj"

# External object files for target subarray
subarray_EXTERNAL_OBJECTS =

subarray.exe: CMakeFiles/subarray.dir/Divide-and-conquer/maximum_subarray.cpp.obj
subarray.exe: CMakeFiles/subarray.dir/build.make
subarray.exe: CMakeFiles/subarray.dir/linklibs.rsp
subarray.exe: CMakeFiles/subarray.dir/objects1.rsp
subarray.exe: CMakeFiles/subarray.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CLionProjects\leetcode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable subarray.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\subarray.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/subarray.dir/build: subarray.exe

.PHONY : CMakeFiles/subarray.dir/build

CMakeFiles/subarray.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\subarray.dir\cmake_clean.cmake
.PHONY : CMakeFiles/subarray.dir/clean

CMakeFiles/subarray.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CLionProjects\leetcode D:\CLionProjects\leetcode D:\CLionProjects\leetcode\cmake-build-debug D:\CLionProjects\leetcode\cmake-build-debug D:\CLionProjects\leetcode\cmake-build-debug\CMakeFiles\subarray.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/subarray.dir/depend

