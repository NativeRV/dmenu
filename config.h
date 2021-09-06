/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=11"
};
static const char *prompt = NULL;      /* -p  option; prompt to the left of input field */
// static const char *colors[SchemeLast][2] = {
	// [>     fg         bg       <]
	// [SchemeNorm] = { "#bbbbbb", "#222222" },
	// [SchemeSel] = { "#eeeeee", "#005577" },
	// [SchemeOut] = { "#000000", "#00ffff" },
// };
// [> -l option; if nonzero, dmenu uses vertical list with given number of lines <]

#include "/home/nrv/.cache/wal/colors-wal-dmenu.h"

static unsigned int lines      = 15;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 0;
