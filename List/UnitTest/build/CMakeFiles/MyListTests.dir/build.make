# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/muhammad/Repositories/CPP-DataStructures-Algorithms/List/UnitTest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/muhammad/Repositories/CPP-DataStructures-Algorithms/List/UnitTest/build

# Include any dependencies generated for this target.
include CMakeFiles/MyListTests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MyListTests.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MyListTests.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyListTests.dir/flags.make

CMakeFiles/MyListTests.dir/MyTests.cpp.o: CMakeFiles/MyListTests.dir/flags.make
CMakeFiles/MyListTests.dir/MyTests.cpp.o: /home/muhammad/Repositories/CPP-DataStructures-Algorithms/List/UnitTest/MyTests.cpp
CMakeFiles/MyListTests.dir/MyTests.cpp.o: CMakeFiles/MyListTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/muhammad/Repositories/CPP-DataStructures-Algorithms/List/UnitTest/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MyListTests.dir/MyTests.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyListTests.dir/MyTests.cpp.o -MF CMakeFiles/MyListTests.dir/MyTests.cpp.o.d -o CMakeFiles/MyListTests.dir/MyTests.cpp.o -c /home/muhammad/Repositories/CPP-DataStructures-Algorithms/List/UnitTest/MyTests.cpp

CMakeFiles/MyListTests.dir/MyTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MyListTests.dir/MyTests.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/muhammad/Repositories/CPP-DataStructures-Algorithms/List/UnitTest/MyTests.cpp > CMakeFiles/MyListTests.dir/MyTests.cpp.i

CMakeFiles/MyListTests.dir/MyTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MyListTests.dir/MyTests.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/muhammad/Repositories/CPP-DataStructures-Algorithms/List/UnitTest/MyTests.cpp -o CMakeFiles/MyListTests.dir/MyTests.cpp.s

# Object files for target MyListTests
MyListTests_OBJECTS = \
"CMakeFiles/MyListTests.dir/MyTests.cpp.o"

# External object files for target MyListTests
MyListTests_EXTERNAL_OBJECTS =

MyListTests: CMakeFiles/MyListTests.dir/MyTests.cpp.o
MyListTests: CMakeFiles/MyListTests.dir/build.make
MyListTests: /usr/lib/x86_64-linux-gnu/libgtest.a
MyListTests: CMakeFiles/MyListTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/muhammad/Repositories/CPP-DataStructures-Algorithms/List/UnitTest/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MyListTests"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MyListTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MyListTests.dir/build: MyListTests
.PHONY : CMakeFiles/MyListTests.dir/build

CMakeFiles/MyListTests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MyListTests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MyListTests.dir/clean

CMakeFiles/MyListTests.dir/depend:
	cd /home/muhammad/Repositories/CPP-DataStructures-Algorithms/List/UnitTest/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/muhammad/Repositories/CPP-DataStructures-Algorithms/List/UnitTest /home/muhammad/Repositories/CPP-DataStructures-Algorithms/List/UnitTest /home/muhammad/Repositories/CPP-DataStructures-Algorithms/List/UnitTest/build /home/muhammad/Repositories/CPP-DataStructures-Algorithms/List/UnitTest/build /home/muhammad/Repositories/CPP-DataStructures-Algorithms/List/UnitTest/build/CMakeFiles/MyListTests.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/MyListTests.dir/depend

