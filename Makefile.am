AUTOMAKE_OPTIONS = foreign
SUFFIXES = .pod .3

MANPAGES = spinner.3

CLEANFILES = $(MANPAGES)

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = libuseless.pc

lib_LTLIBRARIES = libuseless.la
libuseless_la_SOURCES = spinner.c
include_HEADERS = spinner.h
man3_MANS = $(MANPAGES)

maintainer-clean-generic:
	$(RM) -r autom4te.cache
	$(RM) aclocal.m4 config.guess Makefile.in config.sub configure depcomp install-sh ltmain.sh missing

.pod.3:
	$(POD2MAN) --center "The Useless Programming Library Programmer's Manual" --section 3 $< > $@
