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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\pawel\jipp2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\pawel\jipp2\cmake-build-debug

# Include any dependencies generated for this target.
include firstLib/CMakeFiles/firstLib.dir/depend.make

# Include the progress variables for this target.
include firstLib/CMakeFiles/firstLib.dir/progress.make

# Include the compile flags for this target's objects.
include firstLib/CMakeFiles/firstLib.dir/flags.make

firstLib/CMakeFiles/firstLib.dir/src/lib.cpp.obj: firstLib/CMakeFiles/firstLib.dir/flags.make
firstLib/CMakeFiles/firstLib.dir/src/lib.cpp.obj: firstLib/CMakeFiles/firstLib.dir/includes_CXX.rsp
firstLib/CMakeFiles/firstLib.dir/src/lib.cpp.obj: ../firstLib/src/lib.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\pawel\jipp2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object firstLib/CMakeFiles/firstLib.dir/src/lib.cpp.obj"
	cd /d C:\Users\pawel\jipp2\cmake-build-debug\firstLib && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\firstLib.dir\src\lib.cpp.obj -c C:\Users\pawel\jipp2\firstLib\src\lib.cpp

firstLib/CMakeFiles/firstLib.dir/src/lib.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/firstLib.dir/src/lib.cpp.i"
	cd /d C:\Users\pawel\jipp2\cmake-build-debug\firstLib && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\pawel\jipp2\firstLib\src\lib.cpp > CMakeFiles\firstLib.dir\src\lib.cpp.i

firstLib/CMakeFiles/firstLib.dir/src/lib.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/firstLib.dir/src/lib.cpp.s"
	cd /d C:\Users\pawel\jipp2\cmake-build-debug\firstLib && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\pawel\jipp2\firstLib\src\lib.cpp -o CMakeFiles\firstLib.dir\src\lib.cpp.s

# Object files for target firstLib
firstLib_OBJECTS = \
"CMakeFiles/firstLib.dir/src/lib.cpp.obj"

# External object files for target firstLib
firstLib_EXTERNAL_OBJECTS =

firstLib/libfirstLib.a: firstLib/CMakeFiles/firstLib.dir/src/lib.cpp.obj
firstLib/libfirstLib.a: firstLib/CMakeFiles/firstLib.dir/build.make
firstLib/libfirstLib.a: firstLib/CMakeFiles/firstLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\pawel\jipp2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libfirstLib.a"
	cd /d C:\Users\pawel\jipp2\cmake-build-debug\firstLib && $(CMAKE_COMMAND) -P CMakeFiles\firstLib.dir\cmake_clean_target.cmake
	cd /d C:\Users\pawel\jipp2\cmake-build-debug\firstLib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\firstLib.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
firstLib/CMakeFiles/firstLib.dir/build: firstLib/libfirstLib.a

.PHONY : firstLib/CMakeFiles/firstLib.dir/build

firstLib/CMakeFiles/firstLib.dir/clean:
	cd /d C:\Users\pawel\jipp2\cmake-build-debug\firstLib && $(CMAKE_COMMAND) -P CMakeFiles\firstLib.dir\cmake_clean.cmake
.PHONY : firstLib/CMakeFiles/firstLib.dir/clean

firstLib/CMakeFiles/firstLib.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\pawel\jipp2 C:\Users\pawel\jipp2\firstLib C:\Users\pawel\jipp2\cmake-build-debug C:\Users\pawel\jipp2\cmake-build-debug\firstLib C:\Users\pawel\jipp2\cmake-build-debug\firstLib\CMakeFiles\firstLib.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : firstLib/CMakeFiles/firstLib.dir/depend

