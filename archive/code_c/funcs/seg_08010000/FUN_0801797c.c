// undefined FUN_0801797c(void)
// entry 0x801797c


undefined4 FUN_0801797c(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  undefined4 in_lr;
  uint local_20 [2];
  
  iVar2 = DAT_080179fc;
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 0) {
    uVar3 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    puVar5 = (ushort *)(uVar3 * 2 + DAT_080179fc);
    uVar4 = *(uint *)(param_1 + 100) | DAT_08017a00;
    *puVar5 = (ushort)uVar4;
    *(undefined4 *)(uVar3 * 4 + iVar2 + 8) = 0;
    FUN_08128be0(*DAT_08017a04 + DAT_08017a08,(uVar4 & 0x1f00) * 8 + 0x6000000,0x200);
    local_20[0] = (uint)bVar1;
    FUN_08128be0(local_20,(*puVar5 & 0x1f00) * 8 + DAT_08017a0c,0x1000200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


