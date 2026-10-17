// undefined FUN_080a89b0(void)
// entry 0x80a89b0


undefined4 FUN_080a89b0(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0x12) =
         *(undefined1 *)((uint)*(byte *)(param_1 + 0x10) + DAT_080a8a08);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      *(undefined1 *)(param_1 + 0x12) = 0;
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
  }
  else if (*(char *)(param_1 + 0xf) == '\x01') {
    if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
      uVar5 = *DAT_080a8a68 * DAT_080a8a6c + DAT_080a8a70;
      *DAT_080a8a68 = uVar5 & 0x7fffffff;
      FUN_080e1b98(param_1 + 0x54,(uVar5 & 0x7fffffff) >> 0x10 & 0xff,0x200,
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
      bVar3 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (0x78 < bVar1) {
      piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a8ac0);
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0x10);
    }
  }
  return in_lr;
}


