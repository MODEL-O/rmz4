// undefined FUN_0810b938(void)
// entry 0x810b938


undefined4 FUN_0810b938(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined4 *)(param_1 + 0x54) = 0x19800;
  *(undefined4 *)(param_1 + 0x58) = 0x2000;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810b9a4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_0810b774(param_1);
  return in_lr;
}


