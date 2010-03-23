SUFFIXES = .pod .3 .7

MAN3PAGES = spinner.3 fspinner.3 prime.3 fnprime.3 nprime.3 fprime.3
MAN7PAGES = noreturn.7

DESCRIPTION = The Useless Programming Library Programmer\'s Manual

CLEANFILES = $(MAN3PAGES) $(MAN7PAGES)

man3_MANS = $(MAN3PAGES)
man7_MANS = $(MAN7PAGES)

.pod.3:
	$(POD2MAN) --center "$(DESCRIPTION)" --section 3 $< > $@

.pod.7:
	$(POD2MAN) --center "$(DESCRIPTION)" --section 7 $< > $@
