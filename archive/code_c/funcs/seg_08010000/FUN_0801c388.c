// undefined FUN_0801c388(void)
// entry 0x801c388


undefined4 FUN_0801c388(int param_1)

{
  undefined4 uVar1;
  ushort *puVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar2 = (ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_0801c3e4);
    *puVar2 = (ushort)DAT_0801c3e8 & *puVar2 | 3;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    uVar1 = FUN_081040c0(0,0,0);
    *(undefined4 *)(param_1 + 0x68) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(int *)(param_1 + 0x6c) == 0) {
    uVar1 = FUN_081040c0(0,0,1);
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
  }
  *(uint *)(param_1 + 0x50) = 0x3c - (*(uint *)(DAT_0801c3ec + DAT_0801c3f0) >> 6);
  return in_lr;
}


