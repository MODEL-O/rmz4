// undefined FUN_080cd080(void)
// entry 0x80cd080


undefined4 FUN_080cd080(int param_1)

{
  short sVar1;
  int *piVar2;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sVar1 = FUN_08007c7c();
  if (sVar1 != 0) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cd0c0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


