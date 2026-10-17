// undefined FUN_08054ff0(void)
// entry 0x8054ff0


undefined4 FUN_08054ff0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 in_lr;
  undefined1 auStack_10 [4];
  
  FUN_08129258(auStack_10,DAT_0805501c,3);
  bVar1 = (byte)*(ushort *)(DAT_08055020 + 8) & 8;
  if ((*(ushort *)(DAT_08055020 + 8) & 8) == 0) {
    pbVar2 = (byte *)(param_1 + 0xb5);
    *(undefined1 *)(param_1 + 0xd) = auStack_10[*pbVar2];
    *(byte *)(param_1 + 0xe) = bVar1;
    *(byte *)(param_1 + 0xf) = bVar1;
    *pbVar2 = *pbVar2 + 1;
    bVar1 = FUN_08129198(*pbVar2,3);
    *pbVar2 = bVar1;
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


