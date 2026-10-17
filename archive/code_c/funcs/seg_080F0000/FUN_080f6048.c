// undefined FUN_080f6048(void)
// entry 0x80f6048


undefined4 FUN_080f6048(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080f60d4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar2 = *(int *)(param_1 + 0x5c) + 0x10;
  *(int *)(param_1 + 0x5c) = iVar2;
  if (0x380 < iVar2) {
    *(undefined4 *)(param_1 + 0x5c) = 0x380;
  }
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  if (DAT_080f60d8 < iVar2) {
    if ((0x300 < *(int *)(param_1 + 0x5c)) &&
       (uVar1 = *(ushort *)(DAT_080f60dc + 8), (uVar1 & 8) == 0)) {
      iVar2 = *DAT_080f60e0;
      *(undefined1 *)(iVar2 + 0xd) = 1;
      *(byte *)(iVar2 + 0xe) = (byte)uVar1 & 8;
      *(undefined1 *)(iVar2 + 0xf) = 2;
      FUN_08002b10(0x38);
    }
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(int *)(param_1 + 0x54) = DAT_080f60d8;
  }
  if (*(int *)(param_1 + 0x54) <= DAT_080f60e4) {
    *(int *)(param_1 + 0x54) = DAT_080f60e4 + 1;
  }
  iVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar2 + DAT_080f60e8;
  return in_lr;
}


