// undefined FUN_08097af8(void)
// entry 0x8097af8


undefined4 FUN_08097af8(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  iVar1 = DAT_08097bb4;
  local_18 = *(undefined4 *)(param_1 + 0x54);
  local_14 = *(int *)(param_1 + 0x58) + DAT_08097bb0;
  FUN_080d4c8c(&local_18,DAT_08097bb4,0,*(byte *)(param_1 + 10) & 0x10);
  FUN_080d4c8c(&local_18,iVar1 + 0x1c,0,*(byte *)(param_1 + 10) & 0x10);
  FUN_080d4c8c(&local_18,iVar1 + 0x38,0,*(byte *)(param_1 + 10) & 0x10);
  FUN_080d4c8c(&local_18,iVar1 + 0x54,0,*(byte *)(param_1 + 10) & 0x10);
  FUN_080d0c88(1,&local_18);
  FUN_08002b10(0x2a);
  FUN_0802ab88(4,2,param_1 + 0x54);
  if (*(ushort *)(DAT_08097bb8 + 0xc) <= DAT_08097bbc) {
    *(ushort *)(DAT_08097bb8 + 0xc) = *(ushort *)(DAT_08097bb8 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08097bc0);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


