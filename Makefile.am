AUTOMAKE_OPTIONS = foreign
SUFFIXES = .pod .3 .7

MAN3PAGES = spinner.3 fspinner.3 prime.3 fnprime.3 nprime.3 fprime.3
MAN7PAGES = noreturn.7

CLEANFILES = $(MAN3PAGES) $(MAN7PAGES)

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = libuseless.pc

lib_LTLIBRARIES = libuseless.la
libuseless_la_SOURCES = spinner.c noreturn.c
include_HEADERS = spinner.h noreturn.h
man3_MANS = $(MAN3PAGES)
man7_MANS = $(MAN7PAGES)

maintainer-clean-generic:
	$(RM) -r autom4te.cache
	$(RM) aclocal.m4 config.guess Makefile.in config.sub configure depcomp install-sh ltmain.sh missing

.pod.3:
	$(POD2MAN) --center "The Useless Programming Library Programmer's Manual" --section 3 $< > $@

.pod.7:
	$(POD2MAN) --center "The Useless Programming Library Programmer's Manual" --section 7 $< > $@
