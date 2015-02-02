/* tenyr */

#include <string.h>

static char rcsid[] = "$Id$";

#ifndef LCCDIR
#error "#define LCCDIR"
#endif

char *suffixes[] = { ".c", ".i", ".tas", ".to", ".texe", 0 };
char inputs[256] = "";
char *cpp[] = { LCCDIR "cpp",
	"-U__GNUC__", "-D_POSIX_SOURCE", "-D__STDC__=1", "-D__STRICT_ANSI__",
	"-D__signed__=signed",
	"$1", "$2", "$3", 0 };
char *include[] = { "-I" LCCDIR "include", "-I" LCCDIR "gcc/include", "-I/usr/include", 0 };
char *com[] = { LCCDIR "rcc", "-target=tenyr/tenyr", "$1", "$2", "$3", 0 };
char *as[] = { "tas", "-o", "$3", "$1", "$2", 0 };
char *ld[] = { "tld", "-o", "$3", "$1", "$2", 0 };

int option(char *arg) {
	return 1;
}
