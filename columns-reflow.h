#define TLINE(y) ( \
	(y) < term.scr ? term.hist[(term.histi + (y) - term.scr + 1 + HISTSIZE) % HISTSIZE] \
	               : term.line[(y) - term.scr] \
)

#define TLINEABS(y) ( \
	(y) < 0 ? term.hist[(term.histi + (y) + 1 + HISTSIZE) % HISTSIZE] : term.line[(y)] \
)

#define UPDATEWRAPNEXT(alt, col) do { \
	if ((term.c.state & CURSOR_WRAPNEXT) && term.c.x + term.wrapcwidth[alt] < col) { \
		term.c.x += term.wrapcwidth[alt]; \
		term.c.state &= ~CURSOR_WRAPNEXT; \
	} \
} while (0);

enum scroll_mode {
	SCROLL_RESIZE = -1,
	SCROLL_NOSAVEHIST = 0,
	SCROLL_SAVEHIST = 1
};

static int tiswrapped(Line line);
static char *tgetglyphs(char *buf, const Glyph *gp, const Glyph *lgp);
static size_t tgetline(char *buf, const Glyph *fgp);
static void selremove(void);
static void tresetcursor(void);
static void tloaddefscreen(int, int);
static void tloadaltscreen(int, int);
static void selmove(int);
static void tclearglyph(Glyph *, int);
static void treflow(int, int);
static void rscrolldown(int);
static void tresizedef(int, int);
static void tresizealt(int, int);
static int regionselected(int, int, int, int);
