// undefined FUN_08103c7c(void)
// entry 0x8103c7c


undefined4 FUN_08103c7c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined4 *)(param_1 + 0x30) = DAT_08103cd0;
  *(undefined2 *)(param_1 + 0x26) = 0xf;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  FUN_0801cf00(param_1,DAT_08103cd4);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08103cd8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_08103cdc(param_1);
  return in_lr;
}


