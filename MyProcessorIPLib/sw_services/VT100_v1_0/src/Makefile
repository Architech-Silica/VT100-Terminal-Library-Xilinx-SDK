COMPILER=
ARCHIVER=
CP=cp
COMPILER_FLAGS=
EXTRA_COMPILER_FLAGS=

RELEASEDIR=../../../lib
INCLUDEDIR=../../../include
INCLUDES=-I${INCLUDEDIR} 
VT100_DIR = .
               
LIB_SRCS = $(VT100_DIR)/VT100.c

VT100_SRCS = $(LIB_SRCS)

VT100_OBJS = $(VT100_SRCS:%.c=%.o)


EXPORT_INCLUDE_FILES = $(VT100_DIR)/include/VT100.h

libs: libVT100.a
	cp libVT100.a $(RELEASEDIR)
	make clean

include:
	@for i in $(EXPORT_INCLUDE_FILES); do \
	echo ${CP} -r $$i ${INCLUDEDIR}; \
	${CP} -r $$i ${INCLUDEDIR}; \
	done

clean:
	rm -rf obj/*.o
	rmdir obj
	rm libVT100.a

libVT100.a: obj_dir print_msg_isf_base $(VT100_OBJS)
	@echo "Creating archive $@"
	$(ARCHIVER) rc $@ obj/*.o

obj_dir:
	mkdir obj

print_msg_isf_base:
	@echo "Compiling VT100 Terminal Control Library"

.c.o:
	$(COMPILER) $(COMPILER_FLAGS) $(EXTRA_COMPILER_FLAGS) $(INCLUDES) -c $< -o obj/$(@F)
