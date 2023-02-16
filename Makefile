clean:
	rm -f a.out *.c~ *.h~ a.out Makefile~ attente_active_infinie sleep_too_much test
attente_active_infinie: attente_active_infinie.c
	gcc -o $@ $<
sleep_too_much: sleep_too_much.c
	gcc -o $@ $<
test: test.c
	gcc -o $@ $<
