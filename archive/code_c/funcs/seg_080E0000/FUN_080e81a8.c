// undefined FUN_080e81a8(void)
// entry 0x80e81a8


undefined4 FUN_080e81a8(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_1 + 0x12);
  if (*(char *)(param_1 + 0x11) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -0x18;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + '\x18';
  }
  *(char *)(param_1 + 0x12) = cVar1;
  sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar4 = DAT_080e8268;
  pcVar6 = (char *)(param_1 + 0x7c);
  if (sVar2 != 0) {
    if (*pcVar6 == '\0') {
      iVar3 = *(short *)(DAT_080e8268 + 0xec) * 0x380;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *(int *)(param_1 + 0x5c) = iVar3 >> 8;
      iVar4 = *(short *)(iVar4 + 0x6c) * 0x380;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      *(int *)(param_1 + 0x60) = iVar4 >> 8;
      iVar4 = (iVar4 >> 8) * -0x100;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      *(int *)(param_1 + 0x60) = iVar4 >> 8;
      if (*(char *)(param_1 + 0x11) == '\0') {
        iVar4 = (iVar3 >> 8) * -0x100;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0xff;
        }
        *(int *)(param_1 + 0x5c) = iVar4 >> 8;
      }
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        iVar4 = *(int *)(param_1 + 0x5c) * -0x100;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 0xff;
        }
        *(int *)(param_1 + 0x5c) = iVar4 >> 8;
      }
      *pcVar6 = '\x01';
    }
    else {
      piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e829c);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 8);
    }
  }
  if (*pcVar6 == '\x01') {
    pcVar6 = (char *)(param_1 + 0x7d);
    if (*pcVar6 == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *pcVar6 = '\x01';
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *pcVar6 = '\0';
    }
  }
  return in_lr;
}


