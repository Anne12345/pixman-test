AUTOMAKE_OPTIONS=foreign

MAINTAINERCLEANFILES =
bin_PROGRAMS = test
ACLOCAL_AMFLAGS = -I m4

SUBDIRS = .

test_SOURCES = \
    main.c    \
    rect.c    \
    rect.h    \
    $(NULL)

test_LDFLAGS = \
	$(NULL)
test_CFLAGS = \
    $(PIXMAN_CFLAGS)	\
	$(NULL)
test_LDADD = \
	$(PIXMAN_LIBS)    \
	$(NULL)