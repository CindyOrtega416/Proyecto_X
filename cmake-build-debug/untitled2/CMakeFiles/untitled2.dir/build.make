# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/44/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/44/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/facu/CLionProjects/Proyecto_X

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/facu/CLionProjects/Proyecto_X/cmake-build-debug

# Include any dependencies generated for this target.
include untitled2/CMakeFiles/untitled2.dir/depend.make

# Include the progress variables for this target.
include untitled2/CMakeFiles/untitled2.dir/progress.make

# Include the compile flags for this target's objects.
include untitled2/CMakeFiles/untitled2.dir/flags.make

untitled2/CMakeFiles/untitled2.dir/main.cpp.o: untitled2/CMakeFiles/untitled2.dir/flags.make
untitled2/CMakeFiles/untitled2.dir/main.cpp.o: ../untitled2/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/facu/CLionProjects/Proyecto_X/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object untitled2/CMakeFiles/untitled2.dir/main.cpp.o"
	cd /home/facu/CLionProjects/Proyecto_X/cmake-build-debug/untitled2 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled2.dir/main.cpp.o -c /home/facu/CLionProjects/Proyecto_X/untitled2/main.cpp

untitled2/CMakeFiles/untitled2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled2.dir/main.cpp.i"
	cd /home/facu/CLionProjects/Proyecto_X/cmake-build-debug/untitled2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/facu/CLionProjects/Proyecto_X/untitled2/main.cpp > CMakeFiles/untitled2.dir/main.cpp.i

untitled2/CMakeFiles/untitled2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled2.dir/main.cpp.s"
	cd /home/facu/CLionProjects/Proyecto_X/cmake-build-debug/untitled2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/facu/CLionProjects/Proyecto_X/untitled2/main.cpp -o CMakeFiles/untitled2.dir/main.cpp.s

# Object files for target untitled2
untitled2_OBJECTS = \
"CMakeFiles/untitled2.dir/main.cpp.o"

# External object files for target untitled2
untitled2_EXTERNAL_OBJECTS =

untitled2/untitled2: untitled2/CMakeFiles/untitled2.dir/main.cpp.o
untitled2/untitled2: untitled2/CMakeFiles/untitled2.dir/build.make
untitled2/untitled2: untitled2/CMakeFiles/untitled2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/facu/CLionProjects/Proyecto_X/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable untitled2"
	cd /home/facu/CLionProjects/Proyecto_X/cmake-build-debug/untitled2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/untitled2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
untitled2/CMakeFiles/untitled2.dir/build: untitled2/untitled2

.PHONY : untitled2/CMakeFiles/untitled2.dir/build

untitled2/CMakeFiles/untitled2.dir/clean:
	cd /home/facu/CLionProjects/Proyecto_X/cmake-build-debug/untitled2 && $(CMAKE_COMMAND) -P CMakeFiles/untitled2.dir/cmake_clean.cmake
.PHONY : untitled2/CMakeFiles/untitled2.dir/clean

untitled2/CMakeFiles/untitled2.dir/depend:
	cd /home/facu/CLionProjects/Proyecto_X/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/facu/CLionProjects/Proyecto_X /home/facu/CLionProjects/Proyecto_X/untitled2 /home/facu/CLionProjects/Proyecto_X/cmake-build-debug /home/facu/CLionProjects/Proyecto_X/cmake-build-debug/untitled2 /home/facu/CLionProjects/Proyecto_X/cmake-build-debug/untitled2/CMakeFiles/untitled2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : untitled2/CMakeFiles/untitled2.dir/depend
