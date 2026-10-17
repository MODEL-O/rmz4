// undefined FUN_08009fa0(void)
// entry 0x8009fa0


void FUN_08009fa0(int param_1)

{
  byte bVar1;
  uint uVar2;
  ushort *puVar3;
  uint local_20 [2];
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 0) {
    puVar3 = (ushort *)(((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + 0x02000a04);
    uVar2 = *(uint *)(param_1 + 100) | 0x00004046;
    *puVar3 = (ushort)uVar2;
    FUN_08128be0((*(int *)0x08b2c0a8) + 0x08b2c0b0,(uVar2 & 0x1f00) * 8 + 0x6000000,0x200);
    local_20[0] = (uint)bVar1;
    FUN_08128be0(local_20,(*puVar3 & 0x1f00) * 8 + 0x06000800,0x1000200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return;
}


