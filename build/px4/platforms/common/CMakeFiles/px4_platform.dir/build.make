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
include platforms/common/CMakeFiles/px4_platform.dir/depend.make

# Include the progress variables for this target.
include platforms/common/CMakeFiles/px4_platform.dir/progress.make

# Include the compile flags for this target's objects.
include platforms/common/CMakeFiles/px4_platform.dir/flags.make

platforms/common/CMakeFiles/px4_platform.dir/module.cpp.o: platforms/common/CMakeFiles/px4_platform.dir/flags.make
platforms/common/CMakeFiles/px4_platform.dir/module.cpp.o: /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/platforms/common/module.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object platforms/common/CMakeFiles/px4_platform.dir/module.cpp.o"
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/platforms/common && /usr/bin/ccache /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/px4_platform.dir/module.cpp.o -c /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/platforms/common/module.cpp

platforms/common/CMakeFiles/px4_platform.dir/module.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/px4_platform.dir/module.cpp.i"
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/platforms/common && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/platforms/common/module.cpp > CMakeFiles/px4_platform.dir/module.cpp.i

platforms/common/CMakeFiles/px4_platform.dir/module.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/px4_platform.dir/module.cpp.s"
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/platforms/common && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/platforms/common/module.cpp -o CMakeFiles/px4_platform.dir/module.cpp.s

platforms/common/CMakeFiles/px4_platform.dir/module.cpp.o.requires:

.PHONY : platforms/common/CMakeFiles/px4_platform.dir/module.cpp.o.requires

platforms/common/CMakeFiles/px4_platform.dir/module.cpp.o.provides: platforms/common/CMakeFiles/px4_platform.dir/module.cpp.o.requires
	$(MAKE) -f platforms/common/CMakeFiles/px4_platform.dir/build.make platforms/common/CMakeFiles/px4_platform.dir/module.cpp.o.provides.build
.PHONY : platforms/common/CMakeFiles/px4_platform.dir/module.cpp.o.provides

platforms/common/CMakeFiles/px4_platform.dir/module.cpp.o.provides.build: platforms/common/CMakeFiles/px4_platform.dir/module.cpp.o


platforms/common/CMakeFiles/px4_platform.dir/px4_getopt.c.o: platforms/common/CMakeFiles/px4_platform.dir/flags.make
platforms/common/CMakeFiles/px4_platform.dir/px4_getopt.c.o: /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/platforms/common/px4_getopt.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object platforms/common/CMakeFiles/px4_platform.dir/px4_getopt.c.o"
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/platforms/common && /usr/bin/ccache /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/px4_platform.dir/px4_getopt.c.o   -c /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/platforms/common/px4_getopt.c

platforms/common/CMakeFiles/px4_platform.dir/px4_getopt.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/px4_platform.dir/px4_getopt.c.i"
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/platforms/common && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/platforms/common/px4_getopt.c > CMakeFiles/px4_platform.dir/px4_getopt.c.i

platforms/common/CMakeFiles/px4_platform.dir/px4_getopt.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/px4_platform.dir/px4_getopt.c.s"
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/platforms/common && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/platforms/common/px4_getopt.c -o CMakeFiles/px4_platform.dir/px4_getopt.c.s

platforms/common/CMakeFiles/px4_platform.dir/px4_getopt.c.o.requires:

.PHONY : platforms/common/CMakeFiles/px4_platform.dir/px4_getopt.c.o.requires

platforms/common/CMakeFiles/px4_platform.dir/px4_getopt.c.o.provides: platforms/common/CMakeFiles/px4_platform.dir/px4_getopt.c.o.requires
	$(MAKE) -f platforms/common/CMakeFiles/px4_platform.dir/build.make platforms/common/CMakeFiles/px4_platform.dir/px4_getopt.c.o.provides.build
.PHONY : platforms/common/CMakeFiles/px4_platform.dir/px4_getopt.c.o.provides

platforms/common/CMakeFiles/px4_platform.dir/px4_getopt.c.o.provides.build: platforms/common/CMakeFiles/px4_platform.dir/px4_getopt.c.o


platforms/common/CMakeFiles/px4_platform.dir/px4_cli.cpp.o: platforms/common/CMakeFiles/px4_platform.dir/flags.make
platforms/common/CMakeFiles/px4_platform.dir/px4_cli.cpp.o: /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/platforms/common/px4_cli.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object platforms/common/CMakeFiles/px4_platform.dir/px4_cli.cpp.o"
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/platforms/common && /usr/bin/ccache /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/px4_platform.dir/px4_cli.cpp.o -c /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/platforms/common/px4_cli.cpp

