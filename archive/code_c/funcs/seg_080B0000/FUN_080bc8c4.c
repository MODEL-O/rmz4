// undefined FUN_080bc8c4(void)
// entry 0x80bc8c4


undefined4 FUN_080bc8c4(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28) + DAT_080bc91c;
  *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) + -1;
  *(uint *)(iVar2 + 0x28) = *(uint *)(iVar2 + 0x28) & ~(1 << *(sbyte *)(param_1 + 0x11));
  if (*(int *)(iVar2 + 0x3c) == 1) {
    *(uint *)(iVar2 + 8) =
         *(int *)(iVar2 + 8) +
         (uint)*(byte *)((uint)*(byte *)(param_1 + 0x10) * 4 + -1 + (uint)*(byte *)(param_1 + 0x12)
                        + DAT_080bc920);
    FUN_08002b10(DAT_080bc924);
  }
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bc928);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


