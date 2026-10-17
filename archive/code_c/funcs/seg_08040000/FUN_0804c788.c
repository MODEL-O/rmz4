// undefined FUN_0804c788(void)
// entry 0x804c788


undefined4 FUN_0804c788(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804c860);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x5b00);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  iVar1 = DAT_0804c864;
  FUN_08005760(param_1 + 0x74,DAT_0804c864,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_0804c868;
  *(byte *)(param_1 + 0xbd) = 0;
  *(undefined1 *)(param_1 + 0xbe) = 2;
  pcVar4 = (char *)(param_1 + 0xbf);
  *pcVar4 = '\x03';
  cVar2 = FUN_0803a4a8(uVar5);
  *pcVar4 = cVar2 + *pcVar4;
  cVar2 = FUN_08038a78(uVar5);
  if (cVar2 != '\0') {
    *pcVar4 = *pcVar4 << 1;
  }
  FUN_08005794(param_1 + 0x74,(uint)*(byte *)(param_1 + 0xbd) * 0x30 + iVar1,*pcVar4,0xffffffff,
               0xffffffff,*(undefined1 *)(param_1 + 0xbe));
  uVar5 = DAT_0804c88c;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar5 = 0x400;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  FUN_0804c728(param_1);
  return in_lr;
}


