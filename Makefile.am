AUTOMAKE_OPTIONS = foreign
SUBDIRS = src/ doc/

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = libuseless.pc

maintainer-clean-generic:
	$(RM) -r autom4te.cache
	$(RM) aclocal.m4 config.guess Makefile.in config.sub configure depcomp install-sh ltmain.sh missing
