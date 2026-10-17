// undefined FUN_080e8c94(void)
// entry 0x80e8c94


undefined4 FUN_080e8c94(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e8cd8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_0801cdbc(param_1);
  *(undefined1 *)(param_1 + 0x25) = 0x19;
  FUN_0801d3d0(param_1,0xd);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined1 *)(param_1 + 0x13) = 0x80;
  FUN_080e8cdc(param_1);
  return in_lr;
}


