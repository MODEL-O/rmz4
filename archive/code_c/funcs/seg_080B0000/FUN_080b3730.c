// undefined FUN_080b3730(void)
// entry 0x80b3730


undefined4 FUN_080b3730(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_lr;
  
  uVar3 = FUN_080b381c();
  iVar1 = DAT_080b37a4;
  iVar4 = *(short *)(((uVar3 & 0xff) + 0x40 & 0xff) * 2 + DAT_080b37a4) * -0x200;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar4 >> 8);
  iVar4 = *(short *)((uVar3 & 0xff) * 2 + iVar1) * -0x200;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar4 >> 8);
  *(undefined1 *)(param_1 + 0xb6) = 0;
  cVar2 = FUN_08014654(param_1 + 0x54);
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  else {
    piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b37a8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 8);
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


