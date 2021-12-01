/* appearance */
static const unsigned int snap      = 16;       /* snap pixel */
static const char *fonts[]          = {"MonoLisa:pixelsize=14:antialias=true:autohint=true"};
static const char col_background[]  = "#282c34";
static const char col_foreground[]  = "#abb2bf";
static const char col_accent[]      = "#61afef";
static const char *colors[][2]      = {
	/*               fg         bg         border   */
	[SchemeNorm] = { col_foreground, col_background },
	[SchemeSel]  = { col_background, col_accent  },
};

/* tagging */
static const char *tags[] = { "I", "II", "III", "IV", "V"};

static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "tile ",      tile },    /* first entry is default */
	{ "float",      NULL },    /* no layout function means floating behavior */
};

/* key definitions */
#define MODKEY Mod1Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \

/* commands */
static const char *dmenucmd[] = { "dmenu_run", NULL };
static const char *termcmd[]  = { "st", NULL };

static Key keys[] = {
	/* modifier                     key        function        argument */
	{ MODKEY,                       XK_p,      spawn,          {.v = dmenucmd } },
	{ MODKEY|ShiftMask,             XK_Return, spawn,          {.v = termcmd } },

	{ MODKEY,                       XK_b,      togglebar,      {0} },

	{ MODKEY,                       XK_j,      focusstack,     {.i = +1 } },
	{ MODKEY,                       XK_k,      focusstack,     {.i = -1 } },

	{ MODKEY,                       XK_i,      incnmaster,     {.i = +1 } },
	{ MODKEY,                       XK_d,      incnmaster,     {.i = -1 } },

	{ MODKEY,                       XK_h,      setmfact,       {.f = -0.1} },
	{ MODKEY,                       XK_l,      setmfact,       {.f = +0.1} },

	{ MODKEY,                       XK_Return, zoom,           {0} }, // make slave to master

	{ MODKEY,                       XK_Tab,    view,           {0} }, // see latest tab

	{ MODKEY|ShiftMask,             XK_c,      killclient,     {0} },

	{ MODKEY,                       XK_space,  setlayout,      {0} },

	{ MODKEY|ShiftMask,             XK_space,  togglefloating, {0} },

	{ MODKEY,                       XK_comma,  focusmon,       {.i = -1 } },
	{ MODKEY,                       XK_period, focusmon,       {.i = +1 } },

	{ MODKEY|ShiftMask,             XK_comma,  tagmon,         {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_period, tagmon,         {.i = +1 } },

	TAGKEYS(                        XK_1,                      0)
	TAGKEYS(                        XK_2,                      1)
	TAGKEYS(                        XK_3,                      2)
	TAGKEYS(                        XK_4,                      3)
	TAGKEYS(                        XK_5,                      4)
	{ MODKEY|ShiftMask,             XK_q,      quit,           {0} },
};

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static Button buttons[] = {
	/* event mask      button          function        argument */
	{ MODKEY,         Button1,        movemouse,      {0} },
	{ MODKEY,         Button2,        togglefloating, {0} },
	{ MODKEY,         Button3,        resizemouse,    {0} },
};

 