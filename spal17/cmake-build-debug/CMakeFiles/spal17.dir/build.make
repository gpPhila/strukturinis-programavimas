# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = "D:\coding\CLion\CLion 2024.2.1\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "D:\coding\CLion\CLion 2024.2.1\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\uni\strukturinis programavimas\strukturinis-programavimas\spal17"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\uni\strukturinis programavimas\strukturinis-programavimas\spal17\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/spal17.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/spal17.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/spal17.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/spal17.dir/flags.make

CMakeFiles/spal17.dir/main.cpp.obj: CMakeFiles/spal17.dir/flags.make
CMakeFiles/spal17.dir/main.cpp.obj: D:/uni/strukturinis\ programavimas/strukturinis-programavimas/spal17/main.cpp
CMakeFiles/spal17.dir/main.cpp.obj: CMakeFiles/spal17.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:\uni\strukturinis programavimas\strukturinis-programavimas\spal17\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/spal17.dir/main.cpp.obj"
	"D:\coding\CLion\CLion 2024.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/spal17.dir/main.cpp.obj -MF CMakeFiles\spal17.dir\main.cpp.obj.d -o CMakeFiles\spal17.dir\main.cpp.obj -c "D:\uni\strukturinis programavimas\strukturinis-programavimas\spal17\main.cpp"

CMakeFiles/spal17.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/spal17.dir/main.cpp.i"
	"D:\coding\CLion\CLion 2024.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\uni\strukturinis programavimas\strukturinis-programavimas\spal17\main.cpp" > CMakeFiles\spal17.dir\main.cpp.i

CMakeFiles/spal17.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/spal17.dir/main.cpp.s"
	"D:\coding\CLion\CLion 2024.2.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\uni\strukturinis programavimas\strukturinis-programavimas\spal17\main.cpp" -o CMakeFiles\spal17.dir\main.cpp.s

# Object files for target spal17
spal17_OBJECTS = \
"CMakeFiles/spal17.dir/main.cpp.obj"

# External object files for target spal17
spal17_EXTERNAL_OBJECTS =

spal17.exe: CMakeFiles/spal17.dir/main.cpp.obj
spal17.exe: CMakeFiles/spal17.dir/build.make
spal17.exe: CMakeFiles/spal17.dir/linkLibs.rsp
spal17.exe: CMakeFiles/spal17.dir/objects1.rsp
spal17.exe: CMakeFiles/spal17.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="D:\uni\strukturinis programavimas\strukturinis-programavimas\spal17\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable spal17.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\spal17.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/spal17.dir/build: spal17.exe
.PHONY : CMakeFiles/spal17.dir/build

CMakeFiles/spal17.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\spal17.dir\cmake_clean.cmake
.PHONY : CMakeFiles/spal17.dir/clean

CMakeFiles/spal17.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\uni\strukturinis programavimas\strukturinis-programavimas\spal17" "D:\uni\strukturinis programavimas\strukturinis-programavimas\spal17" "D:\uni\strukturinis programavimas\strukturinis-programavimas\spal17\cmake-build-debug" "D:\uni\strukturinis programavimas\strukturinis-programavimas\spal17\cmake-build-debug" "D:\uni\strukturinis programavimas\strukturinis-programavimas\spal17\cmake-build-debug\CMakeFiles\spal17.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/spal17.dir/depend

