// undefined FUN_080aa954(void)
// entry 0x80aa954


undefined4 FUN_080aa954(int param_1)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xb4) == '\0') {
      FUN_08005784(param_1 + 0x74,DAT_080aa99c);
      FUN_0801cf00(param_1,DAT_080aa9a0);
      bVar1 = *(byte *)(param_1 + 10);
      bVar3 = ~(bVar1 >> 4) & 1;
      if (bVar3 == 0) {
        bVar1 = bVar1 & 0xef;
      }
      else {
        bVar1 = bVar1 | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(byte *)(param_1 + 0x4c) = bVar3;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
      iVar2 = *(int *)(param_1 + 0x5c) * -0x100;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      *(int *)(param_1 + 0x5c) = iVar2 >> 8;
      iVar2 = *(int *)(param_1 + 0x60) * -0x100;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      *(int *)(param_1 + 0x60) = iVar2 >> 8;
    }
    else {
      FUN_0801cf00(param_1,DAT_080aa974);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(char *)(param_1 + 0xb4) == '\0') {
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 3;
    }
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


