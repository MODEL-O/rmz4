// undefined FUN_0811facc(void)
// entry 0x811facc


undefined4 FUN_0811facc(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  undefined4 in_lr;
  
  sVar5 = *(short *)(param_1 + 4) + -1;
  *(short *)(param_1 + 4) = sVar5;
  iVar4 = DAT_0811fb2c;
  iVar3 = DAT_0811fb08;
  iVar2 = DAT_0811fb04;
  if (sVar5 == 0) {
    *(undefined1 *)(DAT_0811fb04 + DAT_0811fb08) = 0;
    *(undefined1 *)(iVar2 + iVar3 + -1) = 0;
    *(undefined1 *)(iVar2 + 0x400) = 0;
    *(undefined1 *)(param_1 + 1) = 4;
    FUN_0811fb38(param_1);
  }
  else {
    uVar1 = (undefined1)sVar5;
    *(undefined1 *)(DAT_0811fb2c + DAT_0811fb30) = uVar1;
    *(undefined1 *)(iVar4 + DAT_0811fb34) = uVar1;
    *(undefined1 *)(iVar4 + 0x400) = uVar1;
  }
  return in_lr;
}


