#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([FULL-PACKAGE-NAME], [VERSION], [BUG-REPORT-ADDRESS])
AC_CONFIG_SRCDIR([rect.c])
AC_CONFIG_HEADERS([config.h])

AM_INIT_AUTOMAKE
LT_INIT
AC_PROG_LIBTOOL 

# Checks for programs.
AC_PROG_CC

AC_CONFIG_MACRO_DIRS([m4])
# Checks for libraries.
PKG_CHECK_MODULES(PIXMAN, pixman-1 >= 0.17.7)
# Checks for header files.
AC_CHECK_HEADERS([stdlib.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.


AC_OUTPUT(Makefile)
