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
CMAKE_SOURCE_DIR = /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/mavlink

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/mavlink

# Utility rule file for autoquad.xml-v1.0.

# Include the progress variables for this target.
include CMakeFiles/autoquad.xml-v1.0.dir/progress.make

CMakeFiles/autoquad.xml-v1.0: include/v1.0/autoquad/autoquad.h


include/v1.0/autoquad/autoquad.h: /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/mavlink/message_definitions/v1.0/autoquad.xml
include/v1.0/autoquad/autoquad.h: /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/mavlink/message_definitions/v1.0/common.xml
include/v1.0/autoquad/autoquad.h: /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/mavlink/pymavlink/tools/mavgen.py
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/pranavkumar14/Documents/aerial_robo/projet_ros/build/mavlink/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating include/v1.0/autoquad/autoquad.h"
	/usr/bin/env PYTHONPATH="/home/pranavkumar14/Documents/aerial_robo/projet_ros/src/mavlink:/opt/ros/melodic/lib/python2.7/dist-packages" /usr/bin/python2 /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/mavlink/pymavlink/tools/mavgen.py --lang=C --wire-protocol=1.0 --output=include/v1.0 /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/mavlink/message_definitions/v1.0/autoquad.xml

autoquad.xml-v1.0: CMakeFiles/autoquad.xml-v1.0
autoquad.xml-v1.0: include/v1.0/autoquad/autoquad.h
autoquad.xml-v1.0: CMakeFiles/autoquad.xml-v1.0.dir/build.make

.PHONY : autoquad.xml-v1.0

# Rule to build all files generated by this target.
CMakeFiles/autoquad.xml-v1.0.dir/build: autoquad.xml-v1.0

.PHONY : CMakeFiles/autoquad.xml-v1.0.dir/build

CMakeFiles/autoquad.xml-v1.0.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/autoquad.xml-v1.0.dir/cmake_clean.cmake
.PHONY : CMakeFiles/autoquad.xml-v1.0.dir/clean

CMakeFiles/autoquad.xml-v1.0.dir/depend:
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/mavlink && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/mavlink /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/mavlink /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/mavlink /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/mavlink /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/mavlink/CMakeFiles/autoquad.xml-v1.0.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/autoquad.xml-v1.0.dir/depend

