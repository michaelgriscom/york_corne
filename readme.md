# York

- Clone into keyboards/crkbd/keymaps
- Run `qmk flash -kb crkbd -km york`

## License

GPL-2.0-or-later (see [LICENSE](LICENSE)), the same as QMK and
[Miryoku](https://github.com/manna-harbour/miryoku), which this layout follows.
The `U_*` definitions and layer structure in `keymap.c` are taken from
Miryoku's QMK implementation.

`features/caps_word.c` and `features/caps_word.h` are Copyright Google LLC
(from [getreuer/qmk-keymap](https://github.com/getreuer/qmk-keymap)) and keep
their Apache-2.0 license, a copy of which is in
[features/LICENSE](features/LICENSE). Apache-2.0 code can't be combined with
GPLv2-only code, so firmware that includes these files is distributed under
GPLv3 or later, which the "or later" clause allows.
