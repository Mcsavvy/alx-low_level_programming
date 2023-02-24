# 0x1C. C - Makefiles

In this project we learn the value of using makefiles for automatically create files for us using predefined rules.

## What is a Makefile?

Make is Unix utility that is designed to start execution of a makefile. A makefile is a special file, containing shell commands, that you create and name makefile (or Makefile depending upon the system). While in the directory containing this makefile, you will type *make* and the commands in the makefile will be executed. If you create more than one makefile, be certain you are in the correct directory before typing make.

Make keeps track of the last time files (normally object files) were updated and only updates those files which are required (ones containing changes) to keep the sourcefile up-to-date. If you have a large program with many source and/or header files, when you change a file on which others depend, you must recompile all the dependent files. Without a makefile, this is an extremely time-consuming task.

As a makefile is a list of shell commands, it must be written for the shell which will process the makefile. A makefile that works well in one shell may not execute properly in another shell.

The makefile contains a list of *rules*. These rules tell the system what commands you want to be executed. Most times, these rules are commands to compile(or recompile) a series of files. The rules, which must begin in column 1, are in two parts. The first line is called a *dependency* line and the subsequent line(s) are called *actions* or *commands*. The action line(s) must be indented with a tab.

RULE:

```
DEPENDENCY LINE
    [tab]ACTION LINE(S)
```

The dependency line is made of two parts. The first part (before the colon) are *target* files and the second part (after the colon) are called *source* files. It is called a dependency line because the first part depends on the second part. Multiple target files must be separated by a space. Multiple source files must also be separated by a space.

DEPENDENCY LINE:

```
TARGET FILE(S) : SOURCE FILE(S)
```

After the makefile has been created, a program can be (re)compiled by typing *make* in the correct directory. *Make* then reads the makefile and creates a dependency tree and takes whatever action is necessary. It will not necessarily do all the rules in the makefile as all dependencies may not need updated. It will rebuild target files if they are missing or older than the dependency files.

Unless directed otherwise, make will stop when it encounters an error during the construction process.
