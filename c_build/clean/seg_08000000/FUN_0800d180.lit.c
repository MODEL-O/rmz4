// undefined FUN_0800d180(void)
// entry 0x800d180


void FUN_0800d180(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  iVar1 = 0x02000a04;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    puVar4 = (ushort *)(uVar2 * 2 + 0x02000a04);
    uVar3 = *(uint *)(param_1 + 0x60) | *(uint *)(param_1 + 100) | 0x00008044;
    *puVar4 = (ushort)uVar3;
    *(undefined4 *)(uVar2 * 4 + iVar1 + 8) = 0;
    FUN_08128be0((*(int *)0x08b2c0c8) + 0x08b2c0d0,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    FUN_08128be0((*(int *)0x08b2c0cc) + 0x08b2c0d4,(*puVar4 & 0x1f00) * 8 + 0x06000800,0x200);
    *(undefined2 *)(param_1 + 0x10) = 3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return;
}


