// undefined FUN_0811f9a0(void)
// entry 0x811f9a0


undefined4 FUN_0811f9a0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  undefined4 in_lr;
  
  sVar4 = *(short *)(param_1 + 4) + 1;
  *(short *)(param_1 + 4) = sVar4;
  iVar3 = DAT_0811fa08;
  iVar2 = DAT_0811f9dc;
  if (sVar4 < 0x10) {
    uVar1 = (undefined1)sVar4;
    *(undefined1 *)(DAT_0811fa08 + DAT_0811fa0c) = uVar1;
    *(undefined1 *)(iVar3 + DAT_0811fa10) = uVar1;
    *(undefined1 *)(iVar3 + 0x400) = uVar1;
  }
  else {
    *(undefined1 *)(DAT_0811f9dc + DAT_0811f9e0) = 0x20;
    *(undefined1 *)(iVar2 + DAT_0811f9e4) = 0x20;
    *(undefined1 *)(iVar2 + 0x400) = 0x20;
    *(undefined1 *)(param_1 + 1) = 2;
    *(undefined1 *)(param_1 + 2) = 0;
    FUN_0811fa14(param_1);
  }
  return in_lr;
}


