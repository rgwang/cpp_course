# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\JetBrains\apps\CLion\ch-0\203.7148.70\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = D:\JetBrains\apps\CLion\ch-0\203.7148.70\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\python\cpp_course\t2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\python\cpp_course\t2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\t2.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\t2.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\t2.dir\flags.make

CMakeFiles\t2.dir\main.cpp.obj: CMakeFiles\t2.dir\flags.make
CMakeFiles\t2.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\python\cpp_course\t2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/t2.dir/main.cpp.obj"
	E:\vs2015\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\t2.dir\main.cpp.obj /FdCMakeFiles\t2.dir\ /FS -c D:\python\cpp_course\t2\main.cpp
<<

CMakeFiles\t2.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/t2.dir/main.cpp.i"
	E:\vs2015\VC\bin\cl.exe > CMakeFiles\t2.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\python\cpp_course\t2\main.cpp
<<

CMakeFiles\t2.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/t2.dir/main.cpp.s"
	E:\vs2015\VC\bin\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\t2.dir\main.cpp.s /c D:\python\cpp_course\t2\main.cpp
<<

# Object files for target t2
t2_OBJECTS = \
"CMakeFiles\t2.dir\main.cpp.obj"

# External object files for target t2
t2_EXTERNAL_OBJECTS =

t2.exe: CMakeFiles\t2.dir\main.cpp.obj
t2.exe: CMakeFiles\t2.dir\build.make
t2.exe: CMakeFiles\t2.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\python\cpp_course\t2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable t2.exe"
	D:\JetBrains\apps\CLion\ch-0\203.7148.70\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\t2.dir --rc=C:\PROGRA~2\WI3CF2~1\8.1\bin\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\8.1\bin\x86\mt.exe --manifests  -- E:\vs2015\VC\bin\link.exe /nologo @CMakeFiles\t2.dir\objects1.rsp @<<
 /out:t2.exe /implib:t2.lib /pdb:D:\python\cpp_course\t2\cmake-build-debug\t2.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\t2.dir\build: t2.exe

.PHONY : CMakeFiles\t2.dir\build

CMakeFiles\t2.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\t2.dir\cmake_clean.cmake
.PHONY : CMakeFiles\t2.dir\clean

CMakeFiles\t2.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\python\cpp_course\t2 D:\python\cpp_course\t2 D:\python\cpp_course\t2\cmake-build-debug D:\python\cpp_course\t2\cmake-build-debug D:\python\cpp_course\t2\cmake-build-debug\CMakeFiles\t2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\t2.dir\depend

