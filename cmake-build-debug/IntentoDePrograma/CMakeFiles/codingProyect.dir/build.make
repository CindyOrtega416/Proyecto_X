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
include IntentoDePrograma/CMakeFiles/codingProyect.dir/depend.make

# Include the progress variables for this target.
include IntentoDePrograma/CMakeFiles/codingProyect.dir/progress.make

# Include the compile flags for this target's objects.
include IntentoDePrograma/CMakeFiles/codingProyect.dir/flags.make

IntentoDePrograma/CMakeFiles/codingProyect.dir/main.cpp.o: IntentoDePrograma/CMakeFiles/codingProyect.dir/flags.make
IntentoDePrograma/CMakeFiles/codingProyect.dir/main.cpp.o: ../IntentoDePrograma/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/facu/CLionProjects/Proyecto_X/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object IntentoDePrograma/CMakeFiles/codingProyect.dir/main.cpp.o"
	cd /home/facu/CLionProjects/Proyecto_X/cmake-build-debug/IntentoDePrograma && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/codingProyect.dir/main.cpp.o -c /home/facu/CLionProjects/Proyecto_X/IntentoDePrograma/main.cpp

IntentoDePrograma/CMakeFiles/codingProyect.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/codingProyect.dir/main.cpp.i"
	cd /home/facu/CLionProjects/Proyecto_X/cmake-build-debug/IntentoDePrograma && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/facu/CLionProjects/Proyecto_X/IntentoDePrograma/main.cpp > CMakeFiles/codingProyect.dir/main.cpp.i

IntentoDePrograma/CMakeFiles/codingProyect.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/codingProyect.dir/main.cpp.s"
	cd /home/facu/CLionProjects/Proyecto_X/cmake-build-debug/IntentoDePrograma && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/facu/CLionProjects/Proyecto_X/IntentoDePrograma/main.cpp -o CMakeFiles/codingProyect.dir/main.cpp.s

# Object files for target codingProyect
codingProyect_OBJECTS = \
"CMakeFiles/codingProyect.dir/main.cpp.o"

# External object files for target codingProyect
codingProyect_EXTERNAL_OBJECTS =

IntentoDePrograma/codingProyect: IntentoDePrograma/CMakeFiles/codingProyect.dir/main.cpp.o
IntentoDePrograma/codingProyect: IntentoDePrograma/CMakeFiles/codingProyect.dir/build.make
IntentoDePrograma/codingProyect: IntentoDePrograma/CMakeFiles/codingProyect.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/facu/CLionProjects/Proyecto_X/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable codingProyect"
	cd /home/facu/CLionProjects/Proyecto_X/cmake-build-debug/IntentoDePrograma && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/codingProyect.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
IntentoDePrograma/CMakeFiles/codingProyect.dir/build: IntentoDePrograma/codingProyect

.PHONY : IntentoDePrograma/CMakeFiles/codingProyect.dir/build

IntentoDePrograma/CMakeFiles/codingProyect.dir/clean:
	cd /home/facu/CLionProjects/Proyecto_X/cmake-build-debug/IntentoDePrograma && $(CMAKE_COMMAND) -P CMakeFiles/codingProyect.dir/cmake_clean.cmake
.PHONY : IntentoDePrograma/CMakeFiles/codingProyect.dir/clean

IntentoDePrograma/CMakeFiles/codingProyect.dir/depend:
	cd /home/facu/CLionProjects/Proyecto_X/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/facu/CLionProjects/Proyecto_X /home/facu/CLionProjects/Proyecto_X/IntentoDePrograma /home/facu/CLionProjects/Proyecto_X/cmake-build-debug /home/facu/CLionProjects/Proyecto_X/cmake-build-debug/IntentoDePrograma /home/facu/CLionProjects/Proyecto_X/cmake-build-debug/IntentoDePrograma/CMakeFiles/codingProyect.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : IntentoDePrograma/CMakeFiles/codingProyect.dir/depend
