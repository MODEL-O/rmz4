// undefined FUN_0811c4e8(void)
// entry 0x811c4e8


undefined4 FUN_0811c4e8(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  undefined4 in_lr;
  
  sVar4 = *(short *)(param_1 + 4) + 1;
  *(short *)(param_1 + 4) = sVar4;
  iVar3 = DAT_0811c550;
  iVar2 = DAT_0811c524;
  if (sVar4 < 0x10) {
    uVar1 = (undefined1)sVar4;
    *(undefined1 *)(DAT_0811c550 + DAT_0811c554) = uVar1;
    *(undefined1 *)(iVar3 + DAT_0811c558) = uVar1;
    *(undefined1 *)(iVar3 + 0x400) = uVar1;
  }
  else {
    *(undefined1 *)(DAT_0811c524 + DAT_0811c528) = 0x20;
    *(undefined1 *)(iVar2 + DAT_0811c52c) = 0x20;
    *(undefined1 *)(iVar2 + 0x400) = 0x20;
    *(undefined1 *)(param_1 + 1) = 2;
    *(undefined1 *)(param_1 + 2) = 1;
    FUN_0811c55c(param_1);
  }
  return in_lr;
}


