AUTOMAKE_OPTIONS = foreign

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = libuseless.pc

lib_LTLIBRARIES = libuseless.la
libuseless_la_SOURCES = spinner.c
include_HEADERS = spinner.h

maintainer-clean-generic:
	$(RM) -r autom4te.cache
	$(RM) aclocal.m4 config.guess Makefile.in config.sub configure depcomp install-sh ltmain.sh missing
