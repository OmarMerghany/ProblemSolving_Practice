# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Learning\ProblemSolving_Practice

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Learning\ProblemSolving_Practice\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ProblemSolving_Practice.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ProblemSolving_Practice.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ProblemSolving_Practice.dir/flags.make

CMakeFiles/ProblemSolving_Practice.dir/A2oj_Ladders/Codeforces_Div_2A/A_Petya_And_Strings_ProblemSet.cpp.obj: CMakeFiles/ProblemSolving_Practice.dir/flags.make
CMakeFiles/ProblemSolving_Practice.dir/A2oj_Ladders/Codeforces_Div_2A/A_Petya_And_Strings_ProblemSet.cpp.obj: ../A2oj_Ladders/Codeforces_Div_2A/A_Petya_And_Strings_ProblemSet.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Learning\ProblemSolving_Practice\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ProblemSolving_Practice.dir/A2oj_Ladders/Codeforces_Div_2A/A_Petya_And_Strings_ProblemSet.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ProblemSolving_Practice.dir\A2oj_Ladders\Codeforces_Div_2A\A_Petya_And_Strings_ProblemSet.cpp.obj -c E:\Learning\ProblemSolving_Practice\A2oj_Ladders\Codeforces_Div_2A\A_Petya_And_Strings_ProblemSet.cpp

CMakeFiles/ProblemSolving_Practice.dir/A2oj_Ladders/Codeforces_Div_2A/A_Petya_And_Strings_ProblemSet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ProblemSolving_Practice.dir/A2oj_Ladders/Codeforces_Div_2A/A_Petya_And_Strings_ProblemSet.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Learning\ProblemSolving_Practice\A2oj_Ladders\Codeforces_Div_2A\A_Petya_And_Strings_ProblemSet.cpp > CMakeFiles\ProblemSolving_Practice.dir\A2oj_Ladders\Codeforces_Div_2A\A_Petya_And_Strings_ProblemSet.cpp.i

CMakeFiles/ProblemSolving_Practice.dir/A2oj_Ladders/Codeforces_Div_2A/A_Petya_And_Strings_ProblemSet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ProblemSolving_Practice.dir/A2oj_Ladders/Codeforces_Div_2A/A_Petya_And_Strings_ProblemSet.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Learning\ProblemSolving_Practice\A2oj_Ladders\Codeforces_Div_2A\A_Petya_And_Strings_ProblemSet.cpp -o CMakeFiles\ProblemSolving_Practice.dir\A2oj_Ladders\Codeforces_Div_2A\A_Petya_And_Strings_ProblemSet.cpp.s

# Object files for target ProblemSolving_Practice
ProblemSolving_Practice_OBJECTS = \
"CMakeFiles/ProblemSolving_Practice.dir/A2oj_Ladders/Codeforces_Div_2A/A_Petya_And_Strings_ProblemSet.cpp.obj"

# External object files for target ProblemSolving_Practice
ProblemSolving_Practice_EXTERNAL_OBJECTS =

ProblemSolving_Practice.exe: CMakeFiles/ProblemSolving_Practice.dir/A2oj_Ladders/Codeforces_Div_2A/A_Petya_And_Strings_ProblemSet.cpp.obj
ProblemSolving_Practice.exe: CMakeFiles/ProblemSolving_Practice.dir/build.make
ProblemSolving_Practice.exe: CMakeFiles/ProblemSolving_Practice.dir/linklibs.rsp
ProblemSolving_Practice.exe: CMakeFiles/ProblemSolving_Practice.dir/objects1.rsp
ProblemSolving_Practice.exe: CMakeFiles/ProblemSolving_Practice.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Learning\ProblemSolving_Practice\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ProblemSolving_Practice.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ProblemSolving_Practice.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ProblemSolving_Practice.dir/build: ProblemSolving_Practice.exe

.PHONY : CMakeFiles/ProblemSolving_Practice.dir/build

CMakeFiles/ProblemSolving_Practice.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ProblemSolving_Practice.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ProblemSolving_Practice.dir/clean

CMakeFiles/ProblemSolving_Practice.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Learning\ProblemSolving_Practice E:\Learning\ProblemSolving_Practice E:\Learning\ProblemSolving_Practice\cmake-build-debug E:\Learning\ProblemSolving_Practice\cmake-build-debug E:\Learning\ProblemSolving_Practice\cmake-build-debug\CMakeFiles\ProblemSolving_Practice.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ProblemSolving_Practice.dir/depend

