// undefined FUN_08009af0(void)
// entry 0x8009af0


void FUN_08009af0(int param_1)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  iVar1 = 0x02000a04;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    puVar3 = (ushort *)(uVar2 * 2 + 0x02000a04);
    *puVar3 = (ushort)*(undefined4 *)(param_1 + 0x60) | (ushort)*(undefined4 *)(param_1 + 100) |
              0x44;
    *(undefined4 *)(uVar2 * 4 + iVar1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    FUN_08128be0((*(int *)0x08b2c0a0) + 0x08b2c0a8,(*puVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  return;
}


