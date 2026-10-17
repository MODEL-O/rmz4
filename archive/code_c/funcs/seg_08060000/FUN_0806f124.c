// undefined FUN_0806f124(void)
// entry 0x806f124


undefined4 FUN_0806f124(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  byte abStack_18 [4];
  
  FUN_08129258(auStack_1c,DAT_0806f160,3);
  FUN_08129258(abStack_18,DAT_0806f164,3);
  bVar1 = (byte)*(ushort *)(DAT_0806f168 + 8) & 8;
  if ((*(ushort *)(DAT_0806f168 + 8) & 8) == 0) {
    pbVar2 = (byte *)(param_1 + 0xb5);
    pbVar4 = (byte *)(param_1 + 0xb4);
    if (1 < *pbVar2) {
      abStack_18[*pbVar4] = bVar1;
    }
    if ((*(byte *)(*DAT_0806f1c0 + 1) < 5) || ((*(byte *)(DAT_0806f1c4 + 4) & 4) != 0)) {
      abStack_18[2] = bVar1;
    }
    uVar3 = FUN_0806f304(abStack_18,3);
    *(undefined1 *)(param_1 + 0xd) = auStack_1c[uVar3];
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    if (uVar3 == *pbVar4) {
      *pbVar2 = *pbVar2 + 1;
    }
    else {
      *pbVar2 = 1;
      *pbVar4 = (byte)uVar3;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 9;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


