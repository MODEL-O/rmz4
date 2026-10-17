// undefined FUN_080aba4c(void)
// entry 0x80aba4c


undefined4 FUN_080aba4c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080abad8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
  *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0x58) + DAT_080abadc;
  *(undefined2 *)(param_1 + 0xc2) = 0x100;
  *(undefined2 *)(param_1 + 0xc0) = 0x100;
  *(undefined1 *)(param_1 + 0xbd) = 0;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0xbe) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080abae0,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_08002c94(param_1 + 0x34,DAT_080abae4);
  *(int *)(param_1 + 0x3c) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7;
  FUN_080abae8(param_1);
  return in_lr;
}


