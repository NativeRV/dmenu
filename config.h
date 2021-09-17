/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

/* -b  option; if 0, dmenu appears at bottom     */
static int topbar = 1;

/* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int fuzzy = 1;

/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "monospace:size=9";
static const char *fonts[] = {
  font,
  "JoyPixels:pixelsize=9:antialias=true:autohint=true",
};

/* -p  option; prompt to the left of input field */
static const char *prompt = NULL;

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines          = 0;

/* -h option; minimum height of a menu line */
static unsigned int lineheight     = 0;
static unsigned int min_lineheight = 8;

static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";

static const char *colors[SchemeLast][2] = {
	/*               fg           bg       */
	[SchemeNorm] = { normfgcolor, normbgcolor },
	[SchemeSel]  = { selfgcolor,  selbgcolor  },
	[SchemeOut]  = { "#000000",   "#00ffff"   },
};

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "font",            STRING,     &font },
	{ "foreground",      STRING,     &normfgcolor },
	{ "background",      STRING,     &normbgcolor },
	{ "selfgcolor",      STRING,     &selfgcolor },
	{ "color1",          STRING,     &selbgcolor },
	{ "color2",          STRING,     &prompt },
  { "lineheight",      INTEGER,    &lineheight }, 
  { "min_lineheight",  INTEGER,    &lineheight }, 
  { "lines",           INTEGER,    &lines }, 
};

/* Size of the window border */
static const unsigned int border_width = 0;
