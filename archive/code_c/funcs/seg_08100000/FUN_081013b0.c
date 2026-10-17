// undefined FUN_081013b0(void)
// entry 0x81013b0


undefined4 FUN_081013b0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cff0();
  iVar1 = *(int *)(*DAT_081013e8 + 0x54) - *(int *)(param_1 + 0x54) >> 8;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar1 < 0x60) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_081013ec);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  return in_lr;
}


