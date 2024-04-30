SHELL=/bin/bash

PATH=$(shell pwd)



engine: physicsfunctions.o
	g++ $(PATH)/output/obj_files/physicsfunctions.o -o $(PATH)/output/bin/engine.exe

physicsfunctions.o: physicsfunctions.cpp
	g++ -c $(PATH)/src/physics_engine/physicsfunctions.cpp -o $(PATH)/output/obj_files/physicsfunctions.o

physicsfunctions.cpp:
	@echo Making The Engine

test: cadenstestworld.o
	g++ $(PATH)/test_suite/obj_files/cadenstestworld.o -o $(PATH)/test_suite/output/test.exe

cadenstestworld.o: cadenstestworld.cpp
	g++ -c $(PATH)/test_suite/cadenstestworld.cpp -o $(PATH)/test_suite/obj_files/cadenstestworld.o

cadenstestworld.cpp:
	@echo Building Test Suite