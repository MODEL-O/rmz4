// undefined FUN_08092034(void)
// entry 0x8092034


undefined4 FUN_08092034(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  iVar4 = *(int *)(param_1 + 0x2c);
  if (((*(char *)(iVar3 + 8) != '\x03') || (*(char *)(iVar3 + 9) != '\x16')) || (iVar3 == iVar4))
  goto LAB_080920b6;
  if (*(byte *)(iVar3 + 0xd) < 6) {
    if (*(int *)(iVar4 + 0x60) < 1) goto LAB_080920b6;
    *(char *)(iVar4 + 0xbd) = *(char *)(iVar4 + 0xbd) + -1;
    *(undefined4 *)(iVar4 + 0x60) = DAT_08092074;
    uVar2 = DAT_08092078;
    if (0 < *(int *)(iVar4 + 0x5c)) {
LAB_080920b0:
      uVar2 = 0x100;
    }
  }
  else {
    if (*(char *)(iVar3 + 0xbe) == '\x01') {
      *(undefined1 *)(iVar4 + 0xbd) = 0;
      goto LAB_080920b6;
    }
    if (*(int *)(iVar4 + 0x60) < 1) goto LAB_080920b6;
    *(char *)(iVar4 + 0xbd) = *(char *)(iVar4 + 0xbd) + -1;
    uVar2 = DAT_080920ac;
    if (*(int *)(iVar4 + 0x5c) < 1) goto LAB_080920b0;
  }
  *(undefined4 *)(iVar4 + 0x5c) = uVar2;
LAB_080920b6:
  if ((((byte)(*(char *)(iVar4 + 0xd) - 1U) < 8) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0)) &&
     (*DAT_080920f8 != 0)) {
    cVar1 = FUN_0803a578(*DAT_080920f8,8,0);
    *(char *)(iVar4 + 0xbf) = cVar1;
    if (cVar1 != '\0') {
      *(undefined1 *)(iVar4 + 0xd) = 10;
      *(undefined1 *)(iVar4 + 0xe) = 0;
    }
  }
  return in_lr;
}


