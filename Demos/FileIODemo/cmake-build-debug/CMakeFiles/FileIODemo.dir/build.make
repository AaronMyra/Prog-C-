# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /cygdrive/c/Users/aaron/.CLion2019.1/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/aaron/.CLion2019.1/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/l/Second Year/PROG 2100 - C++/Source Code/Demos/FileIODemo"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/l/Second Year/PROG 2100 - C++/Source Code/Demos/FileIODemo/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/FileIODemo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FileIODemo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FileIODemo.dir/flags.make

CMakeFiles/FileIODemo.dir/main.cpp.o: CMakeFiles/FileIODemo.dir/flags.make
CMakeFiles/FileIODemo.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/l/Second Year/PROG 2100 - C++/Source Code/Demos/FileIODemo/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FileIODemo.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FileIODemo.dir/main.cpp.o -c "/cygdrive/l/Second Year/PROG 2100 - C++/Source Code/Demos/FileIODemo/main.cpp"

CMakeFiles/FileIODemo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FileIODemo.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/l/Second Year/PROG 2100 - C++/Source Code/Demos/FileIODemo/main.cpp" > CMakeFiles/FileIODemo.dir/main.cpp.i

CMakeFiles/FileIODemo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FileIODemo.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/l/Second Year/PROG 2100 - C++/Source Code/Demos/FileIODemo/main.cpp" -o CMakeFiles/FileIODemo.dir/main.cpp.s

# Object files for target FileIODemo
FileIODemo_OBJECTS = \
"CMakeFiles/FileIODemo.dir/main.cpp.o"

# External object files for target FileIODemo
FileIODemo_EXTERNAL_OBJECTS =

FileIODemo.exe: CMakeFiles/FileIODemo.dir/main.cpp.o
FileIODemo.exe: CMakeFiles/FileIODemo.dir/build.make
FileIODemo.exe: CMakeFiles/FileIODemo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/l/Second Year/PROG 2100 - C++/Source Code/Demos/FileIODemo/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable FileIODemo.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FileIODemo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FileIODemo.dir/build: FileIODemo.exe

.PHONY : CMakeFiles/FileIODemo.dir/build

CMakeFiles/FileIODemo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FileIODemo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FileIODemo.dir/clean

CMakeFiles/FileIODemo.dir/depend:
	cd "/cygdrive/l/Second Year/PROG 2100 - C++/Source Code/Demos/FileIODemo/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/l/Second Year/PROG 2100 - C++/Source Code/Demos/FileIODemo" "/cygdrive/l/Second Year/PROG 2100 - C++/Source Code/Demos/FileIODemo" "/cygdrive/l/Second Year/PROG 2100 - C++/Source Code/Demos/FileIODemo/cmake-build-debug" "/cygdrive/l/Second Year/PROG 2100 - C++/Source Code/Demos/FileIODemo/cmake-build-debug" "/cygdrive/l/Second Year/PROG 2100 - C++/Source Code/Demos/FileIODemo/cmake-build-debug/CMakeFiles/FileIODemo.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/FileIODemo.dir/depend

