// undefined FUN_0810b38c(void)
// entry 0x810b38c


undefined4 FUN_0810b38c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x4300);
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined4 *)(param_1 + 0x54) = 0x17800;
  *(uint *)(param_1 + 0x58) = (uint)*(byte *)(param_1 + 0x11) * 0x1000 + 0x1000;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810b3f8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_0810b148(param_1);
  return in_lr;
}


