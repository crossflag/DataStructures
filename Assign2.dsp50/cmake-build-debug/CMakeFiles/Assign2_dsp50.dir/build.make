# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\spela\Desktop\DATASTRUCTS\Assign2.dsp50

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\spela\Desktop\DATASTRUCTS\Assign2.dsp50\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Assign2_dsp50.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Assign2_dsp50.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Assign2_dsp50.dir/flags.make

CMakeFiles/Assign2_dsp50.dir/hanoi.cpp.obj: CMakeFiles/Assign2_dsp50.dir/flags.make
CMakeFiles/Assign2_dsp50.dir/hanoi.cpp.obj: ../hanoi.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\spela\Desktop\DATASTRUCTS\Assign2.dsp50\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Assign2_dsp50.dir/hanoi.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Assign2_dsp50.dir\hanoi.cpp.obj -c C:\Users\spela\Desktop\DATASTRUCTS\Assign2.dsp50\hanoi.cpp

CMakeFiles/Assign2_dsp50.dir/hanoi.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assign2_dsp50.dir/hanoi.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\spela\Desktop\DATASTRUCTS\Assign2.dsp50\hanoi.cpp > CMakeFiles\Assign2_dsp50.dir\hanoi.cpp.i

CMakeFiles/Assign2_dsp50.dir/hanoi.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assign2_dsp50.dir/hanoi.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\spela\Desktop\DATASTRUCTS\Assign2.dsp50\hanoi.cpp -o CMakeFiles\Assign2_dsp50.dir\hanoi.cpp.s

# Object files for target Assign2_dsp50
Assign2_dsp50_OBJECTS = \
"CMakeFiles/Assign2_dsp50.dir/hanoi.cpp.obj"

# External object files for target Assign2_dsp50
Assign2_dsp50_EXTERNAL_OBJECTS =

Assign2_dsp50.exe: CMakeFiles/Assign2_dsp50.dir/hanoi.cpp.obj
Assign2_dsp50.exe: CMakeFiles/Assign2_dsp50.dir/build.make
Assign2_dsp50.exe: CMakeFiles/Assign2_dsp50.dir/linklibs.rsp
Assign2_dsp50.exe: CMakeFiles/Assign2_dsp50.dir/objects1.rsp
Assign2_dsp50.exe: CMakeFiles/Assign2_dsp50.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\spela\Desktop\DATASTRUCTS\Assign2.dsp50\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Assign2_dsp50.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Assign2_dsp50.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Assign2_dsp50.dir/build: Assign2_dsp50.exe

.PHONY : CMakeFiles/Assign2_dsp50.dir/build

CMakeFiles/Assign2_dsp50.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Assign2_dsp50.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Assign2_dsp50.dir/clean

CMakeFiles/Assign2_dsp50.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\spela\Desktop\DATASTRUCTS\Assign2.dsp50 C:\Users\spela\Desktop\DATASTRUCTS\Assign2.dsp50 C:\Users\spela\Desktop\DATASTRUCTS\Assign2.dsp50\cmake-build-debug C:\Users\spela\Desktop\DATASTRUCTS\Assign2.dsp50\cmake-build-debug C:\Users\spela\Desktop\DATASTRUCTS\Assign2.dsp50\cmake-build-debug\CMakeFiles\Assign2_dsp50.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Assign2_dsp50.dir/depend

