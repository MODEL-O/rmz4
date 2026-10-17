// undefined FUN_0801ba88(void)
// entry 0x801ba88


undefined4 FUN_0801ba88(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  uint local_20 [2];
  
  iVar2 = DAT_0801bb00;
  bVar1 = *(byte *)(param_1 + 0xe);
  local_20[0] = (uint)bVar1;
  if (local_20[0] == 0) {
    uVar3 = *(uint *)(param_1 + 0x5c);
    uVar4 = (uVar3 & 0xffff) >> 4;
    uVar5 = *(uint *)(param_1 + 100) | DAT_0801bb04;
    *(short *)(uVar4 * 2 + DAT_0801bb00) = (short)uVar5;
    *(undefined4 *)(uVar4 * 4 + iVar2 + 8) = 0;
    FUN_08128be0(local_20,(uVar5 & 0x1f00) * 8 + 0x6000000,DAT_0801bb08);
    FUN_08002734(uVar3 & 0xff,DAT_0801bb0c,99,0,0);
    *(ushort *)(param_1 + 0x12) = (ushort)bVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + -1;
  return in_lr;
}


