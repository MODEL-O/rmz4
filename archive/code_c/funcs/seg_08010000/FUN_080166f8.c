// undefined FUN_080166f8(void)
// entry 0x80166f8


undefined4 FUN_080166f8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_0801675c;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    uVar3 = *(uint *)(param_1 + 100);
    *(ushort *)(uVar2 * 2 + DAT_0801675c) = (ushort)uVar3 | 0x47;
    *(undefined4 *)(uVar2 * 4 + iVar1 + 8) = 0;
    FUN_08128be0(*DAT_08016760 + DAT_08016764,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    *(undefined4 *)(param_1 + 0x4c) = DAT_08016768;
    *(undefined4 *)(param_1 + 0x50) = 0x3c0;
    *(undefined4 *)(param_1 + 0x44) = 0xc0;
    *(undefined4 *)(param_1 + 0x48) = 0x40;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


