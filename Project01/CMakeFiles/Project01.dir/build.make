# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lake/gitLocal/bottom-up-data-structure/Project01

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lake/gitLocal/bottom-up-data-structure/Project01

# Include any dependencies generated for this target.
include CMakeFiles/Project01.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Project01.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Project01.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project01.dir/flags.make

CMakeFiles/Project01.dir/src/queue.cc.o: CMakeFiles/Project01.dir/flags.make
CMakeFiles/Project01.dir/src/queue.cc.o: src/queue.cc
CMakeFiles/Project01.dir/src/queue.cc.o: CMakeFiles/Project01.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lake/gitLocal/bottom-up-data-structure/Project01/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Project01.dir/src/queue.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Project01.dir/src/queue.cc.o -MF CMakeFiles/Project01.dir/src/queue.cc.o.d -o CMakeFiles/Project01.dir/src/queue.cc.o -c /home/lake/gitLocal/bottom-up-data-structure/Project01/src/queue.cc

CMakeFiles/Project01.dir/src/queue.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project01.dir/src/queue.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lake/gitLocal/bottom-up-data-structure/Project01/src/queue.cc > CMakeFiles/Project01.dir/src/queue.cc.i

CMakeFiles/Project01.dir/src/queue.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project01.dir/src/queue.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lake/gitLocal/bottom-up-data-structure/Project01/src/queue.cc -o CMakeFiles/Project01.dir/src/queue.cc.s

CMakeFiles/Project01.dir/src/stack.cc.o: CMakeFiles/Project01.dir/flags.make
CMakeFiles/Project01.dir/src/stack.cc.o: src/stack.cc
CMakeFiles/Project01.dir/src/stack.cc.o: CMakeFiles/Project01.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lake/gitLocal/bottom-up-data-structure/Project01/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Project01.dir/src/stack.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Project01.dir/src/stack.cc.o -MF CMakeFiles/Project01.dir/src/stack.cc.o.d -o CMakeFiles/Project01.dir/src/stack.cc.o -c /home/lake/gitLocal/bottom-up-data-structure/Project01/src/stack.cc

CMakeFiles/Project01.dir/src/stack.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project01.dir/src/stack.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lake/gitLocal/bottom-up-data-structure/Project01/src/stack.cc > CMakeFiles/Project01.dir/src/stack.cc.i

CMakeFiles/Project01.dir/src/stack.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project01.dir/src/stack.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lake/gitLocal/bottom-up-data-structure/Project01/src/stack.cc -o CMakeFiles/Project01.dir/src/stack.cc.s

# Object files for target Project01
Project01_OBJECTS = \
"CMakeFiles/Project01.dir/src/queue.cc.o" \
"CMakeFiles/Project01.dir/src/stack.cc.o"

# External object files for target Project01
Project01_EXTERNAL_OBJECTS =

libProject01.a: CMakeFiles/Project01.dir/src/queue.cc.o
libProject01.a: CMakeFiles/Project01.dir/src/stack.cc.o
libProject01.a: CMakeFiles/Project01.dir/build.make
libProject01.a: CMakeFiles/Project01.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lake/gitLocal/bottom-up-data-structure/Project01/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libProject01.a"
	$(CMAKE_COMMAND) -P CMakeFiles/Project01.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Project01.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project01.dir/build: libProject01.a
.PHONY : CMakeFiles/Project01.dir/build

CMakeFiles/Project01.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Project01.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Project01.dir/clean

CMakeFiles/Project01.dir/depend:
	cd /home/lake/gitLocal/bottom-up-data-structure/Project01 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lake/gitLocal/bottom-up-data-structure/Project01 /home/lake/gitLocal/bottom-up-data-structure/Project01 /home/lake/gitLocal/bottom-up-data-structure/Project01 /home/lake/gitLocal/bottom-up-data-structure/Project01 /home/lake/gitLocal/bottom-up-data-structure/Project01/CMakeFiles/Project01.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Project01.dir/depend

