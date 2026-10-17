// undefined FUN_080bd43c(void)
// entry 0x80bd43c


undefined8 FUN_080bd43c(undefined4 *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar3 = FUN_08005500(*DAT_080bd4c8);
  if (iVar3 != 0) {
    *(undefined1 *)(iVar3 + 0x25) = 8;
    puVar1 = DAT_080bd4cc;
    *(undefined1 *)(iVar3 + 9) = 0;
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)*puVar1;
    *(undefined2 *)(iVar3 + 0x20) = 0;
    *(undefined1 *)(iVar3 + 0x22) = 0;
    *(undefined4 *)(iVar3 + 0x54) = *param_1;
    *(undefined4 *)(iVar3 + 0x58) = param_1[1];
    uVar4 = (param_3 & 0xff) + 0x80 & 0xff;
    *(int *)(iVar3 + 0xb4) = param_2;
    iVar2 = DAT_080bd4d0;
    iVar5 = param_2 * *(short *)((uVar4 + 0x40 & 0xff) * 2 + DAT_080bd4d0);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(iVar3 + 0x5c) = iVar5 >> 8;
    param_2 = param_2 * *(short *)(uVar4 * 2 + iVar2);
    if (param_2 < 0) {
      param_2 = param_2 + 0xff;
    }
    *(int *)(iVar3 + 0x60) = param_2 >> 8;
    *(undefined1 *)(iVar3 + 0x10) = 1;
    *(undefined1 *)(iVar3 + 0x11) = 0;
  }
  return CONCAT44(in_lr,iVar3);
}


