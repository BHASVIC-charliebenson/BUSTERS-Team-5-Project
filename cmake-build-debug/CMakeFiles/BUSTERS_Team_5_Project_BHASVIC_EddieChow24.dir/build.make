# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/x64/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/eddiechow/Documents/GitHub/BUSTERS-Team-5-Project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/eddiechow/Documents/GitHub/BUSTERS-Team-5-Project/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/flags.make

CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/main.program.c.o: CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/flags.make
CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/main.program.c.o: /Users/eddiechow/Documents/GitHub/BUSTERS-Team-5-Project/main.program.c
CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/main.program.c.o: CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/eddiechow/Documents/GitHub/BUSTERS-Team-5-Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/main.program.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/main.program.c.o -MF CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/main.program.c.o.d -o CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/main.program.c.o -c /Users/eddiechow/Documents/GitHub/BUSTERS-Team-5-Project/main.program.c

CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/main.program.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/main.program.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/eddiechow/Documents/GitHub/BUSTERS-Team-5-Project/main.program.c > CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/main.program.c.i

CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/main.program.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/main.program.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/eddiechow/Documents/GitHub/BUSTERS-Team-5-Project/main.program.c -o CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/main.program.c.s

# Object files for target BUSTERS_Team_5_Project_BHASVIC_EddieChow24
BUSTERS_Team_5_Project_BHASVIC_EddieChow24_OBJECTS = \
"CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/main.program.c.o"

# External object files for target BUSTERS_Team_5_Project_BHASVIC_EddieChow24
BUSTERS_Team_5_Project_BHASVIC_EddieChow24_EXTERNAL_OBJECTS =

BUSTERS_Team_5_Project_BHASVIC_EddieChow24: CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/main.program.c.o
BUSTERS_Team_5_Project_BHASVIC_EddieChow24: CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/build.make
BUSTERS_Team_5_Project_BHASVIC_EddieChow24: CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/eddiechow/Documents/GitHub/BUSTERS-Team-5-Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable BUSTERS_Team_5_Project_BHASVIC_EddieChow24"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/build: BUSTERS_Team_5_Project_BHASVIC_EddieChow24
.PHONY : CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/build

CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/clean

CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/depend:
	cd /Users/eddiechow/Documents/GitHub/BUSTERS-Team-5-Project/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/eddiechow/Documents/GitHub/BUSTERS-Team-5-Project /Users/eddiechow/Documents/GitHub/BUSTERS-Team-5-Project /Users/eddiechow/Documents/GitHub/BUSTERS-Team-5-Project/cmake-build-debug /Users/eddiechow/Documents/GitHub/BUSTERS-Team-5-Project/cmake-build-debug /Users/eddiechow/Documents/GitHub/BUSTERS-Team-5-Project/cmake-build-debug/CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/BUSTERS_Team_5_Project_BHASVIC_EddieChow24.dir/depend
