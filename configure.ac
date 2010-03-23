AC_PREREQ(2.59)
AC_INIT(libuseless, 0.0.1, [russ@eatnumber1.com])
AC_CONFIG_FILES(libuseless.pc)

CFLAGS+="-Wall"

AM_INIT_AUTOMAKE

AC_LANG(C)
AC_PROG_CC
AC_PROG_CC_STDC
AC_PROG_LIBTOOL

AC_CHECK_HEADER(stdbool.h, [],
  AC_MSG_ERROR([stdbool.h not found]))

AC_CHECK_PROG(POD2MAN, pod2man, pod2man)
if test x"$POD2MAN" = x""; then
	AC_MSG_ERROR([pod2man not found])
fi
AC_SUBST(POD2MAN)

AC_CONFIG_FILES(Makefile)
AC_OUTPUT
