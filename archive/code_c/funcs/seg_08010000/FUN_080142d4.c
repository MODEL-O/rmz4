// undefined FUN_080142d4(void)
// entry 0x80142d4


undefined4 FUN_080142d4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_08014328;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    uVar3 = *(uint *)(param_1 + 0x60) | *(uint *)(param_1 + 100);
    *(ushort *)(uVar2 * 2 + DAT_08014328) = (ushort)uVar3 | 0x44;
    *(undefined4 *)(uVar2 * 4 + iVar1 + 8) = 0;
    FUN_08128be0(*DAT_0801432c + DAT_08014330,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


