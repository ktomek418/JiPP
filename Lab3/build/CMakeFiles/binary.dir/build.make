# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = "C:/Program Files/CMake/bin/cmake.exe"

# The command to remove a file.
RM = "C:/Program Files/CMake/bin/cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:/Users/ktome/OneDrive/Pulpit/JiPP/JiPP/Lab3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:/Users/ktome/OneDrive/Pulpit/JiPP/JiPP/Lab3/build

# Include any dependencies generated for this target.
include CMakeFiles/binary.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/binary.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/binary.dir/flags.make

CMakeFiles/binary.dir/src/Main_test.cpp.obj: CMakeFiles/binary.dir/flags.make
CMakeFiles/binary.dir/src/Main_test.cpp.obj: CMakeFiles/binary.dir/includes_CXX.rsp
CMakeFiles/binary.dir/src/Main_test.cpp.obj: ../src/Main_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:/Users/ktome/OneDrive/Pulpit/JiPP/JiPP/Lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/binary.dir/src/Main_test.cpp.obj"
	"C:/Program Files/MinGW/bin/g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/binary.dir/src/Main_test.cpp.obj -c C:/Users/ktome/OneDrive/Pulpit/JiPP/JiPP/Lab3/src/Main_test.cpp

CMakeFiles/binary.dir/src/Main_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/binary.dir/src/Main_test.cpp.i"
	"C:/Program Files/MinGW/bin/g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/ktome/OneDrive/Pulpit/JiPP/JiPP/Lab3/src/Main_test.cpp > CMakeFiles/binary.dir/src/Main_test.cpp.i

CMakeFiles/binary.dir/src/Main_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/binary.dir/src/Main_test.cpp.s"
	"C:/Program Files/MinGW/bin/g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/ktome/OneDrive/Pulpit/JiPP/JiPP/Lab3/src/Main_test.cpp -o CMakeFiles/binary.dir/src/Main_test.cpp.s

CMakeFiles/binary.dir/src/Macierz.cpp.obj: CMakeFiles/binary.dir/flags.make
CMakeFiles/binary.dir/src/Macierz.cpp.obj: CMakeFiles/binary.dir/includes_CXX.rsp
CMakeFiles/binary.dir/src/Macierz.cpp.obj: ../src/Macierz.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:/Users/ktome/OneDrive/Pulpit/JiPP/JiPP/Lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/binary.dir/src/Macierz.cpp.obj"
	"C:/Program Files/MinGW/bin/g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/binary.dir/src/Macierz.cpp.obj -c C:/Users/ktome/OneDrive/Pulpit/JiPP/JiPP/Lab3/src/Macierz.cpp

CMakeFiles/binary.dir/src/Macierz.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/binary.dir/src/Macierz.cpp.i"
	"C:/Program Files/MinGW/bin/g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/ktome/OneDrive/Pulpit/JiPP/JiPP/Lab3/src/Macierz.cpp > CMakeFiles/binary.dir/src/Macierz.cpp.i

CMakeFiles/binary.dir/src/Macierz.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/binary.dir/src/Macierz.cpp.s"
	"C:/Program Files/MinGW/bin/g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/ktome/OneDrive/Pulpit/JiPP/JiPP/Lab3/src/Macierz.cpp -o CMakeFiles/binary.dir/src/Macierz.cpp.s

# Object files for target binary
binary_OBJECTS = \
"CMakeFiles/binary.dir/src/Main_test.cpp.obj" \
"CMakeFiles/binary.dir/src/Macierz.cpp.obj"

# External object files for target binary
binary_EXTERNAL_OBJECTS =

binary.exe: CMakeFiles/binary.dir/src/Main_test.cpp.obj
binary.exe: CMakeFiles/binary.dir/src/Macierz.cpp.obj
binary.exe: CMakeFiles/binary.dir/build.make
binary.exe: CMakeFiles/binary.dir/linklibs.rsp
binary.exe: CMakeFiles/binary.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:/Users/ktome/OneDrive/Pulpit/JiPP/JiPP/Lab3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable binary.exe"
	"C:/Program Files/CMake/bin/cmake.exe" -E rm -f CMakeFiles/binary.dir/objects.a
	"C:/Program Files/MinGW/bin/ar.exe" cr CMakeFiles/binary.dir/objects.a @CMakeFiles/binary.dir/objects1.rsp
	"C:/Program Files/MinGW/bin/g++.exe" -g -Wl,--whole-archive CMakeFiles/binary.dir/objects.a -Wl,--no-whole-archive -o binary.exe -Wl,--out-implib,libbinary.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/binary.dir/linklibs.rsp

# Rule to build all files generated by this target.
CMakeFiles/binary.dir/build: binary.exe

.PHONY : CMakeFiles/binary.dir/build

CMakeFiles/binary.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/binary.dir/cmake_clean.cmake
.PHONY : CMakeFiles/binary.dir/clean

CMakeFiles/binary.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" C:/Users/ktome/OneDrive/Pulpit/JiPP/JiPP/Lab3 C:/Users/ktome/OneDrive/Pulpit/JiPP/JiPP/Lab3 C:/Users/ktome/OneDrive/Pulpit/JiPP/JiPP/Lab3/build C:/Users/ktome/OneDrive/Pulpit/JiPP/JiPP/Lab3/build C:/Users/ktome/OneDrive/Pulpit/JiPP/JiPP/Lab3/build/CMakeFiles/binary.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/binary.dir/depend

