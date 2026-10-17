// undefined FUN_08017f98(void)
// entry 0x8017f98


undefined4 FUN_08017f98(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  undefined4 in_lr;
  
  iVar1 = DAT_08018008;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    puVar4 = (ushort *)(uVar2 * 2 + DAT_08018008);
    uVar3 = *(uint *)(param_1 + 100) | DAT_0801800c;
    *puVar4 = (ushort)uVar3;
    *(undefined4 *)(uVar2 * 4 + iVar1 + 8) = 0;
    FUN_08128be0(*DAT_08018010 + DAT_08018014,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    FUN_08128be0(*DAT_08018018 + DAT_0801801c,(*puVar4 & 0x1f00) * 8 + DAT_08018020,0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


