// undefined FUN_080b0b08(void)
// entry 0x80b0b08


undefined4 FUN_080b0b08(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = FUN_080b0d28(param_1);
    FUN_080b0ccc(param_1);
    iVar3 = DAT_080b0bc8;
    iVar2 = *(short *)(((uVar1 & 0xff) + 0x40 & 0xff) * 2 + DAT_080b0bc8) * 0x280;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
    iVar3 = *(short *)((uVar1 & 0xff) * 2 + iVar3) * 0x280;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar3 >> 8;
    FUN_08002b10(0x6b);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  uVar1 = FUN_0801fb14(DAT_080b0bcc,param_1 + 0x54);
  if (0x1600 < uVar1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b0bd0);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0xc);
  }
  return in_lr;
}


