void FUN_8005eab8(int param_1)

{
  undefined4 uVar1;
  
  if (1 < DAT_80090c9e) {
    (*(code *)PTR_FUN_80090c98)("SetDispMask(%d)...\n",param_1);
  }
  if (param_1 == 0) {
    FUN_800616fc(&DAT_80090d08,0xffffffff,0x14);
  }
  uVar1 = 0x3000001;
  if (param_1 != 0) {
    uVar1 = 0x3000000;
  }
  (**(code **)(PTR_PTR_s_$Id:_sys.c,v_1.129_1996/12/25_03_80090c94 + 0x10))(uVar1);
  return;
}
