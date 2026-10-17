// undefined FUN_0809ad58(void)
// entry 0x809ad58


undefined4 FUN_0809ad58(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_080c62a0(param_1 + 0x54,0,*(char *)(param_1 + 0x12) + '\x03',0x20);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809ada4);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


