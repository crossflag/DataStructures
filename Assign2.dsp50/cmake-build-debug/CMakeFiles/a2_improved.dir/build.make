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
include CMakeFiles/a2_improved.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/a2_improved.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/a2_improved.dir/flags.make

CMakeFiles/a2_improved.dir/improvedPow.cpp.obj: CMakeFiles/a2_improved.dir/flags.make
CMakeFiles/a2_improved.dir/improvedPow.cpp.obj: ../improvedPow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\spela\Desktop\DATASTRUCTS\Assign2.dsp50\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/a2_improved.dir/improvedPow.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\a2_improved.dir\improvedPow.cpp.obj -c C:\Users\spela\Desktop\DATASTRUCTS\Assign2.dsp50\improvedPow.cpp

CMakeFiles/a2_improved.dir/improvedPow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a2_improved.dir/improvedPow.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\spela\Desktop\DATASTRUCTS\Assign2.dsp50\improvedPow.cpp > CMakeFiles\a2_improved.dir\improvedPow.cpp.i

CMakeFiles/a2_improved.dir/improvedPow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a2_improved.dir/improvedPow.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\spela\Desktop\DATASTRUCTS\Assign2.dsp50\improvedPow.cpp -o CMakeFiles\a2_improved.dir\improvedPow.cpp.s

# Object files for target a2_improved
a2_improved_OBJECTS = \
"CMakeFiles/a2_improved.dir/improvedPow.cpp.obj"

# External object files for target a2_improved
a2_improved_EXTERNAL_OBJECTS =

a2_improved.exe: CMakeFiles/a2_improved.dir/improvedPow.cpp.obj
a2_improved.exe: CMakeFiles/a2_improved.dir/build.make
a2_improved.exe: CMakeFiles/a2_improved.dir/linklibs.rsp
a2_improved.exe: CMakeFiles/a2_improved.dir/objects1.rsp
a2_improved.exe: CMakeFiles/a2_improved.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\spela\Desktop\DATASTRUCTS\Assign2.dsp50\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable a2_improved.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\a2_improved.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/a2_improved.dir/build: a2_improved.exe

.PHONY : CMakeFiles/a2_improved.dir/build

CMakeFiles/a2_improved.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\a2_improved.dir\cmake_clean.cmake
.PHONY : CMakeFiles/a2_improved.dir/clean

CMakeFiles/a2_improved.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\spela\Desktop\DATASTRUCTS\Assign2.dsp50 C:\Users\spela\Desktop\DATASTRUCTS\Assign2.dsp50 C:\Users\spela\Desktop\DATASTRUCTS\Assign2.dsp50\cmake-build-debug C:\Users\spela\Desktop\DATASTRUCTS\Assign2.dsp50\cmake-build-debug C:\Users\spela\Desktop\DATASTRUCTS\Assign2.dsp50\cmake-build-debug\CMakeFiles\a2_improved.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/a2_improved.dir/depend

