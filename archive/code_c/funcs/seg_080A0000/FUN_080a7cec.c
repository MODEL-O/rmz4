// undefined FUN_080a7cec(void)
// entry 0x80a7cec


undefined4 FUN_080a7cec(int param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
      uVar4 = *DAT_080a7d78 * DAT_080a7d7c + DAT_080a7d80;
      *DAT_080a7d78 = uVar4 & 0x7fffffff;
      FUN_080e1b98(param_1 + 0x54,(uVar4 & 0x7fffffff) >> 0x10 & 0xff,0x2c0,
                   *(char *)(param_1 + 0x25) + '\x01');
    }
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (0x20 < bVar1) {
      FUN_08002b10(0xa6);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    bVar1 = *(byte *)(param_1 + 0x12);
    if ((bVar1 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (0x78 < bVar1) {
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a7dd0);
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0x10);
    }
  }
  return in_lr;
}