platforms/common/CMakeFiles/px4_platform.dir/px4_cli.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/px4_platform.dir/px4_cli.cpp.i"
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/platforms/common && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/platforms/common/px4_cli.cpp > CMakeFiles/px4_platform.dir/px4_cli.cpp.i

platforms/common/CMakeFiles/px4_platform.dir/px4_cli.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/px4_platform.dir/px4_cli.cpp.s"
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/platforms/common && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/platforms/common/px4_cli.cpp -o CMakeFiles/px4_platform.dir/px4_cli.cpp.s

platforms/common/CMakeFiles/px4_platform.dir/px4_cli.cpp.o.requires:

.PHONY : platforms/common/CMakeFiles/px4_platform.dir/px4_cli.cpp.o.requires

platforms/common/CMakeFiles/px4_platform.dir/px4_cli.cpp.o.provides: platforms/common/CMakeFiles/px4_platform.dir/px4_cli.cpp.o.requires
	$(MAKE) -f platforms/common/CMakeFiles/px4_platform.dir/build.make platforms/common/CMakeFiles/px4_platform.dir/px4_cli.cpp.o.provides.build
.PHONY : platforms/common/CMakeFiles/px4_platform.dir/px4_cli.cpp.o.provides

platforms/common/CMakeFiles/px4_platform.dir/px4_cli.cpp.o.provides.build: platforms/common/CMakeFiles/px4_platform.dir/px4_cli.cpp.o


platforms/common/CMakeFiles/px4_platform.dir/shutdown.cpp.o: platforms/common/CMakeFiles/px4_platform.dir/flags.make
platforms/common/CMakeFiles/px4_platform.dir/shutdown.cpp.o: /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/platforms/common/shutdown.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object platforms/common/CMakeFiles/px4_platform.dir/shutdown.cpp.o"
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/platforms/common && /usr/bin/ccache /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/px4_platform.dir/shutdown.cpp.o -c /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/platforms/common/shutdown.cpp

platforms/common/CMakeFiles/px4_platform.dir/shutdown.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/px4_platform.dir/shutdown.cpp.i"
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/platforms/common && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/platforms/common/shutdown.cpp > CMakeFiles/px4_platform.dir/shutdown.cpp.i

platforms/common/CMakeFiles/px4_platform.dir/shutdown.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/px4_platform.dir/shutdown.cpp.s"
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/platforms/common && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/platforms/common/shutdown.cpp -o CMakeFiles/px4_platform.dir/shutdown.cpp.s

platforms/common/CMakeFiles/px4_platform.dir/shutdown.cpp.o.requires:

.PHONY : platforms/common/CMakeFiles/px4_platform.dir/shutdown.cpp.o.requires

platforms/common/CMakeFiles/px4_platform.dir/shutdown.cpp.o.provides: platforms/common/CMakeFiles/px4_platform.dir/shutdown.cpp.o.requires
	$(MAKE) -f platforms/common/CMakeFiles/px4_platform.dir/build.make platforms/common/CMakeFiles/px4_platform.dir/shutdown.cpp.o.provides.build
.PHONY : platforms/common/CMakeFiles/px4_platform.dir/shutdown.cpp.o.provides

platforms/common/CMakeFiles/px4_platform.dir/shutdown.cpp.o.provides.build: platforms/common/CMakeFiles/px4_platform.dir/shutdown.cpp.o


platforms/common/CMakeFiles/px4_platform.dir/px4_log.c.o: platforms/common/CMakeFiles/px4_platform.dir/flags.make
platforms/common/CMakeFiles/px4_platform.dir/px4_log.c.o: /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/platforms/common/px4_log.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object platforms/common/CMakeFiles/px4_platform.dir/px4_log.c.o"
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/platforms/common && /usr/bin/ccache /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/px4_platform.dir/px4_log.c.o   -c /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/platforms/common/px4_log.c

platforms/common/CMakeFiles/px4_platform.dir/px4_log.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/px4_platform.dir/px4_log.c.i"
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/platforms/common && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/platforms/common/px4_log.c > CMakeFiles/px4_platform.dir/px4_log.c.i

platforms/common/CMakeFiles/px4_platform.dir/px4_log.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/px4_platform.dir/px4_log.c.s"
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/platforms/common && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/platforms/common/px4_log.c -o CMakeFiles/px4_platform.dir/px4_log.c.s

platforms/common/CMakeFiles/px4_platform.dir/px4_log.c.o.requires:

.PHONY : platforms/common/CMakeFiles/px4_platform.dir/px4_log.c.o.requires

