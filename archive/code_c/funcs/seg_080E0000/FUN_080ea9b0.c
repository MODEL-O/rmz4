// undefined FUN_080ea9b0(void)
// entry 0x80ea9b0


undefined4 FUN_080ea9b0(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined2 uVar7;
  int iVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\x01') {
    uVar7 = 0x3e0;
    iVar4 = DAT_080ea9c4;
  }
  else {
    uVar7 = 0x1e0;
    iVar4 = DAT_080ea9f8;
  }
  *(undefined2 *)(iVar4 + 0x2a) = uVar7;
  iVar2 = DAT_080ea9fc;
  *(undefined2 *)(DAT_080ea9fc + 0x2a) = 10;
  *(undefined2 *)(iVar4 + 0x186) = uVar7;
  *(undefined2 *)(iVar2 + 0x186) = 10;
  if ((*(byte *)(DAT_080eaa00 + 0x14) & 0x80) == 0) {
    bVar1 = 0x15;
  }
  else {
    bVar1 = 0xc3;
  }
  *(byte *)(param_1 + 0xb8) = bVar1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + DAT_080eaaa8;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x900;
  uVar5 = (uint)*(byte *)(param_1 + 0xb8);
  iVar8 = uVar5 * 0x14;
  iVar2 = iVar8 + DAT_080eaaac;
  iVar6 = uVar5 * 2;
  FUN_08001d30(iVar2,((uint)*(ushort *)(iVar6 + iVar4) - (uint)(*(ushort *)(iVar2 + 6) >> 6)) * 0x20
                     + 0x10000);
  iVar8 = iVar8 + DAT_080eaab0;
  FUN_08002208(iVar8,((uint)*(ushort *)(iVar6 + DAT_080eaab4) - (uint)*(byte *)(iVar8 + 7)) * 0x20 +
                     0x200);
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080eaab8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 0xba) = 0;
  FUN_080eaabc(param_1);
  return in_lr;
}


