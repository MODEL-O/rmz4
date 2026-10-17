// undefined FUN_080ded10(void)
// entry 0x80ded10


undefined4 FUN_080ded10(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801ce54();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801ceec(param_1);
  FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x11) * 2 + DAT_080ded84));
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined1 *)(param_1 + 0x13) = 0;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ded88);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080dece0(param_1);
  return in_lr;
}


