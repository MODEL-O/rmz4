// undefined FUN_0800d180(void)
// entry 0x800d180


undefined4 FUN_0800d180(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  undefined4 in_lr;
  
  iVar1 = DAT_0800d1f8;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    puVar4 = (ushort *)(uVar2 * 2 + DAT_0800d1f8);
    uVar3 = *(uint *)(param_1 + 0x60) | *(uint *)(param_1 + 100) | DAT_0800d1fc;
    *puVar4 = (ushort)uVar3;
    *(undefined4 *)(uVar2 * 4 + iVar1 + 8) = 0;
    FUN_08128be0(*DAT_0800d200 + DAT_0800d204,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    FUN_08128be0(*DAT_0800d208 + DAT_0800d20c,(*puVar4 & 0x1f00) * 8 + DAT_0800d210,0x200);
    *(undefined2 *)(param_1 + 0x10) = 3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