platforms/common/CMakeFiles/px4_platform.dir/px4_log.c.o.provides: platforms/common/CMakeFiles/px4_platform.dir/px4_log.c.o.requires
	$(MAKE) -f platforms/common/CMakeFiles/px4_platform.dir/build.make platforms/common/CMakeFiles/px4_platform.dir/px4_log.c.o.provides.build
.PHONY : platforms/common/CMakeFiles/px4_platform.dir/px4_log.c.o.provides

platforms/common/CMakeFiles/px4_platform.dir/px4_log.c.o.provides.build: platforms/common/CMakeFiles/px4_platform.dir/px4_log.c.o


# Object files for target px4_platform
px4_platform_OBJECTS = \
"CMakeFiles/px4_platform.dir/module.cpp.o" \
"CMakeFiles/px4_platform.dir/px4_getopt.c.o" \
"CMakeFiles/px4_platform.dir/px4_cli.cpp.o" \
"CMakeFiles/px4_platform.dir/shutdown.cpp.o" \
"CMakeFiles/px4_platform.dir/px4_log.c.o"

# External object files for target px4_platform
px4_platform_EXTERNAL_OBJECTS =

/home/pranavkumar14/Documents/aerial_robo/projet_ros/devel/.private/px4/lib/libpx4_platform.a: platforms/common/CMakeFiles/px4_platform.dir/module.cpp.o
/home/pranavkumar14/Documents/aerial_robo/projet_ros/devel/.private/px4/lib/libpx4_platform.a: platforms/common/CMakeFiles/px4_platform.dir/px4_getopt.c.o
/home/pranavkumar14/Documents/aerial_robo/projet_ros/devel/.private/px4/lib/libpx4_platform.a: platforms/common/CMakeFiles/px4_platform.dir/px4_cli.cpp.o
/home/pranavkumar14/Documents/aerial_robo/projet_ros/devel/.private/px4/lib/libpx4_platform.a: platforms/common/CMakeFiles/px4_platform.dir/shutdown.cpp.o
/home/pranavkumar14/Documents/aerial_robo/projet_ros/devel/.private/px4/lib/libpx4_platform.a: platforms/common/CMakeFiles/px4_platform.dir/px4_log.c.o
/home/pranavkumar14/Documents/aerial_robo/projet_ros/devel/.private/px4/lib/libpx4_platform.a: platforms/common/CMakeFiles/px4_platform.dir/build.make
/home/pranavkumar14/Documents/aerial_robo/projet_ros/devel/.private/px4/lib/libpx4_platform.a: platforms/common/CMakeFiles/px4_platform.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library /home/pranavkumar14/Documents/aerial_robo/projet_ros/devel/.private/px4/lib/libpx4_platform.a"
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/platforms/common && $(CMAKE_COMMAND) -P CMakeFiles/px4_platform.dir/cmake_clean_target.cmake
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/platforms/common && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/px4_platform.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
platforms/common/CMakeFiles/px4_platform.dir/build: /home/pranavkumar14/Documents/aerial_robo/projet_ros/devel/.private/px4/lib/libpx4_platform.a

.PHONY : platforms/common/CMakeFiles/px4_platform.dir/build

platforms/common/CMakeFiles/px4_platform.dir/requires: platforms/common/CMakeFiles/px4_platform.dir/module.cpp.o.requires
platforms/common/CMakeFiles/px4_platform.dir/requires: platforms/common/CMakeFiles/px4_platform.dir/px4_getopt.c.o.requires
platforms/common/CMakeFiles/px4_platform.dir/requires: platforms/common/CMakeFiles/px4_platform.dir/px4_cli.cpp.o.requires
platforms/common/CMakeFiles/px4_platform.dir/requires: platforms/common/CMakeFiles/px4_platform.dir/shutdown.cpp.o.requires
platforms/common/CMakeFiles/px4_platform.dir/requires: platforms/common/CMakeFiles/px4_platform.dir/px4_log.c.o.requires

.PHONY : platforms/common/CMakeFiles/px4_platform.dir/requires

platforms/common/CMakeFiles/px4_platform.dir/clean:
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/platforms/common && $(CMAKE_COMMAND) -P CMakeFiles/px4_platform.dir/cmake_clean.cmake
.PHONY : platforms/common/CMakeFiles/px4_platform.dir/clean

platforms/common/CMakeFiles/px4_platform.dir/depend:
	cd /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware /home/pranavkumar14/Documents/aerial_robo/projet_ros/src/Firmware/platforms/common /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4 /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/platforms/common /home/pranavkumar14/Documents/aerial_robo/projet_ros/build/px4/platforms/common/CMakeFiles/px4_platform.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : platforms/common/CMakeFiles/px4_platform.dir/depend

