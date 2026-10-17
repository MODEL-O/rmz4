// undefined FUN_080b3654(void)
// entry 0x80b3654


undefined4 FUN_080b3654(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar2 = FUN_0807fa18(param_1 + 0x54,0x5c,0,0);
  if ((iVar2 != 0) && (*(char *)(iVar2 + 0xb5) == '\0')) {
    iVar4 = *(int *)(iVar2 + 0x54) - *(int *)(param_1 + 0x54);
    if (iVar4 < 0) {
      if (DAT_080b36a8 < *(int *)(param_1 + 0x54) - *(int *)(iVar2 + 0x54)) goto LAB_080b36f4;
    }
    else if (DAT_080b3684 < iVar4) goto LAB_080b36f4;
    iVar4 = *(int *)(param_1 + 0x58) + 0x800;
    iVar5 = *(int *)(iVar2 + 0x58) - iVar4;
    if (iVar5 < 0) {
      if (DAT_080b36e4 < iVar4 - *(int *)(iVar2 + 0x58)) goto LAB_080b36f4;
    }
    else if (DAT_080b36a8 < iVar5) goto LAB_080b36f4;
    uVar3 = *DAT_080b36e8 * DAT_080b36ec + DAT_080b36f0;
    *DAT_080b36e8 = uVar3 & 0x7fffffff;
    bVar1 = FUN_08129198((uVar3 & 0x7fffffff) >> 0x10,0xc);
    if (bVar1 < 4) {
      *(int *)(param_1 + 0x2c) = iVar2;
      *(undefined1 *)(param_1 + 0xd) = 2;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  }
LAB_080b36f4:
  *(undefined1 *)(param_1 + 0x11) = 0x3c;
  return in_lr;
}


