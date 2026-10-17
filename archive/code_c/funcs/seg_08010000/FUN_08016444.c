// undefined FUN_08016444(void)
// entry 0x8016444


undefined4 FUN_08016444(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  undefined4 in_lr;
  undefined4 local_1c [2];
  
  iVar1 = DAT_080164c8;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    puVar4 = (ushort *)(uVar2 * 2 + DAT_080164c8);
    uVar3 = *(uint *)(param_1 + 100) | DAT_080164cc;
    *puVar4 = (ushort)uVar3;
    *(undefined4 *)(uVar2 * 4 + iVar1 + 8) = 0;
    FUN_08128be0(*DAT_080164d0 + DAT_080164d4,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    local_1c[0] = DAT_080164d8;
    FUN_08128be0(local_1c,(*puVar4 & 0x1f00) * 8 + DAT_080164dc,0x1000200);
    *(undefined4 *)(param_1 + 0x4c) = 0xf0;
    *(undefined4 *)(param_1 + 0x50) = 0xd8;
    *(undefined4 *)(param_1 + 0x44) = 0x80;
    *(undefined4 *)(param_1 + 0x48) = 0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


