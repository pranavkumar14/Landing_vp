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

# Utility rule file for git_mavlink_v2.

# Include the progress variables for this target.
include src/modules/mavlink/CMakeFiles/git_mavlink_v2.dir/progress.make

src/modules/mavlink/CMakeFiles/git_mavlink_v2: src/modules/mavlink/git_init__home_pranavkumar14_Documents_aerial_robo_projet_ros_src_Firmware_mavlink_include_mavlink_v2_0.stamp


src/modules/mavlink/git_init__home_pranavkumar14_Documents_aerial_robo_projet_ros_src_Firmware_mavlink_include_mavlink_v2_0.stamp: /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/.gitmodules
src/modules/mavlink/git_init__home_pranavkumar14_Documents_aerial_robo_projet_ros_src_Firmware_mavlink_include_mavlink_v2_0.stamp: /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/mavlink/include/mavlink/v2.0/.git
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "git submodule mavlink/include/mavlink/v2.0"
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware && Tools/check_submodules.sh mavlink/include/mavlink/v2.0
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware && /usr/bin/cmake -E touch /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/src/modules/mavlink/git_init__home_pranavkumar14_Documents_aerial_robo_projet_ros_src_Firmware_mavlink_include_mavlink_v2_0.stamp

git_mavlink_v2: src/modules/mavlink/CMakeFiles/git_mavlink_v2
git_mavlink_v2: src/modules/mavlink/git_init__home_pranavkumar14_Documents_aerial_robo_projet_ros_src_Firmware_mavlink_include_mavlink_v2_0.stamp
git_mavlink_v2: src/modules/mavlink/CMakeFiles/git_mavlink_v2.dir/build.make

.PHONY : git_mavlink_v2

# Rule to build all files generated by this target.
src/modules/mavlink/CMakeFiles/git_mavlink_v2.dir/build: git_mavlink_v2

.PHONY : src/modules/mavlink/CMakeFiles/git_mavlink_v2.dir/build

src/modules/mavlink/CMakeFiles/git_mavlink_v2.dir/clean:
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/src/modules/mavlink && $(CMAKE_COMMAND) -P CMakeFiles/git_mavlink_v2.dir/cmake_clean.cmake
.PHONY : src/modules/mavlink/CMakeFiles/git_mavlink_v2.dir/clean

src/modules/mavlink/CMakeFiles/git_mavlink_v2.dir/depend:
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/src/modules/mavlink /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4 /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/src/modules/mavlink /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/src/modules/mavlink/CMakeFiles/git_mavlink_v2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/modules/mavlink/CMakeFiles/git_mavlink_v2.dir/depend

