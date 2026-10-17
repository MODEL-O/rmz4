// undefined FUN_0801b94c(void)
// entry 0x801b94c


undefined4 FUN_0801b94c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar3 = (ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_0801b9a4);
    *puVar3 = (ushort)DAT_0801b9a8 & *puVar3 | 2;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    uVar1 = FUN_081040c0(0,0,0);
    *(undefined4 *)(param_1 + 0x68) = uVar1;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar2 = FUN_08129050(*(ushort *)(param_1 + 0x10) + 1,3);
  *(short *)(param_1 + 0x10) = (short)iVar2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + ((iVar2 + -1) * 0x10000 >> 0x10);
  return in_lr;
}


