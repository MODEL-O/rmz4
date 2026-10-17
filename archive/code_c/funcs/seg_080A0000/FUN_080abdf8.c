// undefined FUN_080abdf8(void)
// entry 0x80abdf8


undefined4 FUN_080abdf8(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  *DAT_080abe48 = 0;
  *DAT_080abe4c = (ushort)DAT_080abe50 & *DAT_080abe4c;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080abe54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


