// undefined FUN_08009af0(void)
// entry 0x8009af0


undefined4 FUN_08009af0(int param_1)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_08009b50;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    puVar3 = (ushort *)(uVar2 * 2 + DAT_08009b50);
    *puVar3 = (ushort)*(undefined4 *)(param_1 + 0x60) | (ushort)*(undefined4 *)(param_1 + 100) |
              0x44;
    *(undefined4 *)(uVar2 * 4 + iVar1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    FUN_08128be0(*DAT_08009b54 + DAT_08009b58,(*puVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  return in_lr;
}


