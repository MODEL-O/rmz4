// undefined FUN_08034694(void)
// entry 0x8034694


undefined4 FUN_08034694(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 199) < 4) {
    uVar1 = *(uint *)(param_1 + 600);
    if ((uVar1 & 0x40) == 0) {
      if ((uVar1 & 0x80) == 0) {
        FUN_0801cf00(param_1,DAT_08034758);
        *(undefined1 *)(param_1 + DAT_0803475c) = 0;
      }
      else {
        FUN_0801cf00(param_1,DAT_08034724);
        *(undefined1 *)(param_1 + DAT_08034728) = 2;
      }
    }
    else if ((uVar1 & 0x30) == 0) {
      FUN_0801cf00(param_1,0x2a00);
      *(undefined1 *)(param_1 + DAT_08034704) = 3;
    }
    else {
      FUN_0801cf00(param_1,DAT_080346e8);
      *(undefined1 *)(param_1 + DAT_080346ec) = 1;
    }
  }
  else {
    FUN_0801cf00(param_1,DAT_080346b4);
    *(undefined1 *)(param_1 + DAT_080346b8) = 0;
  }
  *(undefined1 *)(param_1 + 0x152) = 4;
  *(undefined1 *)(param_1 + 0x101) = 1;
  FUN_08034760(param_1);
  return in_lr;
}


