# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4

# Include any dependencies generated for this target.
include src/modules/dataman/CMakeFiles/modules__dataman.dir/depend.make

# Include the progress variables for this target.
include src/modules/dataman/CMakeFiles/modules__dataman.dir/progress.make

# Include the compile flags for this target's objects.
include src/modules/dataman/CMakeFiles/modules__dataman.dir/flags.make

src/modules/dataman/CMakeFiles/modules__dataman.dir/dataman.cpp.o: src/modules/dataman/CMakeFiles/modules__dataman.dir/flags.make
src/modules/dataman/CMakeFiles/modules__dataman.dir/dataman.cpp.o: /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/src/modules/dataman/dataman.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/modules/dataman/CMakeFiles/modules__dataman.dir/dataman.cpp.o"
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/src/modules/dataman && /usr/bin/ccache /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/modules__dataman.dir/dataman.cpp.o -c /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/src/modules/dataman/dataman.cpp

src/modules/dataman/CMakeFiles/modules__dataman.dir/dataman.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/modules__dataman.dir/dataman.cpp.i"
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/src/modules/dataman && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/src/modules/dataman/dataman.cpp > CMakeFiles/modules__dataman.dir/dataman.cpp.i

src/modules/dataman/CMakeFiles/modules__dataman.dir/dataman.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/modules__dataman.dir/dataman.cpp.s"
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/src/modules/dataman && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/src/modules/dataman/dataman.cpp -o CMakeFiles/modules__dataman.dir/dataman.cpp.s

src/modules/dataman/CMakeFiles/modules__dataman.dir/dataman.cpp.o.requires:

.PHONY : src/modules/dataman/CMakeFiles/modules__dataman.dir/dataman.cpp.o.requires

src/modules/dataman/CMakeFiles/modules__dataman.dir/dataman.cpp.o.provides: src/modules/dataman/CMakeFiles/modules__dataman.dir/dataman.cpp.o.requires
	$(MAKE) -f src/modules/dataman/CMakeFiles/modules__dataman.dir/build.make src/modules/dataman/CMakeFiles/modules__dataman.dir/dataman.cpp.o.provides.build
.PHONY : src/modules/dataman/CMakeFiles/modules__dataman.dir/dataman.cpp.o.provides

src/modules/dataman/CMakeFiles/modules__dataman.dir/dataman.cpp.o.provides.build: src/modules/dataman/CMakeFiles/modules__dataman.dir/dataman.cpp.o


# Object files for target modules__dataman
modules__dataman_OBJECTS = \
"CMakeFiles/modules__dataman.dir/dataman.cpp.o"

# External object files for target modules__dataman
modules__dataman_EXTERNAL_OBJECTS =

/home/pranavkumar14/Documents/aerial_robo/projet_ros/devel/.private/px4/lib/libmodules__dataman.a: src/modules/dataman/CMakeFiles/modules__dataman.dir/dataman.cpp.o
/home/pranavkumar14/Documents/aerial_robo/projet_ros/devel/.private/px4/lib/libmodules__dataman.a: src/modules/dataman/CMakeFiles/modules__dataman.dir/build.make
/home/pranavkumar14/Documents/aerial_robo/projet_ros/devel/.private/px4/lib/libmodules__dataman.a: src/modules/dataman/CMakeFiles/modules__dataman.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library /home/pranavkumar14/Documents/aerial_robo/projet_ros/devel/.private/px4/lib/libmodules__dataman.a"
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/src/modules/dataman && $(CMAKE_COMMAND) -P CMakeFiles/modules__dataman.dir/cmake_clean_target.cmake
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/src/modules/dataman && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/modules__dataman.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/modules/dataman/CMakeFiles/modules__dataman.dir/build: /home/pranavkumar14/Documents/aerial_robo/projet_ros/devel/.private/px4/lib/libmodules__dataman.a

.PHONY : src/modules/dataman/CMakeFiles/modules__dataman.dir/build

src/modules/dataman/CMakeFiles/modules__dataman.dir/requires: src/modules/dataman/CMakeFiles/modules__dataman.dir/dataman.cpp.o.requires

.PHONY : src/modules/dataman/CMakeFiles/modules__dataman.dir/requires

src/modules/dataman/CMakeFiles/modules__dataman.dir/clean:
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/src/modules/dataman && $(CMAKE_COMMAND) -P CMakeFiles/modules__dataman.dir/cmake_clean.cmake
.PHONY : src/modules/dataman/CMakeFiles/modules__dataman.dir/clean

src/modules/dataman/CMakeFiles/modules__dataman.dir/depend:
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/src/modules/dataman /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4 /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/src/modules/dataman /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/src/modules/dataman/CMakeFiles/modules__dataman.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/modules/dataman/CMakeFiles/modules__dataman.dir/depend

