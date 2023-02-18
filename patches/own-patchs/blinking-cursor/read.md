Change the cursor shape in the shell. An example for zsh is given below.

.zshrc:
```sh
# Change cursor shape for different vi modes.
function zle-keymap-select () {
    case $KEYMAP in
        vicmd) echo -ne '\e[1 q';;      # block
        viins|main) echo -ne '\e[5 q';; # beam
    esac
}
zle -N zle-keymap-select

zle-line-init() {
	# initiate `vi insert` as keymap (can be removed if `bindkey -V` has
	# been set elsewhere)
	zle -K viins
	echo -ne "\e[5 q"
}
zle -N zle-line-init
```
