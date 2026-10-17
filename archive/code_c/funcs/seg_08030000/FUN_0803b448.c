// undefined FUN_0803b448(void)
// entry 0x803b448


undefined4 FUN_0803b448(int param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803b4ac);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(undefined1 *)(param_1 + 0xc2) = 1;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_0803b4b0));
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xc3) = 1;
  pcVar2 = (char *)(*(int *)(param_1 + 0xb4) + 0x148);
  *pcVar2 = *(char *)(param_1 + 0xc2) + *pcVar2;
  *(undefined4 *)(param_1 + 0x98) = DAT_0803b4b4;
  FUN_0803b4b8(param_1);
  return in_lr;
}


