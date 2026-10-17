// undefined FUN_0806f1d8(void)
// entry 0x806f1d8


undefined4 FUN_0806f1d8(int param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 in_lr;
  undefined1 auStack_20 [4];
  byte abStack_1c [4];
  
  FUN_08129258(auStack_20,DAT_0806f214,2);
  FUN_08129258(abStack_1c,DAT_0806f218,2);
  bVar1 = (byte)*(ushort *)(DAT_0806f21c + 8) & 8;
  if ((*(ushort *)(DAT_0806f21c + 8) & 8) == 0) {
    pbVar4 = (byte *)(param_1 + 0xb7);
    pbVar3 = (byte *)(param_1 + 0xb6);
    if (1 < *pbVar4) {
      abStack_1c[*pbVar3] = bVar1;
    }
    uVar2 = FUN_0806f304(abStack_1c,2);
    *(undefined1 *)(param_1 + 0xd) = auStack_20[uVar2];
    *(byte *)(param_1 + 0xe) = bVar1;
    *(byte *)(param_1 + 0xf) = bVar1;
    if (uVar2 == *pbVar3) {
      *pbVar4 = *pbVar4 + 1;
    }
    else {
      *pbVar4 = 1;
      *pbVar3 = (byte)uVar2;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 10;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


