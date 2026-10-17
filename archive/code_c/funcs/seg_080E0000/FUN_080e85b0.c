// undefined FUN_080e85b0(void)
// entry 0x80e85b0


undefined4 FUN_080e85b0(int param_1)

{
  int *piVar1;
  short *psVar2;
  undefined4 in_lr;
  
  psVar2 = (short *)(*(int *)(param_1 + 0x28) + 0xcc);
  if (*psVar2 != 0) {
    *psVar2 = *psVar2 + -1;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e85e8);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


