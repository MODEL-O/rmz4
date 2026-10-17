// undefined FUN_08009fa0(void)
// entry 0x8009fa0


undefined4 FUN_08009fa0(int param_1)

{
  byte bVar1;
  uint uVar2;
  ushort *puVar3;
  undefined4 in_lr;
  uint local_20 [2];
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 0) {
    puVar3 = (ushort *)(((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + DAT_0800a018);
    uVar2 = *(uint *)(param_1 + 100) | DAT_0800a01c;
    *puVar3 = (ushort)uVar2;
    FUN_08128be0(*DAT_0800a020 + DAT_0800a024,(uVar2 & 0x1f00) * 8 + 0x6000000,0x200);
    local_20[0] = (uint)bVar1;
    FUN_08128be0(local_20,(*puVar3 & 0x1f00) * 8 + DAT_0800a028,0x1000200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


