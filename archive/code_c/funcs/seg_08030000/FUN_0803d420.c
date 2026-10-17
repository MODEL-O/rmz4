// undefined FUN_0803d420(void)
// entry 0x803d420


undefined4 FUN_0803d420(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0xb4);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803d4bc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(iVar2 + 0xc3) * 2 + DAT_0803d4c0));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,
               (uint)*(byte *)((uint)*(byte *)(iVar2 + 0xc3) + DAT_0803d4c4) * 0x18 + DAT_0803d4c8,
               param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_0803d4cc;
  *(undefined1 *)(param_1 + 0xc3) = 0;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  FUN_08002b10(0x43);
  if ((byte)(*(char *)(iVar2 + 0xc3) - 3U) < 2) {
    *(undefined1 *)(param_1 + 0x12) = 2;
  }
  else {
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  FUN_0803d4e4(param_1);
  return in_lr;
}


