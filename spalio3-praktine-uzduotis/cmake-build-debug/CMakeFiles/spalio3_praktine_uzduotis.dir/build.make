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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2024.2.0.1\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2024.2.0.1\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\s056857\Desktop\strukturinis-programavimas\spalio3-praktine-uzduotis

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\s056857\Desktop\strukturinis-programavimas\spalio3-praktine-uzduotis\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/spalio3_praktine_uzduotis.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/spalio3_praktine_uzduotis.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/spalio3_praktine_uzduotis.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/spalio3_praktine_uzduotis.dir/flags.make

CMakeFiles/spalio3_praktine_uzduotis.dir/main.cpp.obj: CMakeFiles/spalio3_praktine_uzduotis.dir/flags.make
CMakeFiles/spalio3_praktine_uzduotis.dir/main.cpp.obj: C:/Users/s056857/Desktop/strukturinis-programavimas/spalio3-praktine-uzduotis/main.cpp
CMakeFiles/spalio3_praktine_uzduotis.dir/main.cpp.obj: CMakeFiles/spalio3_praktine_uzduotis.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\s056857\Desktop\strukturinis-programavimas\spalio3-praktine-uzduotis\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/spalio3_praktine_uzduotis.dir/main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/spalio3_praktine_uzduotis.dir/main.cpp.obj -MF CMakeFiles\spalio3_praktine_uzduotis.dir\main.cpp.obj.d -o CMakeFiles\spalio3_praktine_uzduotis.dir\main.cpp.obj -c C:\Users\s056857\Desktop\strukturinis-programavimas\spalio3-praktine-uzduotis\main.cpp

CMakeFiles/spalio3_praktine_uzduotis.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/spalio3_praktine_uzduotis.dir/main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\s056857\Desktop\strukturinis-programavimas\spalio3-praktine-uzduotis\main.cpp > CMakeFiles\spalio3_praktine_uzduotis.dir\main.cpp.i

CMakeFiles/spalio3_praktine_uzduotis.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/spalio3_praktine_uzduotis.dir/main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\s056857\Desktop\strukturinis-programavimas\spalio3-praktine-uzduotis\main.cpp -o CMakeFiles\spalio3_praktine_uzduotis.dir\main.cpp.s

# Object files for target spalio3_praktine_uzduotis
spalio3_praktine_uzduotis_OBJECTS = \
"CMakeFiles/spalio3_praktine_uzduotis.dir/main.cpp.obj"

# External object files for target spalio3_praktine_uzduotis
spalio3_praktine_uzduotis_EXTERNAL_OBJECTS =

spalio3_praktine_uzduotis.exe: CMakeFiles/spalio3_praktine_uzduotis.dir/main.cpp.obj
spalio3_praktine_uzduotis.exe: CMakeFiles/spalio3_praktine_uzduotis.dir/build.make
spalio3_praktine_uzduotis.exe: CMakeFiles/spalio3_praktine_uzduotis.dir/linkLibs.rsp
spalio3_praktine_uzduotis.exe: CMakeFiles/spalio3_praktine_uzduotis.dir/objects1.rsp
spalio3_praktine_uzduotis.exe: CMakeFiles/spalio3_praktine_uzduotis.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\s056857\Desktop\strukturinis-programavimas\spalio3-praktine-uzduotis\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable spalio3_praktine_uzduotis.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\spalio3_praktine_uzduotis.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/spalio3_praktine_uzduotis.dir/build: spalio3_praktine_uzduotis.exe
.PHONY : CMakeFiles/spalio3_praktine_uzduotis.dir/build

CMakeFiles/spalio3_praktine_uzduotis.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\spalio3_praktine_uzduotis.dir\cmake_clean.cmake
.PHONY : CMakeFiles/spalio3_praktine_uzduotis.dir/clean

CMakeFiles/spalio3_praktine_uzduotis.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\s056857\Desktop\strukturinis-programavimas\spalio3-praktine-uzduotis C:\Users\s056857\Desktop\strukturinis-programavimas\spalio3-praktine-uzduotis C:\Users\s056857\Desktop\strukturinis-programavimas\spalio3-praktine-uzduotis\cmake-build-debug C:\Users\s056857\Desktop\strukturinis-programavimas\spalio3-praktine-uzduotis\cmake-build-debug C:\Users\s056857\Desktop\strukturinis-programavimas\spalio3-praktine-uzduotis\cmake-build-debug\CMakeFiles\spalio3_praktine_uzduotis.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/spalio3_praktine_uzduotis.dir/depend

