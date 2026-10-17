// undefined FUN_080ee498(void)
// entry 0x80ee498


undefined4 FUN_080ee498(int param_1)

{
  int *piVar1;
  ushort *puVar2;
  ushort *puVar3;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080ee52c,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  puVar2 = (ushort *)(DAT_080ee530 + 0x80);
  *puVar2 = (ushort)DAT_080ee534;
  puVar3 = (ushort *)(DAT_080ee538 + 0x80);
  *puVar3 = 5;
  FUN_08001d30(DAT_080ee53c,
               ((uint)*puVar2 - (uint)(*(ushort *)(DAT_080ee53c + 6) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_080ee540,((uint)*puVar3 - (uint)*(byte *)(DAT_080ee540 + 7)) * 0x20 + 0x200);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ee544);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_1 + 0x11);
  FUN_080ed7c8(param_1);
  return in_lr;
}


