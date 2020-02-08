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
include src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/depend.make

# Include the progress variables for this target.
include src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/progress.make

# Include the compile flags for this target's objects.
include src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/flags.make

src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/FlightTaskAutoFollowMe.cpp.o: src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/flags.make
src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/FlightTaskAutoFollowMe.cpp.o: /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/src/lib/FlightTasks/tasks/AutoFollowMe/FlightTaskAutoFollowMe.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/FlightTaskAutoFollowMe.cpp.o"
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/src/lib/FlightTasks/tasks/AutoFollowMe && /usr/bin/ccache /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FlightTaskAutoFollowMe.dir/FlightTaskAutoFollowMe.cpp.o -c /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/src/lib/FlightTasks/tasks/AutoFollowMe/FlightTaskAutoFollowMe.cpp

src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/FlightTaskAutoFollowMe.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FlightTaskAutoFollowMe.dir/FlightTaskAutoFollowMe.cpp.i"
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/src/lib/FlightTasks/tasks/AutoFollowMe && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/src/lib/FlightTasks/tasks/AutoFollowMe/FlightTaskAutoFollowMe.cpp > CMakeFiles/FlightTaskAutoFollowMe.dir/FlightTaskAutoFollowMe.cpp.i

src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/FlightTaskAutoFollowMe.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FlightTaskAutoFollowMe.dir/FlightTaskAutoFollowMe.cpp.s"
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/src/lib/FlightTasks/tasks/AutoFollowMe && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/src/lib/FlightTasks/tasks/AutoFollowMe/FlightTaskAutoFollowMe.cpp -o CMakeFiles/FlightTaskAutoFollowMe.dir/FlightTaskAutoFollowMe.cpp.s

src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/FlightTaskAutoFollowMe.cpp.o.requires:

.PHONY : src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/FlightTaskAutoFollowMe.cpp.o.requires

src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/FlightTaskAutoFollowMe.cpp.o.provides: src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/FlightTaskAutoFollowMe.cpp.o.requires
	$(MAKE) -f src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/build.make src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/FlightTaskAutoFollowMe.cpp.o.provides.build
.PHONY : src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/FlightTaskAutoFollowMe.cpp.o.provides

src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/FlightTaskAutoFollowMe.cpp.o.provides.build: src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/FlightTaskAutoFollowMe.cpp.o


# Object files for target FlightTaskAutoFollowMe
FlightTaskAutoFollowMe_OBJECTS = \
"CMakeFiles/FlightTaskAutoFollowMe.dir/FlightTaskAutoFollowMe.cpp.o"

# External object files for target FlightTaskAutoFollowMe
FlightTaskAutoFollowMe_EXTERNAL_OBJECTS =

/home/pranavkumar14/Documents/aerial_robo/projet_ros/devel/.private/px4/lib/libFlightTaskAutoFollowMe.a: src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/FlightTaskAutoFollowMe.cpp.o
/home/pranavkumar14/Documents/aerial_robo/projet_ros/devel/.private/px4/lib/libFlightTaskAutoFollowMe.a: src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/build.make
/home/pranavkumar14/Documents/aerial_robo/projet_ros/devel/.private/px4/lib/libFlightTaskAutoFollowMe.a: src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library /home/pranavkumar14/Documents/aerial_robo/projet_ros/devel/.private/px4/lib/libFlightTaskAutoFollowMe.a"
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/src/lib/FlightTasks/tasks/AutoFollowMe && $(CMAKE_COMMAND) -P CMakeFiles/FlightTaskAutoFollowMe.dir/cmake_clean_target.cmake
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/src/lib/FlightTasks/tasks/AutoFollowMe && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FlightTaskAutoFollowMe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/build: /home/pranavkumar14/Documents/aerial_robo/projet_ros/devel/.private/px4/lib/libFlightTaskAutoFollowMe.a

.PHONY : src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/build

src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/requires: src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/FlightTaskAutoFollowMe.cpp.o.requires

.PHONY : src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/requires

src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/clean:
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/src/lib/FlightTasks/tasks/AutoFollowMe && $(CMAKE_COMMAND) -P CMakeFiles/FlightTaskAutoFollowMe.dir/cmake_clean.cmake
.PHONY : src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/clean

src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/depend:
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/src/lib/FlightTasks/tasks/AutoFollowMe /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4 /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/src/lib/FlightTasks/tasks/AutoFollowMe /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/lib/FlightTasks/tasks/AutoFollowMe/CMakeFiles/FlightTaskAutoFollowMe.dir/depend

