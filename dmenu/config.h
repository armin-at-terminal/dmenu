/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */
static int border_width = 5;
static int topbar = 0;/* -b  option; if 0, dmenu appears at bottom     */
static int centered =1;
static int min_width = 500;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeOut] = { "#000000", "#00ffff" },
	[SchemeSelHighlight] = {"#50d94e", "#005577"},
	[SchemeNormHighlight] = {"#50d94e", "#222222"},
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 25;
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;
/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
