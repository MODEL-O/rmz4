// undefined FUN_0810aef4(void)
// entry 0x810aef4


undefined4 FUN_0810aef4(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined4 *)(param_1 + 0x54) = 0x6800;
  *(uint *)(param_1 + 0x58) = (uint)*(byte *)(param_1 + 0x11) * 0x1000 + 0x1000;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810af58);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_0810ada0(param_1);
  return in_lr;
}


