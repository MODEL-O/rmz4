// undefined FUN_080923f0(void)
// entry 0x80923f0


undefined4 FUN_080923f0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined1 *)(param_1 + 0x12) = 0x10;
        *(undefined1 *)(param_1 + 0x25) = 0x17;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == '\0') {
        *(undefined1 *)(param_1 + 0xd) = 4;
        *(undefined1 *)(param_1 + 0xe) = 0;
      }
      FUN_0801cff0(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0x25) = 0x19;
    if (*(byte *)(param_1 + 0x12) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    bVar1 = *(byte *)(param_1 + 0x12) & 1;
    *(byte *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0x12) * 0x300 + DAT_080924ac;
    *(undefined1 *)(param_1 + 0x12) = 0x2a;
    FUN_08005784(param_1 + 0x74,DAT_080924b0);
    FUN_0801cf00(param_1,*(undefined2 *)
                          (((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 2U) + DAT_080924b4));
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


