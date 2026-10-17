// undefined FUN_0812246c(void)
// entry 0x812246c


undefined4 FUN_0812246c(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  undefined4 in_lr;
  
  FUN_080025d8(0x33);
  FUN_080025d8(0x79);
  sVar6 = *(short *)(param_1 + 4) + -1;
  *(short *)(param_1 + 4) = sVar6;
  iVar5 = DAT_081224fc;
  iVar4 = DAT_081224f8;
  iVar3 = DAT_081224b8;
  iVar2 = DAT_081224b4;
  if (sVar6 == 0) {
    *(undefined1 *)(DAT_081224b4 + DAT_081224b8) = 0;
    *(undefined1 *)(iVar2 + iVar3 + -1) = 0;
    *(undefined1 *)(iVar2 + 0x400) = 0;
    *(undefined1 *)(param_1 + 1) = 4;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    FUN_08122508(param_1);
  }
  else {
    uVar1 = (undefined1)sVar6;
    *(undefined1 *)(DAT_081224f8 + DAT_081224fc) = uVar1;
    *(undefined1 *)(iVar4 + iVar5 + -1) = uVar1;
    *(undefined1 *)(iVar4 + 0x400) = uVar1;
  }
  FUN_0810d85c((uint)*(ushort *)(DAT_08122500 + 0x690) + DAT_08122504,1,0x12);
  FUN_081228c8(param_1);
  return in_lr;
}


