// undefined FUN_080ef170(void)
// entry 0x80ef170


undefined4 FUN_080ef170(int param_1)

{
  int *piVar1;
  ushort *puVar2;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cd28(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  *(undefined1 *)(param_1 + 0x24) = 0xd0;
  *(undefined2 *)(DAT_080ef208 + 0x80) = 0x33c;
  puVar2 = (ushort *)(DAT_080ef20c + 0x80);
  *puVar2 = 5;
  FUN_08001d30(DAT_080ef210,(0x33c - (uint)(*(ushort *)(DAT_080ef210 + 6) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_080ef214,((uint)*puVar2 - (uint)*(byte *)(DAT_080ef214 + 7)) * 0x20 + 0x200);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ef218);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080ed7c8(param_1);
  return in_lr;
}


