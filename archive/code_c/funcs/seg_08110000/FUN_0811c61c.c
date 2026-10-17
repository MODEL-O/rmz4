// undefined FUN_0811c61c(void)
// entry 0x811c61c


undefined4 FUN_0811c61c(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  undefined4 in_lr;
  
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 2) * 4 + DAT_0811c664));
  sVar6 = *(short *)(param_1 + 4) + -1;
  *(short *)(param_1 + 4) = sVar6;
  iVar5 = DAT_0811c694;
  iVar4 = DAT_0811c690;
  iVar3 = DAT_0811c66c;
  iVar2 = DAT_0811c668;
  if (sVar6 == 0) {
    *(undefined1 *)(DAT_0811c668 + DAT_0811c66c) = 0;
    *(undefined1 *)(iVar2 + iVar3 + -1) = 0;
    *(undefined1 *)(iVar2 + 0x400) = 0;
    *(undefined1 *)(param_1 + 1) = 4;
    FUN_0811c698(param_1);
  }
  else {
    uVar1 = (undefined1)sVar6;
    *(undefined1 *)(DAT_0811c690 + DAT_0811c694) = uVar1;
    *(undefined1 *)(iVar4 + iVar5 + -1) = uVar1;
    *(undefined1 *)(iVar4 + 0x400) = uVar1;
  }
  return in_lr;
}


