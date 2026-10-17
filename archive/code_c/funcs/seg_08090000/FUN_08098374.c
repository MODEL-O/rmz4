// undefined FUN_08098374(void)
// entry 0x8098374


undefined4 FUN_08098374(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 in_lr;
  byte abStack_18 [4];
  
  FUN_08129258(abStack_18,DAT_080983f8,2);
  bVar1 = *(byte *)(param_1 + 0x11);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080983fc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  *(undefined1 *)(param_1 + 0x12) = 2;
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,(uint)abStack_18[bVar1] * 0x18 + DAT_08098400,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_08098404(param_1);
  return in_lr;
}


