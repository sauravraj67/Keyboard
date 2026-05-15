import board

from kmk.kmk_keyboard import KMKKeyboard
from kmk.keys import KC
from kmk.modules.layers import Layers
from kmk.scanners import DiodeOrientation

keyboard = KMKKeyboard()

# =====================================================
# MODULES
# =====================================================

layers = Layers()
keyboard.modules.append(layers)

# =====================================================
# MATRIX
# =====================================================

keyboard.row_pins = (
    board.GP0,
    board.GP1,
    board.GP2,
    board.GP3,
    board.GP4,
)

keyboard.col_pins = (
    board.GP5,
    board.GP6,
    board.GP7,
    board.GP8,
    board.GP9,
    board.GP10,
    board.GP11,
    board.GP12,
    board.GP13,
    board.GP14,
    board.GP15,
    board.GP16,
    board.GP17,
    board.GP18,
)

keyboard.diode_orientation = DiodeOrientation.COL2ROW

# =====================================================
# CUSTOM LAYER KEYS
# =====================================================

SHIFT_LAYER = KC.MO(1)
CAPS_LAYER = KC.TG(2)

# =====================================================
# KEYMAPS
# =====================================================

keyboard.keymap = [

    # =================================================
    # LAYER 0 - BASE
    # =================================================

    [

        KC.ESC, KC.N1, KC.N2, KC.N3, KC.N4, KC.N5, KC.N6,
        KC.N7, KC.N8, KC.N9, KC.N0, KC.MINS, KC.EQL, KC.BSPC,

        KC.TAB, KC.Q, KC.W, KC.E, KC.R, KC.T, KC.Y,
        KC.U, KC.I, KC.O, KC.P, KC.LBRC, KC.RBRC, KC.BSLS,

        CAPS_LAYER, KC.A, KC.S, KC.D, KC.F, KC.G, KC.H,
        KC.J, KC.K, KC.L, KC.SCLN, KC.QUOT, KC.ENT, KC.NO,

        SHIFT_LAYER, KC.Z, KC.X, KC.C, KC.V, KC.B, KC.N,
        KC.M, KC.COMM, KC.DOT, KC.SLSH, SHIFT_LAYER, KC.UP, KC.NO,

        KC.LCTL, KC.LGUI, KC.LALT,
        KC.SPC, KC.SPC, KC.SPC, KC.SPC, KC.SPC,
        KC.RALT, KC.MO(3), KC.LEFT, KC.DOWN, KC.RIGHT, KC.RCTL,
    ],

    # =================================================
    # LAYER 1 - SHIFT LAYER
    # Activated while holding shift
    # =================================================

    [

        KC.GRV, KC.EXLM, KC.AT, KC.HASH, KC.DLR, KC.PERC, KC.CIRC,
        KC.AMPR, KC.ASTR, KC.LPRN, KC.RPRN, KC.UNDS, KC.PLUS, KC.DEL,

        KC.TRNS, KC.TRNS, KC.TRNS, KC.TRNS, KC.TRNS, KC.TRNS, KC.TRNS,
        KC.TRNS, KC.TRNS, KC.TRNS, KC.TRNS, KC.LCBR, KC.RCBR, KC.PIPE,

        KC.TRNS, KC.TRNS, KC.TRNS, KC.TRNS, KC.TRNS, KC.TRNS, KC.TRNS,
        KC.TRNS, KC.TRNS, KC.TRNS, KC.COLN, KC.DQUO, KC.TRNS, KC.NO,

        KC.TRNS, KC.TRNS, KC.TRNS, KC.TRNS, KC.TRNS, KC.TRNS, KC.TRNS,
        KC.LABK, KC.RABK, KC.QUES, KC.TRNS, KC.TRNS, KC.PGUP, KC.NO,

        KC.TRNS, KC.TRNS, KC.TRNS,
        KC.TRNS, KC.TRNS, KC.TRNS, KC.TRNS, KC.TRNS,
        KC.TRNS, KC.TRNS, KC.HOME, KC.PGDN, KC.END, KC.TRNS,
    ],

    # =================================================
    # LAYER 2 - CAPS LAYER
    # Toggles ON/OFF using Caps key
    # =================================================

    [

        KC.ESC, KC.F1, KC.F2, KC.F3, KC.F4, KC.F5, KC.F6,
        KC.F7, KC.F8, KC.F9, KC.F10, KC.F11, KC.F12, KC.BSPC,

        KC.TAB, KC.Q, KC.W, KC.E, KC.R, KC.T, KC.Y,
        KC.U, KC.I, KC.O, KC.P, KC.UP, KC.TRNS, KC.TRNS,

        CAPS_LAYER, KC.A, KC.S, KC.D, KC.F, KC.G, KC.H,
        KC.LEFT, KC.DOWN, KC.RIGHT, KC.TRNS, KC.TRNS, KC.ENT, KC.NO,

        SHIFT_LAYER, KC.Z, KC.X, KC.C, KC.V, KC.B, KC.N,
        KC.M, KC.TRNS, KC.TRNS, KC.TRNS, SHIFT_LAYER, KC.PGUP, KC.NO,

        KC.LCTL, KC.LGUI, KC.LALT,
        KC.SPC, KC.SPC, KC.SPC, KC.SPC, KC.SPC,
        KC.RALT, KC.MO(3), KC.HOME, KC.PGDN, KC.END, KC.RCTL,
    ],

    # =================================================
    # LAYER 3 - FN LAYER
    # =================================================

    [

        KC.GRV, KC.F1, KC.F2, KC.F3, KC.F4, KC.F5, KC.F6,
        KC.F7, KC.F8, KC.F9, KC.F10, KC.F11, KC.F12, KC.DEL,

        KC.TRNS, KC.TRNS, KC.UP, KC.TRNS, KC.TRNS, KC.TRNS, KC.TRNS,
        KC.TRNS, KC.PSCR, KC.SLCK, KC.PAUS, KC.TRNS, KC.TRNS, KC.TRNS,

        KC.TRNS, KC.LEFT, KC.DOWN, KC.RIGHT, KC.TRNS, KC.TRNS, KC.TRNS,
        KC.TRNS, KC.TRNS, KC.TRNS, KC.TRNS, KC.TRNS, KC.TRNS, KC.TRNS,

        KC.TRNS, KC.TRNS, KC.TRNS, KC.TRNS, KC.TRNS, KC.TRNS, KC.TRNS,
        KC.MPRV, KC.MPLY, KC.MNXT, KC.VOLD, KC.VOLU, KC.PGUP, KC.TRNS,

        KC.TRNS, KC.TRNS, KC.TRNS,
        KC.TRNS, KC.TRNS, KC.TRNS, KC.TRNS, KC.TRNS,
        KC.TRNS, KC.TRNS, KC.HOME, KC.PGDN, KC.END, KC.TRNS,
    ]
]

if __name__ == '__main__':
    keyboard.go()