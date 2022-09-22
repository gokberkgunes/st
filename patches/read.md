- `simple terminal, st patches.`

- alpha & alpha-focus-highlight (Luke probably uses these, they're not needed.)
https://st.suckless.org/patches/alpha/
https://st.suckless.org/patches/alpha_focus_highlight/

- dynamic-cursor-color (This has issues with comments and so on, not needed.)
https://st.suckless.org/patches/dynamic-cursor-color/

- boxdraw (luke has this, not needed for now.)
https://st.suckless.org/patches/boxdraw/

- ligatures (luke has this, it has issues with other patches such as alpha and scrollback, not needed)
https://st.suckless.org/patches/ligatures/

- xresources (luke has this, using this but kinda useless just set ST color scheme, I do not juggle schemes.)
https://st.suckless.org/patches/xresources/

- scrollback (luke has this, he used another suckless program called scroll which is buggy)
https://st.suckless.org/patches/scrollback/

- font2 (luke has this, it's essential for gohu font.)
https://st.suckless.org/patches/font2/

- `Useful patches below.`

- newterm [allows you to spawn a new st terminal using Ctrl-Shift-Return, it will have the same CWD (current working directory) as the original st instance] == setsid st ${pwd}
https://st.suckless.org/patches/newterm/

- undercurl (adds support for special underlines, e.g. curly / wavy underlines)
https://st.suckless.org/patches/undercurl/

- bold is not bright (this is good cause we do not want colors to be changed when they're bold.)
https://st.suckless.org/patches/bold-is-not-bright/

- selection color (this pretty when selecting things from st it looks kind of bad when colors are just reversed.)
https://st.suckless.org/patches/selectioncolors/
