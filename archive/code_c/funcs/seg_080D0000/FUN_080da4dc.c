// undefined FUN_080da4dc(void)
// entry 0x80da4dc


undefined4 FUN_080da4dc(int param_1)

{
  short sVar1;
  int *piVar2;
  undefined4 in_lr;
  
  sVar1 = FUN_080ebfc8();
  if (sVar1 == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080da510);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  return in_lr;
}


