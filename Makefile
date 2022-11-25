include config.mk

${OBJDIR}:
	mkdir ${OBJDIR}

${BINDIR}:
	mkdir ${BINDIR}

${OBJDIR}/%.o: ${SRCDIR}/%.c | ${OBJDIR}
	${CC} ${CFLAGS} -c $< -o $@

.PHONY: main clean

main: ${OBJDIR}/main.o | ${BINDIR}
	${CC} ${LDFLAGS} -o ${BINDIR}/$@ $<
	
clean: | ${OBJDIR} ${BINDIR}
	rm -rf ${OBJDIR} ${BINDIR}