// undefined FUN_0800d65c(void)
// entry 0x800d65c


void FUN_0800d65c(int param_1)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  uint local_28 [2];
  
  iVar1 = 0x02000a04;
  local_28[0] = (uint)*(byte *)(param_1 + 0xe);
  if (local_28[0] == 0) {
    uVar4 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    puVar3 = (ushort *)(uVar4 * 2 + 0x02000a04);
    uVar2 = *(uint *)(param_1 + 100) | 0x00004045;
    *puVar3 = (ushort)uVar2;
    FUN_08128be0(local_28,(uVar2 & 0x1f00) * 8 + 0x6000000,0x01000200);
    FUN_08128be0((*(int *)0x08b2c234) + 0x08b2c23c,(*puVar3 & 0x1f00) * 8 + 0x06000800,0x200);
    *(undefined4 *)(uVar4 * 4 + iVar1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0x00002218;
    *(undefined4 *)(param_1 + 0x50) = 0x250;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return;
}


