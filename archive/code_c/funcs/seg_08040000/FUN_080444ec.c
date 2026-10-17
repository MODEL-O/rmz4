// undefined FUN_080444ec(void)
// entry 0x80444ec


undefined4 FUN_080444ec(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804455c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_08044560);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_08044564,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_08044568;
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined4 *)(param_1 + 0x60) = DAT_08044584;
    iVar2 = *(int *)(param_1 + 0x58);
    iVar3 = DAT_08044588;
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0x300;
    iVar2 = *(int *)(param_1 + 0x58);
    iVar3 = 0xf00;
  }
  *(int *)(param_1 + 0x58) = iVar2 + iVar3;
  FUN_0804458c(param_1);
  return in_lr;
}


