// undefined FUN_080d6cf4(void)
// entry 0x80d6cf4


undefined4 FUN_080d6cf4(int param_1)

{
  byte bVar1;
  short sVar2;
  int *piVar3;
  undefined4 in_lr;
  
  FUN_0801cff0();
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sVar2 = FUN_08007c7c();
  if (sVar2 != 0) {
    FUN_080d0c88(3,param_1 + 0x54);
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d6d58);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
  }
  return in_lr;
}


