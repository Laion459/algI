# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\laion\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5080.54\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\laion\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\212.5080.54\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\laion\CLionProjects\waly

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\laion\CLionProjects\waly\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/waly.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/waly.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/waly.dir/flags.make

CMakeFiles/waly.dir/main.cpp.obj: CMakeFiles/waly.dir/flags.make
CMakeFiles/waly.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\laion\CLionProjects\waly\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/waly.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\waly.dir\main.cpp.obj -c C:\Users\laion\CLionProjects\waly\main.cpp

CMakeFiles/waly.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/waly.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\laion\CLionProjects\waly\main.cpp > CMakeFiles\waly.dir\main.cpp.i

CMakeFiles/waly.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/waly.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\laion\CLionProjects\waly\main.cpp -o CMakeFiles\waly.dir\main.cpp.s

# Object files for target waly
waly_OBJECTS = \
"CMakeFiles/waly.dir/main.cpp.obj"

# External object files for target waly
waly_EXTERNAL_OBJECTS =

waly.exe: CMakeFiles/waly.dir/main.cpp.obj
waly.exe: CMakeFiles/waly.dir/build.make
waly.exe: CMakeFiles/waly.dir/linklibs.rsp
waly.exe: CMakeFiles/waly.dir/objects1.rsp
waly.exe: CMakeFiles/waly.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\laion\CLionProjects\waly\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable waly.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\waly.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/waly.dir/build: waly.exe
.PHONY : CMakeFiles/waly.dir/build

CMakeFiles/waly.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\waly.dir\cmake_clean.cmake
.PHONY : CMakeFiles/waly.dir/clean

CMakeFiles/waly.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\laion\CLionProjects\waly C:\Users\laion\CLionProjects\waly C:\Users\laion\CLionProjects\waly\cmake-build-debug C:\Users\laion\CLionProjects\waly\cmake-build-debug C:\Users\laion\CLionProjects\waly\cmake-build-debug\CMakeFiles\waly.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/waly.dir/depend

