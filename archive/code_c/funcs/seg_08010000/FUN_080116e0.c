// undefined FUN_080116e0(void)
// entry 0x80116e0


undefined4 FUN_080116e0(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_08011740;
  uVar3 = *(uint *)(DAT_08011744 + DAT_08011748) * DAT_0801174c + DAT_08011750;
  *(uint *)(DAT_08011744 + DAT_08011748) = uVar3;
  *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)((uVar3 >> 0x10 & 0x1f) * 2 + iVar1);
  piVar2 = DAT_08011754;
  FUN_08001ea4(*DAT_08011754 + DAT_08011758,0x4000);
  FUN_08002208(*piVar2 + DAT_0801175c,0);
  *(undefined2 *)(param_1 + 0x6a) = 0;
  *(char *)(DAT_08011760 + DAT_08011764) = *(char *)(DAT_08011760 + DAT_08011764) + '\x01';
  return in_lr;
}


