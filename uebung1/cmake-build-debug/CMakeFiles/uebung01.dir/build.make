# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = "/Users/stephanschmidt/Library/Application Support/JetBrains/Toolbox/apps/CLion-ARM/ch-0/211.6693.114/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/stephanschmidt/Library/Application Support/JetBrains/Toolbox/apps/CLion-ARM/ch-0/211.6693.114/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/stephanschmidt/CLionProjects/uebung01

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/stephanschmidt/CLionProjects/uebung01/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/uebung01.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/uebung01.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/uebung01.dir/flags.make

CMakeFiles/uebung01.dir/artikel.cpp.o: CMakeFiles/uebung01.dir/flags.make
CMakeFiles/uebung01.dir/artikel.cpp.o: ../artikel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stephanschmidt/CLionProjects/uebung01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/uebung01.dir/artikel.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/uebung01.dir/artikel.cpp.o -c /Users/stephanschmidt/CLionProjects/uebung01/artikel.cpp

CMakeFiles/uebung01.dir/artikel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/uebung01.dir/artikel.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/stephanschmidt/CLionProjects/uebung01/artikel.cpp > CMakeFiles/uebung01.dir/artikel.cpp.i

CMakeFiles/uebung01.dir/artikel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/uebung01.dir/artikel.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/stephanschmidt/CLionProjects/uebung01/artikel.cpp -o CMakeFiles/uebung01.dir/artikel.cpp.s

CMakeFiles/uebung01.dir/artikel_test.cpp.o: CMakeFiles/uebung01.dir/flags.make
CMakeFiles/uebung01.dir/artikel_test.cpp.o: ../artikel_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stephanschmidt/CLionProjects/uebung01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/uebung01.dir/artikel_test.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/uebung01.dir/artikel_test.cpp.o -c /Users/stephanschmidt/CLionProjects/uebung01/artikel_test.cpp

CMakeFiles/uebung01.dir/artikel_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/uebung01.dir/artikel_test.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/stephanschmidt/CLionProjects/uebung01/artikel_test.cpp > CMakeFiles/uebung01.dir/artikel_test.cpp.i

CMakeFiles/uebung01.dir/artikel_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/uebung01.dir/artikel_test.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/stephanschmidt/CLionProjects/uebung01/artikel_test.cpp -o CMakeFiles/uebung01.dir/artikel_test.cpp.s

# Object files for target uebung01
uebung01_OBJECTS = \
"CMakeFiles/uebung01.dir/artikel.cpp.o" \
"CMakeFiles/uebung01.dir/artikel_test.cpp.o"

# External object files for target uebung01
uebung01_EXTERNAL_OBJECTS =

uebung01: CMakeFiles/uebung01.dir/artikel.cpp.o
uebung01: CMakeFiles/uebung01.dir/artikel_test.cpp.o
uebung01: CMakeFiles/uebung01.dir/build.make
uebung01: CMakeFiles/uebung01.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/stephanschmidt/CLionProjects/uebung01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable uebung01"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/uebung01.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/uebung01.dir/build: uebung01

.PHONY : CMakeFiles/uebung01.dir/build

CMakeFiles/uebung01.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/uebung01.dir/cmake_clean.cmake
.PHONY : CMakeFiles/uebung01.dir/clean

CMakeFiles/uebung01.dir/depend:
	cd /Users/stephanschmidt/CLionProjects/uebung01/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/stephanschmidt/CLionProjects/uebung01 /Users/stephanschmidt/CLionProjects/uebung01 /Users/stephanschmidt/CLionProjects/uebung01/cmake-build-debug /Users/stephanschmidt/CLionProjects/uebung01/cmake-build-debug /Users/stephanschmidt/CLionProjects/uebung01/cmake-build-debug/CMakeFiles/uebung01.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/uebung01.dir/depend

