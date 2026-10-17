// undefined FUN_0800dfe0(void)
// entry 0x800dfe0


void FUN_0800dfe0(int param_1)

{
  ushort *puVar1;
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar1 = (ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + 0x02000a04);
    *puVar1 = (ushort)0x0000fffc & *puVar1 | 3;
    *(undefined4 *)(param_1 + 0x4c) = 0xa00;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0x55;
    *(undefined4 *)(param_1 + 0x48) = 0x100;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return;
}


