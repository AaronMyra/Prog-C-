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
CMAKE_SOURCE_DIR = "E:\Second Year\PROG 2100 - C++\Class 1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\Second Year\PROG 2100 - C++\Class 1\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Class_1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Class_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Class_1.dir/flags.make

CMakeFiles/Class_1.dir/main.cpp.obj: CMakeFiles/Class_1.dir/flags.make
CMakeFiles/Class_1.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\Second Year\PROG 2100 - C++\Class 1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Class_1.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Class_1.dir\main.cpp.obj -c "E:\Second Year\PROG 2100 - C++\Class 1\main.cpp"

CMakeFiles/Class_1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Class_1.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\Second Year\PROG 2100 - C++\Class 1\main.cpp" > CMakeFiles\Class_1.dir\main.cpp.i

CMakeFiles/Class_1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Class_1.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\Second Year\PROG 2100 - C++\Class 1\main.cpp" -o CMakeFiles\Class_1.dir\main.cpp.s

# Object files for target Class_1
Class_1_OBJECTS = \
"CMakeFiles/Class_1.dir/main.cpp.obj"

# External object files for target Class_1
Class_1_EXTERNAL_OBJECTS =

Class_1.exe: CMakeFiles/Class_1.dir/main.cpp.obj
Class_1.exe: CMakeFiles/Class_1.dir/build.make
Class_1.exe: CMakeFiles/Class_1.dir/linklibs.rsp
Class_1.exe: CMakeFiles/Class_1.dir/objects1.rsp
Class_1.exe: CMakeFiles/Class_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\Second Year\PROG 2100 - C++\Class 1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Class_1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Class_1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Class_1.dir/build: Class_1.exe

.PHONY : CMakeFiles/Class_1.dir/build

CMakeFiles/Class_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Class_1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Class_1.dir/clean

CMakeFiles/Class_1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\Second Year\PROG 2100 - C++\Class 1" "E:\Second Year\PROG 2100 - C++\Class 1" "E:\Second Year\PROG 2100 - C++\Class 1\cmake-build-debug" "E:\Second Year\PROG 2100 - C++\Class 1\cmake-build-debug" "E:\Second Year\PROG 2100 - C++\Class 1\cmake-build-debug\CMakeFiles\Class_1.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Class_1.dir/depend
