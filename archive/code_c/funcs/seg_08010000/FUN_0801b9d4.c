// undefined FUN_0801b9d4(void)
// entry 0x801b9d4


undefined4 FUN_0801b9d4(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar3 = (ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_0801ba48);
    *puVar3 = (ushort)DAT_0801ba4c & *puVar3 | 2;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined2 *)(param_1 + 0x10) = 0;
    FUN_08002b10(0x1ca);
    uVar2 = FUN_081040c0(0,0,0);
    *(undefined4 *)(param_1 + 0x68) = uVar2;
    *(undefined2 *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  uVar1 = *(short *)(param_1 + 0x12) + *(short *)(param_1 + 0x10);
  *(ushort *)(param_1 + 0x10) = uVar1;
  if (0xff < uVar1) {
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  *(int *)(param_1 + 0x50) =
       *(int *)(param_1 + 0x50) +
       ((int)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0x10) * 2 + DAT_0801ba50) << 0x10) >> 0x17
       );
  return in_lr;
}


