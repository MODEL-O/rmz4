// undefined FUN_08117d2c(void)
// entry 0x8117d2c


undefined4 FUN_08117d2c(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  undefined4 in_lr;
  
  sVar5 = *(short *)(param_1 + 4) + 1;
  *(short *)(param_1 + 4) = sVar5;
  iVar4 = DAT_08117d9c;
  iVar3 = DAT_08117d98;
  iVar2 = DAT_08117d64;
  if (sVar5 < 0x10) {
    uVar1 = (undefined1)sVar5;
    *(undefined1 *)(DAT_08117d98 + DAT_08117d9c) = uVar1;
    *(undefined1 *)(iVar3 + iVar4 + -1) = uVar1;
    *(undefined1 *)(iVar3 + 0x400) = uVar1;
  }
  else {
    *(undefined1 *)(DAT_08117d64 + DAT_08117d68) = 0x20;
    *(undefined1 *)(iVar2 + DAT_08117d6c) = 0x20;
    *(undefined1 *)(iVar2 + 0x400) = 0x20;
    *(undefined1 *)(param_1 + 1) = 2;
    FUN_08117da0(param_1);
  }
  FUN_08117ff4(param_1);
  return in_lr;
}


