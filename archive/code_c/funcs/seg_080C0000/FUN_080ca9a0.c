// undefined FUN_080ca9a0(void)
// entry 0x80ca9a0


undefined4 FUN_080ca9a0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  uVar7 = (uint)(*(byte *)(param_1 + 0x10) >> 1);
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
  FUN_08005760(param_1 + 0x74,DAT_080ca9f4,param_1 + 0x54,0xff);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  bVar5 = *(byte *)(param_1 + 0x10) & 1;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar5 << 4;
  iVar6 = DAT_080caa60;
  iVar3 = DAT_080caa34;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x5c) = (int)*(short *)(uVar7 * 4 + DAT_080caa34);
    iVar6 = iVar3;
  }
  else {
    iVar3 = *(short *)(uVar7 * 4 + DAT_080caa60) * -0x100;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  }
  if (*(byte *)(param_1 + 0x10) < 4) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x10);
    uVar2 = 0x80;
  }
  else {
    *(undefined1 *)(param_1 + 0x12) = 0xff;
    uVar2 = 0x50;
  }
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(int *)(param_1 + 0x60) = (int)*(short *)((uVar7 & 3) * 4 + iVar6 + 2);
  FUN_0801cf00(param_1,*(undefined2 *)(uVar7 * 2 + DAT_080caac8));
  if (*(char *)(param_1 + 0x11) == '\x01') {
    iVar3 = *(int *)(param_1 + 0x5c) * 0x17f;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  }
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080caacc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
  FUN_080caad0(param_1);
  return in_lr;
}


