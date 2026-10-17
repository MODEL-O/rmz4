// undefined FUN_080eb7d0(void)
// entry 0x80eb7d0


undefined4 FUN_080eb7d0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      FUN_0801cff0(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      cVar2 = '\0';
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
      goto LAB_080eb85e;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x10) * 8 + DAT_080eb840 + 4));
    *(undefined1 *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 != '\0') {
    return in_lr;
  }
  FUN_08002b10(*(undefined2 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080eb844 + 2));
  FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x10) * 8 + DAT_080eb840 + 6));
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_080eb85e:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}


