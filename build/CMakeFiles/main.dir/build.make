# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Lectures\23F-Compilation-principle\LexicalSyntacticAnalyzer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Lectures\23F-Compilation-principle\LexicalSyntacticAnalyzer\build

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/main.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/main.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/main.cpp.obj: E:/Lectures/23F-Compilation-principle/LexicalSyntacticAnalyzer/main.cpp
CMakeFiles/main.dir/main.cpp.obj: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\Lectures\23F-Compilation-principle\LexicalSyntacticAnalyzer\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/main.cpp.obj -MF CMakeFiles\main.dir\main.cpp.obj.d -o CMakeFiles\main.dir\main.cpp.obj -c E:\Lectures\23F-Compilation-principle\LexicalSyntacticAnalyzer\main.cpp

CMakeFiles/main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Lectures\23F-Compilation-principle\LexicalSyntacticAnalyzer\main.cpp > CMakeFiles\main.dir\main.cpp.i

CMakeFiles/main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Lectures\23F-Compilation-principle\LexicalSyntacticAnalyzer\main.cpp -o CMakeFiles\main.dir\main.cpp.s

CMakeFiles/main.dir/lexer.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/lexer.cpp.obj: E:/Lectures/23F-Compilation-principle/LexicalSyntacticAnalyzer/lexer.cpp
CMakeFiles/main.dir/lexer.cpp.obj: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\Lectures\23F-Compilation-principle\LexicalSyntacticAnalyzer\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.dir/lexer.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/lexer.cpp.obj -MF CMakeFiles\main.dir\lexer.cpp.obj.d -o CMakeFiles\main.dir\lexer.cpp.obj -c E:\Lectures\23F-Compilation-principle\LexicalSyntacticAnalyzer\lexer.cpp

CMakeFiles/main.dir/lexer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/lexer.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Lectures\23F-Compilation-principle\LexicalSyntacticAnalyzer\lexer.cpp > CMakeFiles\main.dir\lexer.cpp.i

CMakeFiles/main.dir/lexer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/lexer.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Lectures\23F-Compilation-principle\LexicalSyntacticAnalyzer\lexer.cpp -o CMakeFiles\main.dir\lexer.cpp.s

CMakeFiles/main.dir/utilities.cpp.obj: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/utilities.cpp.obj: E:/Lectures/23F-Compilation-principle/LexicalSyntacticAnalyzer/utilities.cpp
CMakeFiles/main.dir/utilities.cpp.obj: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\Lectures\23F-Compilation-principle\LexicalSyntacticAnalyzer\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main.dir/utilities.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/utilities.cpp.obj -MF CMakeFiles\main.dir\utilities.cpp.obj.d -o CMakeFiles\main.dir\utilities.cpp.obj -c E:\Lectures\23F-Compilation-principle\LexicalSyntacticAnalyzer\utilities.cpp

CMakeFiles/main.dir/utilities.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/utilities.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Lectures\23F-Compilation-principle\LexicalSyntacticAnalyzer\utilities.cpp > CMakeFiles\main.dir\utilities.cpp.i

CMakeFiles/main.dir/utilities.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/utilities.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Lectures\23F-Compilation-principle\LexicalSyntacticAnalyzer\utilities.cpp -o CMakeFiles\main.dir\utilities.cpp.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/main.cpp.obj" \
"CMakeFiles/main.dir/lexer.cpp.obj" \
"CMakeFiles/main.dir/utilities.cpp.obj"

# External object files for target main
main_EXTERNAL_OBJECTS =

main.exe: CMakeFiles/main.dir/main.cpp.obj
main.exe: CMakeFiles/main.dir/lexer.cpp.obj
main.exe: CMakeFiles/main.dir/utilities.cpp.obj
main.exe: CMakeFiles/main.dir/build.make
main.exe: CMakeFiles/main.dir/linkLibs.rsp
main.exe: CMakeFiles/main.dir/objects1.rsp
main.exe: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=E:\Lectures\23F-Compilation-principle\LexicalSyntacticAnalyzer\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable main.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\main.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main.exe
.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\main.dir\cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Lectures\23F-Compilation-principle\LexicalSyntacticAnalyzer E:\Lectures\23F-Compilation-principle\LexicalSyntacticAnalyzer E:\Lectures\23F-Compilation-principle\LexicalSyntacticAnalyzer\build E:\Lectures\23F-Compilation-principle\LexicalSyntacticAnalyzer\build E:\Lectures\23F-Compilation-principle\LexicalSyntacticAnalyzer\build\CMakeFiles\main.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/main.dir/depend

