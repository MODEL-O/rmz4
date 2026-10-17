// undefined FUN_0809086c(void)
// entry 0x809086c


undefined4 FUN_0809086c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  FUN_08002b10(0x3f);
  iVar1 = DAT_08090918;
  local_18 = *(undefined4 *)(param_1 + 0x54);
  local_14 = *(int *)(param_1 + 0x58) + 0x1000;
  FUN_080d4c8c(&local_18,DAT_08090918,0,*(byte *)(param_1 + 10) & 0x10);
  FUN_080d4c8c(&local_18,iVar1 + 0x1c,0,*(byte *)(param_1 + 10) & 0x10);
  FUN_080d4c8c(&local_18,iVar1 + 0x38,0,*(byte *)(param_1 + 10) & 0x10);
  if (*(ushort *)(DAT_0809091c + 0xc) <= DAT_08090920) {
    *(ushort *)(DAT_0809091c + 0xc) = *(ushort *)(DAT_0809091c + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08090924);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


