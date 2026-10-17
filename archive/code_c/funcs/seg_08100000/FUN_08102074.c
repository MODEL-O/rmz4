// undefined FUN_08102074(void)
// entry 0x8102074


undefined4 FUN_08102074(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar3 + 0x28);
  FUN_0801cc9c(iVar3);
  FUN_0801cf00(iVar3,*(undefined2 *)(iVar3 + 0xc0));
  *(byte *)(iVar3 + 0x49) = *(byte *)(iVar3 + 0x49) & 0xf3;
  FUN_0801cff0(iVar3);
  iVar1 = *param_2 + *(int *)(iVar2 + 0x54) + 0x7800;
  *(int *)(iVar3 + 0x54) = iVar1;
  *(int *)(iVar3 + 0x58) = param_2[1] + *(int *)(iVar2 + 0x58) + DAT_081020c8;
  iVar2 = DAT_081020cc;
  if ((*(char *)(iVar3 + 0x11) != '\0') && (iVar2 = DAT_0810210c, *(char *)(iVar3 + 0x11) == '\x01')
     ) {
    iVar2 = DAT_081020d8;
  }
  *(int *)(iVar3 + 0x54) = iVar1 + iVar2;
  *(int *)(iVar3 + 0x40) = iVar3 + 0x54;
  FUN_08128f84(param_1,param_2,*(undefined4 *)(param_1 + 4));
  FUN_08002c94(iVar3 + 0x34,DAT_08102110);
  *(int *)(iVar3 + 0x3c) = iVar3;
  *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xf7;
  return in_lr;
}


