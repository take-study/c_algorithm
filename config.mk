OBJDIR := obj
SRCDIR := src
BINDIR := bin
LIBDIR := lib/**
TESTDIR := test

SRCS := ${wildcard ${SRCDIR}/*.c}
OBJS :=${subst ${SRCDIR},${OBJDIR},${SRCS:.c=.o}}

LIBSRCS := ${wildcard ${LIBDIR}/*.c}
LIBOBJS :=${OBJDIR}/${notdir ${LIBSRCS:.c=.o}}

TESTSRCS := ${wildcard ${TESTDIR}/*.c}
TESTOBJS :=${OBJDIR}/${notdir ${TESTSRCS:.c=.o}}

CFLAGS = -g -I include ${patsubst %,-I %,${wildcard ${LIBDIR}}} -Wall

LDFLAGS = 

CC = gcc