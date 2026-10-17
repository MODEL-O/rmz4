// undefined FUN_0811f0fc(void)
// entry 0x811f0fc


undefined4 FUN_0811f0fc(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  undefined4 in_lr;
  
  sVar5 = *(short *)(param_1 + 4) + -1;
  *(short *)(param_1 + 4) = sVar5;
  iVar4 = DAT_0811f15c;
  iVar3 = DAT_0811f138;
  iVar2 = DAT_0811f134;
  if (sVar5 == 0) {
    *(undefined1 *)(DAT_0811f134 + DAT_0811f138) = 0;
    *(undefined1 *)(iVar2 + iVar3 + -1) = 0;
    *(undefined1 *)(iVar2 + 0x400) = 0;
    *(undefined1 *)(param_1 + 1) = 4;
    FUN_0811f168(param_1);
  }
  else {
    uVar1 = (undefined1)sVar5;
    *(undefined1 *)(DAT_0811f15c + DAT_0811f160) = uVar1;
    *(undefined1 *)(iVar4 + DAT_0811f164) = uVar1;
    *(undefined1 *)(iVar4 + 0x400) = uVar1;
  }
  return in_lr;
}


