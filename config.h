//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", 	"cat /tmp/recordingicon 2> /dev/null",	0,	9},
	{"",	"nettraf",	1,	16},
	{"",	"memory",	10,	14},
	{"",	"cpu-temp",	1,	12},
	{"",	"volume",	0,	10},
	{"",	"battery",	5,	3},
	{"", 	"clock",	5,	0},
	{"",	"internet",	5,	4},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
