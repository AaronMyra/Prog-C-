# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.1.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.1.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\Second Year\PROG 2100 - C++\Source Code\Demos\Namespaces Demo"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\Second Year\PROG 2100 - C++\Source Code\Demos\Namespaces Demo\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Namespaces_Demo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Namespaces_Demo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Namespaces_Demo.dir/flags.make

CMakeFiles/Namespaces_Demo.dir/main.cpp.obj: CMakeFiles/Namespaces_Demo.dir/flags.make
CMakeFiles/Namespaces_Demo.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\Second Year\PROG 2100 - C++\Source Code\Demos\Namespaces Demo\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Namespaces_Demo.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Namespaces_Demo.dir\main.cpp.obj -c "E:\Second Year\PROG 2100 - C++\Source Code\Demos\Namespaces Demo\main.cpp"

CMakeFiles/Namespaces_Demo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Namespaces_Demo.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\Second Year\PROG 2100 - C++\Source Code\Demos\Namespaces Demo\main.cpp" > CMakeFiles\Namespaces_Demo.dir\main.cpp.i

CMakeFiles/Namespaces_Demo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Namespaces_Demo.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\Second Year\PROG 2100 - C++\Source Code\Demos\Namespaces Demo\main.cpp" -o CMakeFiles\Namespaces_Demo.dir\main.cpp.s

# Object files for target Namespaces_Demo
Namespaces_Demo_OBJECTS = \
"CMakeFiles/Namespaces_Demo.dir/main.cpp.obj"

# External object files for target Namespaces_Demo
Namespaces_Demo_EXTERNAL_OBJECTS =

Namespaces_Demo.exe: CMakeFiles/Namespaces_Demo.dir/main.cpp.obj
Namespaces_Demo.exe: CMakeFiles/Namespaces_Demo.dir/build.make
Namespaces_Demo.exe: CMakeFiles/Namespaces_Demo.dir/linklibs.rsp
Namespaces_Demo.exe: CMakeFiles/Namespaces_Demo.dir/objects1.rsp
Namespaces_Demo.exe: CMakeFiles/Namespaces_Demo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\Second Year\PROG 2100 - C++\Source Code\Demos\Namespaces Demo\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Namespaces_Demo.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Namespaces_Demo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Namespaces_Demo.dir/build: Namespaces_Demo.exe

.PHONY : CMakeFiles/Namespaces_Demo.dir/build

CMakeFiles/Namespaces_Demo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Namespaces_Demo.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Namespaces_Demo.dir/clean

CMakeFiles/Namespaces_Demo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\Second Year\PROG 2100 - C++\Source Code\Demos\Namespaces Demo" "E:\Second Year\PROG 2100 - C++\Source Code\Demos\Namespaces Demo" "E:\Second Year\PROG 2100 - C++\Source Code\Demos\Namespaces Demo\cmake-build-debug" "E:\Second Year\PROG 2100 - C++\Source Code\Demos\Namespaces Demo\cmake-build-debug" "E:\Second Year\PROG 2100 - C++\Source Code\Demos\Namespaces Demo\cmake-build-debug\CMakeFiles\Namespaces_Demo.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Namespaces_Demo.dir/depend

