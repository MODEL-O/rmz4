// undefined FUN_080af0b8(void)
// entry 0x80af0b8


undefined4 FUN_080af0b8(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_080af0dc);
    if (*(byte *)(param_1 + 0xbc) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    bVar1 = *(byte *)(param_1 + 0xbc) & 1;
    *(byte *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 100) = 0xfffffff0;
    }
    else {
      *(undefined4 *)(param_1 + 100) = 0x10;
    }
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) << 4;
    *(undefined4 *)(param_1 + 0x68) = 8;
    *(undefined4 *)(param_1 + 0x60) = 0x80;
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    uVar4 = (int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 0x10;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar4 = uVar4 | 1;
    }
    FUN_080d4c8c(param_1 + 0x54,DAT_080af14c,0,uVar4);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x68);
  if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080af1d0);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0x10);
  }
  return in_lr;
}


