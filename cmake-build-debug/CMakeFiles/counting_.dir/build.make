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
include CMakeFiles/counting_.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/counting_.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/counting_.dir/flags.make

CMakeFiles/counting_.dir/Sort/quick_sort.cpp.obj: CMakeFiles/counting_.dir/flags.make
CMakeFiles/counting_.dir/Sort/quick_sort.cpp.obj: CMakeFiles/counting_.dir/includes_CXX.rsp
CMakeFiles/counting_.dir/Sort/quick_sort.cpp.obj: ../Sort/quick_sort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLionProjects\leetcode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/counting_.dir/Sort/quick_sort.cpp.obj"
	D:\Mingw\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\counting_.dir\Sort\quick_sort.cpp.obj -c D:\CLionProjects\leetcode\Sort\quick_sort.cpp

CMakeFiles/counting_.dir/Sort/quick_sort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/counting_.dir/Sort/quick_sort.cpp.i"
	D:\Mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CLionProjects\leetcode\Sort\quick_sort.cpp > CMakeFiles\counting_.dir\Sort\quick_sort.cpp.i

CMakeFiles/counting_.dir/Sort/quick_sort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/counting_.dir/Sort/quick_sort.cpp.s"
	D:\Mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\CLionProjects\leetcode\Sort\quick_sort.cpp -o CMakeFiles\counting_.dir\Sort\quick_sort.cpp.s

# Object files for target counting_
counting__OBJECTS = \
"CMakeFiles/counting_.dir/Sort/quick_sort.cpp.obj"

# External object files for target counting_
counting__EXTERNAL_OBJECTS =

counting_.exe: CMakeFiles/counting_.dir/Sort/quick_sort.cpp.obj
counting_.exe: CMakeFiles/counting_.dir/build.make
counting_.exe: CMakeFiles/counting_.dir/linklibs.rsp
counting_.exe: CMakeFiles/counting_.dir/objects1.rsp
counting_.exe: CMakeFiles/counting_.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CLionProjects\leetcode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable counting_.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\counting_.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/counting_.dir/build: counting_.exe

.PHONY : CMakeFiles/counting_.dir/build

CMakeFiles/counting_.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\counting_.dir\cmake_clean.cmake
.PHONY : CMakeFiles/counting_.dir/clean

CMakeFiles/counting_.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CLionProjects\leetcode D:\CLionProjects\leetcode D:\CLionProjects\leetcode\cmake-build-debug D:\CLionProjects\leetcode\cmake-build-debug D:\CLionProjects\leetcode\cmake-build-debug\CMakeFiles\counting_.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/counting_.dir/depend

