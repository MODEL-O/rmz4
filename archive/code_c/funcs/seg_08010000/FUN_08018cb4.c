// undefined FUN_08018cb4(void)
// entry 0x8018cb4


undefined4 FUN_08018cb4(int param_1)

{
  uint uVar1;
  ushort *puVar2;
  undefined4 in_lr;
  uint local_1c [2];
  
  local_1c[0] = (uint)*(byte *)(param_1 + 0xe);
  if (local_1c[0] == 0) {
    puVar2 = (ushort *)(((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 2 + DAT_08018d1c);
    uVar1 = *(uint *)(param_1 + 100) | DAT_08018d20;
    *puVar2 = (ushort)uVar1;
    FUN_08128be0(local_1c,(uVar1 & 0x1f00) * 8 + 0x6000000,DAT_08018d24);
    FUN_08128be0(*DAT_08018d28 + DAT_08018d2c,(*puVar2 & 0x1f00) * 8 + DAT_08018d30,0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


