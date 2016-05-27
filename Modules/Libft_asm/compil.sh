~/.brew/Cellar/nasm/2.11.06/bin/nasm -f macho64 syscall.s -o syscall.o
ld syscall.o -macosx_version_min 10.8 -lSystem
