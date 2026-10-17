// undefined FUN_080a59fc(void)
// entry 0x80a59fc


undefined4 FUN_080a59fc(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_08002b10(DAT_080a5a68);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a5a6c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined1 *)(param_1 + 0x12) = 3;
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  FUN_0801cf00(param_1,0x8800);
  FUN_0801d3fc(param_1);
  FUN_080a5a70(param_1);
  return in_lr;
}


