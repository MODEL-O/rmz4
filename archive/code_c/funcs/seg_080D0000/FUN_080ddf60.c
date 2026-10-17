// undefined FUN_080ddf60(void)
// entry 0x80ddf60


undefined4 FUN_080ddf60(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  iVar1 = DAT_080ddfcc;
  local_18 = *(undefined4 *)(param_1 + 0x54);
  local_14 = *(int *)(param_1 + 0x58) + DAT_080ddfc8;
  FUN_080d4c8c(&local_18,DAT_080ddfcc,0,*(byte *)(param_1 + 10) & 0x10);
  FUN_080d4c8c(&local_18,iVar1 + 0x1c,0,*(byte *)(param_1 + 10) & 0x10);
  FUN_080d0c88(1,&local_18);
  FUN_08002b10(0x2a);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ddfd0);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


