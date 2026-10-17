// undefined FUN_08079e14(void)
// entry 0x8079e14


undefined4 FUN_08079e14(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0xb4) < *(int *)(param_1 + 0x54)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x80;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801c560(0);
    FUN_0801cc9c(param_1);
    FUN_0801ceec(param_1);
    FUN_0801cf00(param_1,DAT_08079f48);
    FUN_08001d30(DAT_08079f4c,
                 ((uint)*(ushort *)(DAT_08079f50 + 0x1b0) -
                 (uint)(*(ushort *)(DAT_08079f4c + 6) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(DAT_08079f54,
                 ((uint)*(ushort *)(DAT_08079f58 + 0x1b0) - (uint)*(byte *)(DAT_08079f54 + 7)) *
                 0x20 + 0x200);
    uVar2 = FUN_080b7ce8(param_1,0,0);
    *(undefined4 *)(param_1 + 0xd0) = uVar2;
    FUN_080b84a8(param_1,0,0);
    FUN_080b84a8(param_1,1,0);
    FUN_080fe6b8(param_1,0,0);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4) + 0x1000;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) == '\x01') {
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_08079e70);
    FUN_0801cff0(param_1);
    FUN_080cd938(param_1,0,0);
    FUN_08002b10(0x194);
    FUN_08002b10(DAT_08079e74);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    return in_lr;
  }
  if ((CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) == DAT_08079f5c) &&
     (*(char *)(param_1 + 0x73) == '\x03')) {
    FUN_0801cf00(param_1,DAT_08079f5c - 6);
  }
  FUN_0801cff0(param_1);
  bVar1 = *(byte *)(DAT_08079f60 + 0x12);
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(byte *)(param_1 + 0xe) = bVar1 & 1;
  }
  return in_lr;
}


