void main(void)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  undefined local_18 [8];
  
  FUN_8006b634();
  FUN_8005eab8(0);
  FUN_800689d4(0);
  FUN_80067e24();
  FUN_80016a18();
  FUN_8005e694(0);
  FUN_8005e92c(0);
  FUN_8006329c();
  FUN_80064664();
  local_18[0] = 0x80;
  do {
    iVar2 = FUN_80064938(0xe,local_18,0);
  } while (iVar2 == 0);
  FUN_8005cfe8(0);
  DAT_1f8002a0 = 0;
  DAT_1f80029c = 0;
  FUN_80016af4();
  FUN_80016a00(1,1);
  FUN_800211a4();
  FUN_8005dd6c(&DAT_8009afe8,0,0,0x200,0xf0);
  FUN_80019020();
  FUN_80028728();
  FUN_80016fd8();
  FUN_800170f8(0,&LAB_800191e0);
  FUN_8005b41c();
  DAT_1f8001d8 = OpenEvent(0xf2000003,2,0x1000,(func *)&LAB_80017374);
  FUN_8005b42c();
  EnableEvent(DAT_1f8001d8);
  FUN_8005eab8(1);
  do {
    DAT_1f8001e8 = 0;
    if (DAT_1f8001f0 < 0x4001) {
      DAT_8009c8a8 = &DAT_800a1890 + DAT_1f8001f4 * 0x780;
      FUN_80017024();
    }
    if (DAT_1f8001ec != 0) {
      FUN_8005eb54(0);
    }
    do {
    } while (DAT_1f8001e8 < DAT_1f8001ea);
    if (DAT_1f8001ec == 0) {
      FUN_8005e694(1);
    }
    if ((DAT_1f8001bd != '\0') && ((DAT_1f8001d1 | DAT_1f8001d0) != 0)) {
      while ((~DAT_8009eb5a & 0x200) != 0) {
        if ((~DAT_8009eb5a & 0x80) != 0) {
          DAT_8009afe8 = DAT_8009afe8 + -4;
        }
        if ((~DAT_8009eb5a & 0x20) != 0) {
          DAT_8009afe8 = DAT_8009afe8 + 4;
        }
        if ((~DAT_8009eb5a & 0x10) != 0) {
          DAT_8009afea = DAT_8009afea + -4;
        }
        if ((~DAT_8009eb5a & 0x40) != 0) {
          DAT_8009afea = DAT_8009afea + 4;
        }
        FUN_80067c30(0);
        FUN_8005f420(&DAT_8009afe8);
      }
    }
    if (DAT_1f8001cc != 2) {
      if (2 < DAT_1f8001cc) {
        if (DAT_1f8001cc != 3) goto LAB_80016748;
        DAT_1f8001cc = 2;
      }
      if (DAT_1f8001f0 < 0x4001) {
        FUN_80016940();
        FUN_800173b0();
      }
    }
LAB_80016748:
    if (DAT_1f8001bf == '\0') {
      if ((((DAT_1f8001be != '\0') && (DAT_1f8001cc == 0)) && ((DAT_1f8001d1 | DAT_1f8001d0) != 0))
         && (DAT_1f8001ce == '\x01')) {
        if ((DAT_1f8001fc & 0x400) != 0) {
          DAT_1f8001ee = 1 - DAT_1f8001ee;
          DAT_1f8001f0 = DAT_1f8001ee * -0x8000;
        }
        if (DAT_1f8001ee == 0) {
          if ((DAT_1f8001fc & 0x100) == 0) {
            if ((DAT_1f8001f0 & 0x4000) != 0) {
              DAT_1f8001f0 = DAT_1f8001f0 + 1 & 0xfff3;
            }
          }
          else {
            uVar3 = ~DAT_1f8001f0 & 0x4000;
            uVar1 = DAT_1f8001f0 & 0xbff0;
            DAT_1f8001f0 = uVar3 | DAT_1f8001f0 & 0xbfff;
            if (uVar3 == 0) {
              DAT_1f8001f0 = uVar3 | uVar1;
            }
          }
        }
        else {
          DAT_1f8001f0 = 0x8000;
          if ((DAT_1f8001fc & 0x100) != 0) {
            DAT_1f8001f0 = 0;
          }
        }
      }
    }
    else if (((DAT_1f8001cc == 0) && ((DAT_1f8001d1 | DAT_1f8001d0) != 0)) &&
            ((DAT_1f8001ce == '\x01' && ((DAT_1f8001fc & 0x400) != 0)))) {
      DAT_1f8001f0 = 0x8000 - DAT_1f8001f0;
    }
  } while( true );
}