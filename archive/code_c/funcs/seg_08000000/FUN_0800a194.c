// undefined FUN_0800a194(void)
// entry 0x800a194


undefined4 FUN_0800a194(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar2 = DAT_0800a1e8;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar7 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    uVar6 = *(uint *)(param_1 + 100);
    *(ushort *)(uVar7 * 2 + DAT_0800a1e8) = (ushort)uVar6 | 0x45;
    *(undefined4 *)(uVar7 * 4 + iVar2 + 8) = 0;
    FUN_08001f1c(*DAT_0800a1ec + DAT_0800a1f0,(uVar6 & 0x1f00) << 3,0x800);
    puVar3 = DAT_0800a1f4;
    *DAT_0800a1f4 = (short)DAT_0800a1f8;
    if (*(char *)(DAT_0800a1fc + DAT_0800a200) == '\0') {
      uVar4 = (undefined2)DAT_0800a204;
    }
    else {
      uVar4 = 0x1000;
    }
    puVar3[1] = uVar4;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  uVar1 = *(ushort *)(param_1 + 0x10);
  if ((*(char *)(DAT_0800a268 + DAT_0800a26c) != '\0') && ((uVar1 & 0x1f) == 0)) {
    if ((*(ushort *)(DAT_0800a270 + 2) & 0x1f) != 0) {
      *(ushort *)(DAT_0800a270 + 2) = (*(ushort *)(DAT_0800a270 + 2) & 0x1f) - 1 & 0x1f | 0x1000;
    }
  }
  *(ushort *)(param_1 + 0x10) = uVar1 - 1;
  sVar5 = *(short *)(param_1 + 0x12) + 1;
  *(short *)(param_1 + 0x12) = sVar5;
  if (sVar5 == 0x30) {
    *(undefined2 *)(param_1 + 0x12) = 0;
  }
  return in_lr;
}


