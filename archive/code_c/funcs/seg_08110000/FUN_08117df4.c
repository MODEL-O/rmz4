// undefined FUN_08117df4(void)
// entry 0x8117df4


undefined4 FUN_08117df4(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  undefined4 in_lr;
  
  sVar5 = *(short *)(param_1 + 4) + -1;
  *(short *)(param_1 + 4) = sVar5;
  iVar4 = DAT_08117e54;
  iVar3 = DAT_08117e30;
  iVar2 = DAT_08117e2c;
  if (sVar5 == 0) {
    *(undefined1 *)(DAT_08117e2c + DAT_08117e30) = 0;
    *(undefined1 *)(iVar2 + iVar3 + -1) = 0;
    *(undefined1 *)(iVar2 + 0x400) = 0;
    *(undefined1 *)(param_1 + 1) = 4;
    FUN_08117e60(param_1);
  }
  else {
    uVar1 = (undefined1)sVar5;
    *(undefined1 *)(DAT_08117e54 + DAT_08117e58) = uVar1;
    *(undefined1 *)(iVar4 + DAT_08117e5c) = uVar1;
    *(undefined1 *)(iVar4 + 0x400) = uVar1;
  }
  return in_lr;
}


