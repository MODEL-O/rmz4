// undefined FUN_0811df04(void)
// entry 0x811df04


undefined4 FUN_0811df04(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  undefined4 in_lr;
  
  FUN_0810d85c((uint)*(ushort *)(DAT_0811df68 + 0x78) + DAT_0811df6c,8,0xd);
  FUN_0811ebb0(param_1);
  FUN_080025d8(0x3f);
  FUN_080025d8(0x40);
  sVar4 = *(short *)(param_1 + 4) + 1;
  *(short *)(param_1 + 4) = sVar4;
  iVar3 = DAT_0811df9c;
  iVar2 = DAT_0811df70;
  if (sVar4 < 0x10) {
    uVar1 = (undefined1)sVar4;
    *(undefined1 *)(DAT_0811df9c + DAT_0811dfa0) = uVar1;
    *(undefined1 *)(iVar3 + DAT_0811dfa4) = uVar1;
    *(undefined1 *)(iVar3 + 0x400) = uVar1;
  }
  else {
    *(undefined1 *)(DAT_0811df70 + DAT_0811df74) = 0x20;
    *(undefined1 *)(iVar2 + DAT_0811df78) = 0x20;
    *(undefined1 *)(iVar2 + 0x400) = 0x20;
    *(undefined1 *)(param_1 + 1) = 2;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    FUN_0811dfa8(param_1);
  }
  return in_lr;
}


