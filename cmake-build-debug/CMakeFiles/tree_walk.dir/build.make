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
include CMakeFiles/tree_walk.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tree_walk.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tree_walk.dir/flags.make

CMakeFiles/tree_walk.dir/Tree/tree_walk.cpp.obj: CMakeFiles/tree_walk.dir/flags.make
CMakeFiles/tree_walk.dir/Tree/tree_walk.cpp.obj: CMakeFiles/tree_walk.dir/includes_CXX.rsp
CMakeFiles/tree_walk.dir/Tree/tree_walk.cpp.obj: ../Tree/tree_walk.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLionProjects\leetcode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tree_walk.dir/Tree/tree_walk.cpp.obj"
	D:\Mingw\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\tree_walk.dir\Tree\tree_walk.cpp.obj -c D:\CLionProjects\leetcode\Tree\tree_walk.cpp

CMakeFiles/tree_walk.dir/Tree/tree_walk.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tree_walk.dir/Tree/tree_walk.cpp.i"
	D:\Mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CLionProjects\leetcode\Tree\tree_walk.cpp > CMakeFiles\tree_walk.dir\Tree\tree_walk.cpp.i

CMakeFiles/tree_walk.dir/Tree/tree_walk.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tree_walk.dir/Tree/tree_walk.cpp.s"
	D:\Mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\CLionProjects\leetcode\Tree\tree_walk.cpp -o CMakeFiles\tree_walk.dir\Tree\tree_walk.cpp.s

# Object files for target tree_walk
tree_walk_OBJECTS = \
"CMakeFiles/tree_walk.dir/Tree/tree_walk.cpp.obj"

# External object files for target tree_walk
tree_walk_EXTERNAL_OBJECTS =

tree_walk.exe: CMakeFiles/tree_walk.dir/Tree/tree_walk.cpp.obj
tree_walk.exe: CMakeFiles/tree_walk.dir/build.make
tree_walk.exe: CMakeFiles/tree_walk.dir/linklibs.rsp
tree_walk.exe: CMakeFiles/tree_walk.dir/objects1.rsp
tree_walk.exe: CMakeFiles/tree_walk.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CLionProjects\leetcode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tree_walk.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\tree_walk.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tree_walk.dir/build: tree_walk.exe

.PHONY : CMakeFiles/tree_walk.dir/build

CMakeFiles/tree_walk.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\tree_walk.dir\cmake_clean.cmake
.PHONY : CMakeFiles/tree_walk.dir/clean

CMakeFiles/tree_walk.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CLionProjects\leetcode D:\CLionProjects\leetcode D:\CLionProjects\leetcode\cmake-build-debug D:\CLionProjects\leetcode\cmake-build-debug D:\CLionProjects\leetcode\cmake-build-debug\CMakeFiles\tree_walk.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tree_walk.dir/depend

