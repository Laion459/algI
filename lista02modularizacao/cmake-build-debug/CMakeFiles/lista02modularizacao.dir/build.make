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
CMAKE_COMMAND = C:\Users\laion\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7717.62\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\laion\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7717.62\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\laion\CLionProjects\lista02modularizacao

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\laion\CLionProjects\lista02modularizacao\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lista02modularizacao.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lista02modularizacao.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lista02modularizacao.dir/flags.make

CMakeFiles/lista02modularizacao.dir/main.cpp.obj: CMakeFiles/lista02modularizacao.dir/flags.make
CMakeFiles/lista02modularizacao.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\laion\CLionProjects\lista02modularizacao\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lista02modularizacao.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lista02modularizacao.dir\main.cpp.obj -c C:\Users\laion\CLionProjects\lista02modularizacao\main.cpp

CMakeFiles/lista02modularizacao.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lista02modularizacao.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\laion\CLionProjects\lista02modularizacao\main.cpp > CMakeFiles\lista02modularizacao.dir\main.cpp.i

CMakeFiles/lista02modularizacao.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lista02modularizacao.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\laion\CLionProjects\lista02modularizacao\main.cpp -o CMakeFiles\lista02modularizacao.dir\main.cpp.s

# Object files for target lista02modularizacao
lista02modularizacao_OBJECTS = \
"CMakeFiles/lista02modularizacao.dir/main.cpp.obj"

# External object files for target lista02modularizacao
lista02modularizacao_EXTERNAL_OBJECTS =

lista02modularizacao.exe: CMakeFiles/lista02modularizacao.dir/main.cpp.obj
lista02modularizacao.exe: CMakeFiles/lista02modularizacao.dir/build.make
lista02modularizacao.exe: CMakeFiles/lista02modularizacao.dir/linklibs.rsp
lista02modularizacao.exe: CMakeFiles/lista02modularizacao.dir/objects1.rsp
lista02modularizacao.exe: CMakeFiles/lista02modularizacao.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\laion\CLionProjects\lista02modularizacao\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lista02modularizacao.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lista02modularizacao.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lista02modularizacao.dir/build: lista02modularizacao.exe

.PHONY : CMakeFiles/lista02modularizacao.dir/build

CMakeFiles/lista02modularizacao.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lista02modularizacao.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lista02modularizacao.dir/clean

CMakeFiles/lista02modularizacao.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\laion\CLionProjects\lista02modularizacao C:\Users\laion\CLionProjects\lista02modularizacao C:\Users\laion\CLionProjects\lista02modularizacao\cmake-build-debug C:\Users\laion\CLionProjects\lista02modularizacao\cmake-build-debug C:\Users\laion\CLionProjects\lista02modularizacao\cmake-build-debug\CMakeFiles\lista02modularizacao.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lista02modularizacao.dir/depend

