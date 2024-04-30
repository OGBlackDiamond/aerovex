SHELL=/bin/bash

WD=$(shell pwd)



graphics: window.o
	g++ $(WD)/output/obj_files/window.o -o graphics.exe

physics: physicsfunctions.o
	g++ $(WD)/output/obj_files/physicsfunctions.o -o $(WD)/output/bin/physics.exe

physicsfunctions.o: physicsfunctions.cpp
	g++ -c $(WD)/src/physics_engine/physicsfunctions.cpp -o $(WD)/output/obj_files/physicsfunctions.o

physicsfunctions.cpp:
	@echo Making The Engine






test: main.o cadenstestworld.o
	g++ $(WD)/test_suite/obj_files/cadenstestworld.o $(WD)/test_suite/obj_files/main.o -o $(WD)/test_suite/output/test.exe

cadenstestworld.o: cadenstestworld.cpp
	g++ -c $(WD)/test_suite/cadenstestworld.cpp -o $(WD)/test_suite/obj_files/cadenstestworld.o

main.o: main.cpp
	g++ -c $(WD)/test_suite/main.cpp -o $(WD)/test_suite/obj_files/main.o

cadenstestworld.cpp:
	@echo Building Test Suite

main.cpp:
	@echo Starting...