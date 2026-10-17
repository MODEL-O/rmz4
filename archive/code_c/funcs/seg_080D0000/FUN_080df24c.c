// undefined FUN_080df24c(void)
// entry 0x80df24c


undefined4 FUN_080df24c(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  uVar6 = *DAT_080df2d4;
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    uVar3 = *DAT_080df2d8 * DAT_080df2dc + DAT_080df2e0;
    *DAT_080df2d8 = uVar3 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = 0x100 - ((uVar3 & 0x1ffffff) >> 0x10);
    *(undefined4 *)(param_1 + 0x60) = DAT_080df2e4;
    FUN_0802b6d8(uVar6,8);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar5;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == -1) || (sVar2 = FUN_08007c7c(iVar5), sVar2 != 0)) {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080df2e8);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0x10);
  }
  return in_lr;
}


