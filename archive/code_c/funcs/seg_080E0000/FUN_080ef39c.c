// undefined FUN_080ef39c(void)
// entry 0x80ef39c


undefined4 FUN_080ef39c(int param_1)

{
  int *piVar1;
  ushort *puVar2;
  ushort *puVar3;
  undefined4 in_lr;
  
  puVar2 = (ushort *)(DAT_080ef3f8 + 0xf8);
  *puVar2 = (ushort)DAT_080ef3fc;
  puVar3 = (ushort *)(DAT_080ef400 + 0xf8);
  *puVar3 = 5;
  FUN_08001d30(DAT_080ef404,
               ((uint)*puVar2 - (uint)(*(ushort *)(DAT_080ef404 + 6) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_080ef408,((uint)*puVar3 - (uint)*(byte *)(DAT_080ef408 + 7)) * 0x20 + 0x200);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ef40c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080ed7c8(param_1);
  return in_lr;
}


