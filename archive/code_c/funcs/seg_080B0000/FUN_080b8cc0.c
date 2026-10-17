// undefined FUN_080b8cc0(void)
// entry 0x80b8cc0


undefined4 FUN_080b8cc0(int param_1)

{
  int *piVar1;
  int iVar2;
  short *psVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  *DAT_080b8d24 = 0;
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3;
  psVar3 = (short *)(iVar2 + 0xcc);
  if (*psVar3 != 0) {
    *psVar3 = *psVar3 + -1;
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b8d28);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


