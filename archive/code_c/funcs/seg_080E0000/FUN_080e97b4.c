// undefined FUN_080e97b4(void)
// entry 0x80e97b4


undefined4 FUN_080e97b4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  iVar3 = DAT_080e9848;
  iVar2 = DAT_080e9844;
  iVar1 = DAT_080e9840;
  local_1c = *(int *)(param_1 + 0x54) + DAT_080e9840;
  local_18 = *(int *)(param_1 + 0x58) + DAT_080e9844;
  FUN_080d4c8c(&local_1c,DAT_080e9848,0,0);
  local_1c = *(int *)(param_1 + 0x54) + 0x800;
  local_18 = *(int *)(param_1 + 0x58) + iVar2;
  FUN_080d4c8c(&local_1c,iVar3 + 0x1c,0,0);
  local_1c = *(int *)(param_1 + 0x54) + iVar1;
  local_18 = *(int *)(param_1 + 0x58) + 0x100;
  FUN_080d4c8c(&local_1c,iVar3 + 0x38,0,0);
  local_1c = *(int *)(param_1 + 0x54);
  local_18 = *(int *)(param_1 + 0x58) + DAT_080e984c;
  FUN_080d0c88(1,&local_1c);
  if (*(int *)(DAT_080e9850 + DAT_080e9854) < *(int *)(param_1 + 0x58)) {
    FUN_08002b10(0x31);
  }
  else {
    FUN_08002b10(0x2a);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e9880);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0x10);
  return in_lr;
}


