source = area-calc/area-calc.c dens-calc/dens-calc.c speed-calc/speed-calc.c vol-calc/vol-calc.c
binary = area-calc/a-calc dens-calc/d-calc speed-calc/s-calc vol-calc/v-calc
installed-binary = /bin/a-calc /bin/d-calc /bin/s-calc /bin/v-calc

all : $(src)
	make a-calc
	make d-calc
	make s-calc
	make v-calc

install : $(binary)
	cp area-calc/a-calc /bin/
	cp dens-calc/d-calc /bin/
	cp speed-calc/s-calc /bin/
	cp vol-calc/v-calc /bin/

uninstall : $(installed-binary)
	rm $(installed-binary)

clean : $(binary)
	rm $(binary)

a-calc : area-calc/area-calc.c
	gcc area-calc/area-calc.c -o area-calc/a-calc

d-calc : dens-calc/dens-calc.c
	gcc dens-calc/dens-calc.c -o dens-calc/d-calc

s-calc : speed-calc/speed-calc.c
	gcc speed-calc/speed-calc.c -o speed-calc/s-calc

v-calc : vol-calc/vol-calc.c
	gcc vol-calc/vol-calc.c -o vol-calc/v-calc
