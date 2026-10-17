// undefined FUN_0810a6a0(void)
// entry 0x810a6a0


undefined4 FUN_0810a6a0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_0810a6ec));
  if ((*(char *)(iVar2 + DAT_0810a6f0 + 2) == '\0') && (*(char *)(param_1 + 0x74) == '\0')) {
    FUN_0801cff0(param_1);
    if (0x100 < *DAT_0810a71c) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x20000;
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810a6f4);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
  }
  return in_lr;
}


