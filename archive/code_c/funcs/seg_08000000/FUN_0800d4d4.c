// undefined FUN_0800d4d4(void)
// entry 0x800d4d4


undefined4 FUN_0800d4d4(int param_1)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  undefined4 in_lr;
  uint local_28 [2];
  
  iVar1 = DAT_0800d568;
  local_28[0] = (uint)*(byte *)(param_1 + 0xe);
  if (local_28[0] == 0) {
    uVar4 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    puVar3 = (ushort *)(uVar4 * 2 + DAT_0800d568);
    uVar2 = *(uint *)(param_1 + 100) | DAT_0800d56c;
    *puVar3 = (ushort)uVar2;
    FUN_08128be0(local_28,(uVar2 & 0x1f00) * 8 + 0x6000000,DAT_0800d570);
    FUN_08128be0(*DAT_0800d574 + DAT_0800d578,(*puVar3 & 0x1f00) * 8 + DAT_0800d57c,0x200);
    *(undefined4 *)(uVar4 * 4 + iVar1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x4c) = DAT_0800d580;
    *(undefined4 *)(param_1 + 0x50) = 0x250;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


