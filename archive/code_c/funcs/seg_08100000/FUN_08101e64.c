// undefined FUN_08101e64(void)
// entry 0x8101e64


undefined4 FUN_08101e64(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_08002c94(param_1 + 0x34,DAT_08101e98);
  *(int *)(param_1 + 0x3c) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08101e9c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_08101dc8(param_1);
  return in_lr;
}


