// undefined FUN_0811e9a8(void)
// entry 0x811e9a8


undefined4 FUN_0811e9a8(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  undefined4 in_lr;
  
  FUN_080025d8(0x3f);
  FUN_080025d8(0x40);
  sVar6 = *(short *)(param_1 + 4) + -1;
  *(short *)(param_1 + 4) = sVar6;
  iVar5 = DAT_0811ea1c;
  iVar4 = DAT_0811ea18;
  iVar3 = DAT_0811e9f4;
  iVar2 = DAT_0811e9f0;
  if (sVar6 == 0) {
    *(undefined1 *)(DAT_0811e9f0 + DAT_0811e9f4) = 0;
    *(undefined1 *)(iVar2 + iVar3 + -1) = 0;
    *(undefined1 *)(iVar2 + 0x400) = 0;
    *(undefined1 *)(param_1 + 1) = 4;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    FUN_0811ea20(param_1);
  }
  else {
    uVar1 = (undefined1)sVar6;
    *(undefined1 *)(DAT_0811ea18 + DAT_0811ea1c) = uVar1;
    *(undefined1 *)(iVar4 + iVar5 + -1) = uVar1;
    *(undefined1 *)(iVar4 + 0x400) = uVar1;
  }
  return in_lr;
}


