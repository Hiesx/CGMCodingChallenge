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
CMAKE_COMMAND = C:\Users\User\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\User\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\User\Git\CGMCodingChallenge\Challenge

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\User\Git\CGMCodingChallenge\Challenge\cmake-build-debug

# Include any dependencies generated for this target.
include _deps/googletest-build/googlemock/CMakeFiles/gmock.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include _deps/googletest-build/googlemock/CMakeFiles/gmock.dir/compiler_depend.make

# Include the progress variables for this target.
include _deps/googletest-build/googlemock/CMakeFiles/gmock.dir/progress.make

# Include the compile flags for this target's objects.
include _deps/googletest-build/googlemock/CMakeFiles/gmock.dir/flags.make

_deps/googletest-build/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.obj: _deps/googletest-build/googlemock/CMakeFiles/gmock.dir/flags.make
_deps/googletest-build/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.obj: _deps/googletest-build/googlemock/CMakeFiles/gmock.dir/includes_CXX.rsp
_deps/googletest-build/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.obj: _deps/googletest-src/googlemock/src/gmock-all.cc
_deps/googletest-build/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.obj: _deps/googletest-build/googlemock/CMakeFiles/gmock.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\User\Git\CGMCodingChallenge\Challenge\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object _deps/googletest-build/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.obj"
	cd /d C:\Users\User\Git\CGMCodingChallenge\Challenge\cmake-build-debug\_deps\googletest-build\googlemock && C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT _deps/googletest-build/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.obj -MF CMakeFiles\gmock.dir\src\gmock-all.cc.obj.d -o CMakeFiles\gmock.dir\src\gmock-all.cc.obj -c C:\Users\User\Git\CGMCodingChallenge\Challenge\cmake-build-debug\_deps\googletest-src\googlemock\src\gmock-all.cc

_deps/googletest-build/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/gmock.dir/src/gmock-all.cc.i"
	cd /d C:\Users\User\Git\CGMCodingChallenge\Challenge\cmake-build-debug\_deps\googletest-build\googlemock && C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\User\Git\CGMCodingChallenge\Challenge\cmake-build-debug\_deps\googletest-src\googlemock\src\gmock-all.cc > CMakeFiles\gmock.dir\src\gmock-all.cc.i

_deps/googletest-build/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/gmock.dir/src/gmock-all.cc.s"
	cd /d C:\Users\User\Git\CGMCodingChallenge\Challenge\cmake-build-debug\_deps\googletest-build\googlemock && C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\User\Git\CGMCodingChallenge\Challenge\cmake-build-debug\_deps\googletest-src\googlemock\src\gmock-all.cc -o CMakeFiles\gmock.dir\src\gmock-all.cc.s

# Object files for target gmock
gmock_OBJECTS = \
"CMakeFiles/gmock.dir/src/gmock-all.cc.obj"

# External object files for target gmock
gmock_EXTERNAL_OBJECTS =

lib/libgmock.a: _deps/googletest-build/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.obj
lib/libgmock.a: _deps/googletest-build/googlemock/CMakeFiles/gmock.dir/build.make
lib/libgmock.a: _deps/googletest-build/googlemock/CMakeFiles/gmock.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\User\Git\CGMCodingChallenge\Challenge\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ..\..\..\lib\libgmock.a"
	cd /d C:\Users\User\Git\CGMCodingChallenge\Challenge\cmake-build-debug\_deps\googletest-build\googlemock && $(CMAKE_COMMAND) -P CMakeFiles\gmock.dir\cmake_clean_target.cmake
	cd /d C:\Users\User\Git\CGMCodingChallenge\Challenge\cmake-build-debug\_deps\googletest-build\googlemock && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\gmock.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
_deps/googletest-build/googlemock/CMakeFiles/gmock.dir/build: lib/libgmock.a
.PHONY : _deps/googletest-build/googlemock/CMakeFiles/gmock.dir/build

_deps/googletest-build/googlemock/CMakeFiles/gmock.dir/clean:
	cd /d C:\Users\User\Git\CGMCodingChallenge\Challenge\cmake-build-debug\_deps\googletest-build\googlemock && $(CMAKE_COMMAND) -P CMakeFiles\gmock.dir\cmake_clean.cmake
.PHONY : _deps/googletest-build/googlemock/CMakeFiles/gmock.dir/clean

_deps/googletest-build/googlemock/CMakeFiles/gmock.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\User\Git\CGMCodingChallenge\Challenge C:\Users\User\Git\CGMCodingChallenge\Challenge\cmake-build-debug\_deps\googletest-src\googlemock C:\Users\User\Git\CGMCodingChallenge\Challenge\cmake-build-debug C:\Users\User\Git\CGMCodingChallenge\Challenge\cmake-build-debug\_deps\googletest-build\googlemock C:\Users\User\Git\CGMCodingChallenge\Challenge\cmake-build-debug\_deps\googletest-build\googlemock\CMakeFiles\gmock.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : _deps/googletest-build/googlemock/CMakeFiles/gmock.dir/depend

