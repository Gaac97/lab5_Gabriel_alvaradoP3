main:    main.cpp bodega.o menu.o platos.o experiencia.o ingredientes.o 
	g++ main.cpp bodega.o menu.o platos.o experiencia.o -o main
main.o:	main.cpp bodega.h menu.h platos.h experiencia.h ingredientes.h
	g++ -c main.cpp
bodega:	bodega.cpp bodega.h
	g++ -c bodega.cpp
menu:	menu.cpp menu.h
	g++ -c menu.cpp
ingredientes:	ingredientes.cpp ingredientes.h
		g++ -c ingredientes.cpp
platos:	platos.cpp platos.h
	g++ -c platos.cpp
experiencia:	experiencia.cpp experiencia.h
	g++ -c experiencia.cpp
clean:
	rm  *.o main 
