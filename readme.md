# York

- Clone into keyboards/crkbd/keymaps
- Run `qmk flash -kb crkbd -km york`

## License

MIT (see [LICENSE](LICENSE)) for original work in this repository, with these
exceptions:

- The layout in `keymap.c` follows [Miryoku](https://github.com/manna-harbour/miryoku)
  by Manna Harbour, and its `U_*` definitions and layer structure are taken from
  Miryoku's QMK implementation. Those portions keep Miryoku's GPL-2.0-or-later
  license.
- `features/caps_word.c` and `features/caps_word.h` are Copyright Google LLC
  (from [getreuer/qmk-keymap](https://github.com/getreuer/qmk-keymap)) and
  licensed under Apache-2.0. A copy of that license is in
  [features/LICENSE](features/LICENSE).

Any firmware built from this keymap links QMK and is GPL-2.0-or-later.
