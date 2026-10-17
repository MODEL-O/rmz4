// undefined FUN_08089498(void)
// entry 0x8089498


undefined4 FUN_08089498(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_080894f4 + (uint)*(byte *)(param_1 + 0xc0));
    FUN_08005784(param_1 + 0x74,
                 (uint)*(byte *)(*(byte *)(param_1 + 0xc0) + 2 + DAT_080894f8) * 0x18 + DAT_080894fc
                );
    bVar1 = *(byte *)(param_1 + 10);
    bVar3 = bVar1 >> 4 & 1;
    if ((bVar1 >> 4 & 1) == 0) {
      bVar1 = bVar1 & 0xef;
    }
    else {
      bVar1 = bVar1 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4c) = bVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined1 *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
    bVar1 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar1;
    if (bVar1 < 3) {
      *(undefined1 *)(param_1 + 0x12) = 8;
      pbVar4 = (byte *)(param_1 + 0xc0);
      if (bVar1 == 2) {
        FUN_0801cf00(param_1,*(short *)((uint)*(byte *)(param_1 + 0x13) * 2 + DAT_0808959c) +
                             (ushort)*pbVar4);
      }
      if (*(char *)(param_1 + 0x13) == '\x01') {
        FUN_08005784(param_1 + 0x74,
                     (uint)*(byte *)(*pbVar4 + 2 + DAT_080895a0) * 0x18 + DAT_080895a4);
      }
      else {
        FUN_08005784(param_1 + 0x74,
                     (uint)*(byte *)((uint)*pbVar4 + DAT_080895dc) * 0x18 + DAT_080895e0);
      }
    }
    else {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if (*(char *)(param_1 + 0x13) == '\x01') {
      bVar1 = *(byte *)(param_1 + 10);
      bVar3 = bVar1 >> 4 & 1 ^ 1;
      if (bVar3 == 0) {
        bVar1 = bVar1 & 0xef;
      }
      else {
        bVar1 = bVar1 | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(byte *)(param_1 + 0x4c) = bVar3;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
    }
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


