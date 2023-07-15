include config.mk

${OBJDIR}:
	mkdir ${OBJDIR}

${BINDIR}:
	mkdir ${BINDIR}

${OBJDIR}/%.o: ${SRCDIR}/%.c | ${OBJDIR}
	${CC} ${CFLAGS} -c $< -o $@
${OBJDIR}/%.o: ${LIBDIR}/%.c | ${OBJDIR}
	${CC} ${CFLAGS} -c $< -o $@
${OBJDIR}/%.o: ${TESTDIR}/%.c | ${OBJDIR}
	${CC} ${CFLAGS} -c $< -o $@

.PHONY: main clean test

main: ${LIBOBJS} ${OBJS} | ${BINDIR}
	${CC} ${LIBOBJS} ${OBJS} -o ${BINDIR}/$@

test: ${TESTOBJS} ${LIBOBJS} | ${BINDIR}
	${CC} ${TESTOBJS} ${LIBOBJS} -o ${BINDIR}/$@

clean: | ${OBJDIR} ${BINDIR}
	rm -rf ${OBJDIR} ${BINDIR}