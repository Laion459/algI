# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\laion\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7148.70\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\laion\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7148.70\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\laion\CLionProjects\desvioPadrao

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\laion\CLionProjects\desvioPadrao\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/desvioPadrao.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/desvioPadrao.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/desvioPadrao.dir/flags.make

CMakeFiles/desvioPadrao.dir/main.cpp.obj: CMakeFiles/desvioPadrao.dir/flags.make
CMakeFiles/desvioPadrao.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\laion\CLionProjects\desvioPadrao\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/desvioPadrao.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\desvioPadrao.dir\main.cpp.obj -c C:\Users\laion\CLionProjects\desvioPadrao\main.cpp

CMakeFiles/desvioPadrao.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/desvioPadrao.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\laion\CLionProjects\desvioPadrao\main.cpp > CMakeFiles\desvioPadrao.dir\main.cpp.i

CMakeFiles/desvioPadrao.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/desvioPadrao.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\laion\CLionProjects\desvioPadrao\main.cpp -o CMakeFiles\desvioPadrao.dir\main.cpp.s

# Object files for target desvioPadrao
desvioPadrao_OBJECTS = \
"CMakeFiles/desvioPadrao.dir/main.cpp.obj"

# External object files for target desvioPadrao
desvioPadrao_EXTERNAL_OBJECTS =

desvioPadrao.exe: CMakeFiles/desvioPadrao.dir/main.cpp.obj
desvioPadrao.exe: CMakeFiles/desvioPadrao.dir/build.make
desvioPadrao.exe: CMakeFiles/desvioPadrao.dir/linklibs.rsp
desvioPadrao.exe: CMakeFiles/desvioPadrao.dir/objects1.rsp
desvioPadrao.exe: CMakeFiles/desvioPadrao.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\laion\CLionProjects\desvioPadrao\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable desvioPadrao.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\desvioPadrao.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/desvioPadrao.dir/build: desvioPadrao.exe

.PHONY : CMakeFiles/desvioPadrao.dir/build

CMakeFiles/desvioPadrao.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\desvioPadrao.dir\cmake_clean.cmake
.PHONY : CMakeFiles/desvioPadrao.dir/clean

CMakeFiles/desvioPadrao.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\laion\CLionProjects\desvioPadrao C:\Users\laion\CLionProjects\desvioPadrao C:\Users\laion\CLionProjects\desvioPadrao\cmake-build-debug C:\Users\laion\CLionProjects\desvioPadrao\cmake-build-debug C:\Users\laion\CLionProjects\desvioPadrao\cmake-build-debug\CMakeFiles\desvioPadrao.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/desvioPadrao.dir/depend
