// undefined FUN_0809f12c(void)
// entry 0x809f12c


undefined4 FUN_0809f12c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  int local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xb9) == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      FUN_080e08bc(param_1 + 0x54,1,0,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    else {
      FUN_080e08bc(param_1 + 0x54,0,0,*(byte *)(param_1 + 10) >> 4 & 1);
    }
  }
  else {
    FUN_080e08bc(param_1 + 0x54,2,0,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    local_14 = *(int *)(param_1 + 0x54);
    iVar2 = DAT_0809f1a0;
  }
  else {
    local_14 = *(int *)(param_1 + 0x54);
    iVar2 = 0x800;
  }
  local_14 = local_14 + iVar2;
  local_10 = *(undefined4 *)(param_1 + 0x58);
  if (*(ushort *)(DAT_0809f1ec + 0xc) <= DAT_0809f1f0) {
    *(ushort *)(DAT_0809f1ec + 0xc) = *(ushort *)(DAT_0809f1ec + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  FUN_0802ab88(2,3,&local_14);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809f1f4);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


