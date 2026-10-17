// undefined FUN_0810217c(void)
// entry 0x810217c


undefined4 FUN_0810217c(int param_1)

{
  int *piVar1;
  ushort *puVar2;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_081021f8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(undefined2 *)(DAT_081021fc + 0x19a) = 0x1e0;
  puVar2 = (ushort *)(DAT_08102200 + 0x19a);
  *puVar2 = 10;
  FUN_08001d30(DAT_08102204 + 0x1004,
               (0x1e0 - (uint)(*(ushort *)(DAT_08102204 + 0x100a) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_08102208 + 0x1004,
               ((uint)*puVar2 - (uint)*(byte *)(DAT_08102208 + 0x100b)) * 0x20 + 0x200);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  FUN_0810220c(param_1);
  return in_lr;
}


