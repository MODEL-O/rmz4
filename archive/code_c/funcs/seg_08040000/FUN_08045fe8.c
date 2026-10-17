// undefined FUN_08045fe8(void)
// entry 0x8045fe8


undefined4 FUN_08045fe8(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  FUN_0801cff0();
  iVar3 = *(int *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar3 = iVar3 + DAT_08046040;
  }
  *(int *)(param_1 + 0x54) = iVar3;
  iVar3 = *(int *)(param_1 + 0xc0);
  if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
    iVar3 = iVar3 + DAT_08046040;
  }
  *(int *)(param_1 + 0x58) = iVar3;
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (2 < bVar1) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08046044);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  return in_lr;
}


