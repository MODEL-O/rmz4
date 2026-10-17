// undefined FUN_080b4f38(void)
// entry 0x80b4f38


undefined4 FUN_080b4f38(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,(uint)*(byte *)(param_1 + 0xb6) * 3 + DAT_080b5064 & 0xffff);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    FUN_08002b10(DAT_080b5068);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = FUN_080b55f8(param_1);
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar5;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  if ((*(char *)(param_1 + 0xe) == '\x02') &&
     (sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),iVar5), sVar2 != 0)) {
    FUN_0801cf00(param_1,(uint)*(byte *)(param_1 + 0xb6) * 3 + DAT_080b506c & 0xffff);
    uVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      FUN_0801cf00(param_1,(uint)*(byte *)(param_1 + 0xb6) * 3 + DAT_080b5070 & 0xffff);
      iVar5 = DAT_080b5074;
      iVar4 = *(short *)(DAT_080b5074 + 0x1a0) * 0x480;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      *(int *)(param_1 + 0x5c) = iVar4 >> 8;
      iVar5 = *(short *)(iVar5 + 0x120) * 0x480;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xff;
      }
      *(int *)(param_1 + 0x60) = iVar5 >> 8;
      *(undefined4 *)(param_1 + 0x68) = 0x40;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        iVar5 = (iVar4 >> 8) * -0x100;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0xff;
        }
        *(int *)(param_1 + 0x5c) = iVar5 >> 8;
      }
      if (*(byte *)(param_1 + 0xb6) != 0) {
        iVar5 = *(int *)(param_1 + 0x5c) * -0x100;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0xff;
        }
        *(int *)(param_1 + 0x5c) = iVar5 >> 8;
      }
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      cVar1 = '\0';
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    *(char *)(param_1 + 0xe) = cVar1;
  }
  return in_lr;
}


