TARGET = main.cpp
OUTFILE = main.out
COMPILER = g++

.PHONY: run
run:
	${COMPILER} ${TARGET} -o ${OUTFILE} && ./${OUTFILE}