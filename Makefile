CPPFLAGS = -D_DEFAULT_SOURCE -D_BSD_SOURCE -D_POSIX_C_SOURCE=200809L -DVERSION=\"6.2\" -DXINERAMA
CFLAGS   = -std=c99 -pedantic -Wall -Wno-deprecated-declarations -Os -I/usr/X11R6/include -I/usr/include/freetype2 ${CPPFLAGS}
LDFLAGS  = -L/usr/X11R6/lib -lX11 -lXinerama -lfontconfig -lXft

all: dwm

dwm: 
	@echo "compiling ..."
	@cc -c ${CFLAGS} dwm.c
	@cc -o dwm dwm.o ${LDFLAGS}

clean:
	@echo "cleaning ..."
	@rm -f dwm dwm.o

install: all
	@echo "installing ..."
	@cp -f dwm /usr/local/bin

uninstall:
	@echo "uninstalling ..."
	@rm -f /usr/local/bin/dwm

.PHONY: all options clean dist install uninstall
