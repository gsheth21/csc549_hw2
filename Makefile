all: sim exe

sim:
	lv6 -cc switch.lus -n switch

exe:
	lv6 -cc switch.lus -n switch
	./switch.exec

clean:
	rm -f *.ec *.oc *.c *.h *.sh *.exec