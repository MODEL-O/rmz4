// undefined FUN_080af268(void)
// entry 0x80af268


undefined4 FUN_080af268(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  bVar4 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar4 | 3;
  if (*(byte *)(param_1 + 0x10) == 0) {
    bVar4 = bVar4 & 0xef | 3;
  }
  else {
    bVar4 = bVar4 | 0x13;
  }
  *(byte *)(param_1 + 10) = bVar4;
  bVar4 = *(byte *)(param_1 + 0x10) & 1;
  *(byte *)(param_1 + 0x4c) = bVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080af2f8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar2 = FUN_080af200(param_1 + 0x54,*(undefined1 *)(param_1 + 0x10),1);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_080af2fc,param_1 + 0x54,6);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_080af300;
  }
  else {
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 100) = 0x18;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  FUN_0801cf00(param_1,*(byte *)(param_1 + 0x11) | 0xa300);
  FUN_080af864(param_1);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar3 = *(int *)(param_1 + 100) * -0x100;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 100) = iVar3 >> 8;
  }
  FUN_080af384(param_1);
  return in_lr;
}


