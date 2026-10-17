// undefined FUN_081000a4(void)
// entry 0x81000a4


undefined4 FUN_081000a4(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar1 = *(int *)(param_1 + 0x54) + 0x800;
  *(int *)(param_1 + 0x54) = iVar1;
  iVar1 = FUN_08008534(iVar1,*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar1 + 0x100;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08100108);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_0810010c(param_1);
  return in_lr;
}


