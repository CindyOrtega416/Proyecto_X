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
include intento2/CMakeFiles/intento2.dir/depend.make

# Include the progress variables for this target.
include intento2/CMakeFiles/intento2.dir/progress.make

# Include the compile flags for this target's objects.
include intento2/CMakeFiles/intento2.dir/flags.make

intento2/CMakeFiles/intento2.dir/main.cpp.o: intento2/CMakeFiles/intento2.dir/flags.make
intento2/CMakeFiles/intento2.dir/main.cpp.o: ../intento2/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/facu/CLionProjects/Proyecto_X/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object intento2/CMakeFiles/intento2.dir/main.cpp.o"
	cd /home/facu/CLionProjects/Proyecto_X/cmake-build-debug/intento2 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/intento2.dir/main.cpp.o -c /home/facu/CLionProjects/Proyecto_X/intento2/main.cpp

intento2/CMakeFiles/intento2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/intento2.dir/main.cpp.i"
	cd /home/facu/CLionProjects/Proyecto_X/cmake-build-debug/intento2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/facu/CLionProjects/Proyecto_X/intento2/main.cpp > CMakeFiles/intento2.dir/main.cpp.i

intento2/CMakeFiles/intento2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/intento2.dir/main.cpp.s"
	cd /home/facu/CLionProjects/Proyecto_X/cmake-build-debug/intento2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/facu/CLionProjects/Proyecto_X/intento2/main.cpp -o CMakeFiles/intento2.dir/main.cpp.s

# Object files for target intento2
intento2_OBJECTS = \
"CMakeFiles/intento2.dir/main.cpp.o"

# External object files for target intento2
intento2_EXTERNAL_OBJECTS =

intento2/intento2: intento2/CMakeFiles/intento2.dir/main.cpp.o
intento2/intento2: intento2/CMakeFiles/intento2.dir/build.make
intento2/intento2: intento2/CMakeFiles/intento2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/facu/CLionProjects/Proyecto_X/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable intento2"
	cd /home/facu/CLionProjects/Proyecto_X/cmake-build-debug/intento2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/intento2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
intento2/CMakeFiles/intento2.dir/build: intento2/intento2

.PHONY : intento2/CMakeFiles/intento2.dir/build

intento2/CMakeFiles/intento2.dir/clean:
	cd /home/facu/CLionProjects/Proyecto_X/cmake-build-debug/intento2 && $(CMAKE_COMMAND) -P CMakeFiles/intento2.dir/cmake_clean.cmake
.PHONY : intento2/CMakeFiles/intento2.dir/clean

intento2/CMakeFiles/intento2.dir/depend:
	cd /home/facu/CLionProjects/Proyecto_X/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/facu/CLionProjects/Proyecto_X /home/facu/CLionProjects/Proyecto_X/intento2 /home/facu/CLionProjects/Proyecto_X/cmake-build-debug /home/facu/CLionProjects/Proyecto_X/cmake-build-debug/intento2 /home/facu/CLionProjects/Proyecto_X/cmake-build-debug/intento2/CMakeFiles/intento2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : intento2/CMakeFiles/intento2.dir/depend

