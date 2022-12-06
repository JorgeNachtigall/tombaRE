# TombaRE

- FUN_8006b634: 
  - Args:
    - None
  - Local Variables:
    - None
  - External pointers:
    - `DAT_800975b8`: still unrecognized
  - Description:
    - runs before SCEA screen. Checks if `DAT_800975b8` (still unrecognized) address is equals to 0. If yes, sets the value to 1. In all tests, this variables starts with 0 value. 

- FUN_8005eab8:
  - Args:
    - `int param1` = 0
  - Local Variables:
    - `undefined4 uVar1`: still unrecognized
  - External pointers:
    - `DAT_80090c9e`: address that maybe controls the display mask (net yaroze)
  - Description:
    - Problably checks the current display mask and, if different than 0, sets it to 0
    - if `param1` variables equals to 0, calls `FUN_800616fc` passing `&DAT_80090d08`, `0xffffffff` (-1) and `0x14` (20) as arguments.
    - 