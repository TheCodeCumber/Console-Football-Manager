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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ferdinand/CPP/FootballManager

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ferdinand/CPP/FootballManager

# Include any dependencies generated for this target.
include CMakeFiles/FootballManager.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/FootballManager.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/FootballManager.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FootballManager.dir/flags.make

CMakeFiles/FootballManager.dir/main.cpp.o: CMakeFiles/FootballManager.dir/flags.make
CMakeFiles/FootballManager.dir/main.cpp.o: main.cpp
CMakeFiles/FootballManager.dir/main.cpp.o: CMakeFiles/FootballManager.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ferdinand/CPP/FootballManager/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FootballManager.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/FootballManager.dir/main.cpp.o -MF CMakeFiles/FootballManager.dir/main.cpp.o.d -o CMakeFiles/FootballManager.dir/main.cpp.o -c /home/ferdinand/CPP/FootballManager/main.cpp

CMakeFiles/FootballManager.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FootballManager.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ferdinand/CPP/FootballManager/main.cpp > CMakeFiles/FootballManager.dir/main.cpp.i

CMakeFiles/FootballManager.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FootballManager.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ferdinand/CPP/FootballManager/main.cpp -o CMakeFiles/FootballManager.dir/main.cpp.s

# Object files for target FootballManager
FootballManager_OBJECTS = \
"CMakeFiles/FootballManager.dir/main.cpp.o"

# External object files for target FootballManager
FootballManager_EXTERNAL_OBJECTS =

FootballManager: CMakeFiles/FootballManager.dir/main.cpp.o
FootballManager: CMakeFiles/FootballManager.dir/build.make
FootballManager: CMakeFiles/FootballManager.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ferdinand/CPP/FootballManager/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable FootballManager"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FootballManager.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FootballManager.dir/build: FootballManager
.PHONY : CMakeFiles/FootballManager.dir/build

CMakeFiles/FootballManager.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FootballManager.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FootballManager.dir/clean

CMakeFiles/FootballManager.dir/depend:
	cd /home/ferdinand/CPP/FootballManager && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ferdinand/CPP/FootballManager /home/ferdinand/CPP/FootballManager /home/ferdinand/CPP/FootballManager /home/ferdinand/CPP/FootballManager /home/ferdinand/CPP/FootballManager/CMakeFiles/FootballManager.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FootballManager.dir/depend

