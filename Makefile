include config.mk

install:
	@echo "[LOG]: build form ./src to ./obj"
	@cc -c $(CFLAGS) ./src/util.c -o ./obj/util.o
	@cc -c $(CFLAGS) ./src/drw.c -o ./obj/drw.o
	
	@cc -c $(CFLAGS) ./src/dwm.c -o ./obj/dwm.o
	
	@cc -c $(CFLAGS) ./src/dmenu.c -o ./obj/dmenu.o
	@cc -c $(CFLAGS) ./src/stest.c -o ./obj/stest.o
		
	@cc -c $(STCFLAGS) ./src/st.c -o ./obj/st.o
	@cc -c $(STCFLAGS) ./src/x.c -o ./obj/x.o
	
	@echo "[LOG]: compile form ./obj to ./bin"
	@cc -o ./bin/dwm ./obj/drw.o ./obj/dwm.o ./obj/util.o ${LDFLAGS}
	
	@cc -o ./bin/dmenu ./obj/dmenu.o ./obj/drw.o ./obj/util.o $(LDFLAGS)
	@cc -o ./bin/stest ./obj/stest.o $(LDFLAGS)
	
	@cc -o ./bin/st ./obj/st.o ./obj/x.o $(STLDFLAGS)
	
	@echo "[LOG]: copy from ./bin to /usr/bin"
	@cp -f ./bin/* $(IBIN)/

clean:
	@echo "[LOG]: clean in ./bin"
	@rm -f ./bin/dmenu ./bin/stest ./bin/dwm ./bin/st ./obj/*

uninstall: clean
	@echo "[LOG]: uninstall novios files from /usr/bin"
	@rm -f $(IBIN)/dmenu $(IBIN)/dmenu_path $(IBIN)/dmenu_run $(IBIN)/stest $(IBIN)/dwm $(IBIN)/st

.PHONY: install clean uninstall
