// undefined FUN_0801fbec(void)
// entry 0x801fbec


undefined4 FUN_0801fbec(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0x1c) == '\0') {
    *(undefined2 *)(param_1 + 0x22) = 0;
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  local_24 = *(int *)(param_1 + 0x30);
  local_20 = *(int *)(param_1 + 0x34);
  iVar3 = local_24 - (**(int **)(param_1 + 0x48) + *(int *)(param_1 + 0x4c));
  if (0 < iVar3) {
    local_24 = local_24 - iVar3;
  }
  if (iVar3 < 0) {
    local_24 = local_24 - iVar3;
  }
  iVar3 = local_20 - ((*(int **)(param_1 + 0x48))[1] + *(int *)(param_1 + 0x54));
  if (DAT_0801fc64 < iVar3) {
    local_20 = (local_20 + DAT_0801fc64) - iVar3;
  }
  if (iVar3 < DAT_0801fc68) {
    local_20 = (local_20 + DAT_0801fc68) - iVar3;
  }
  FUN_080070c8(&local_24,&local_1c);
  iVar3 = local_24;
  if ((*(byte *)(param_1 + 0x19) & 0x10) == 0) {
    iVar3 = local_24 + local_1c;
  }
  iVar2 = local_20;
  if ((*(byte *)(param_1 + 0x19) & 0x20) == 0) {
    iVar2 = local_20 + local_18;
  }
  if ((*(byte *)(param_1 + 0x19) & 8) == 0) {
    iVar1 = *(int *)(param_1 + 0x30) + 0x400;
    if ((iVar1 < iVar3) || (iVar1 = *(int *)(param_1 + 0x30) + DAT_0801fcb0, iVar3 < iVar1)) {
      *(int *)(param_1 + 0x30) = iVar1;
    }
    else {
      *(int *)(param_1 + 0x30) = iVar3;
    }
    iVar3 = *(int *)(param_1 + 0x34);
    if (iVar3 - iVar2 < 0) {
      iVar2 = iVar3 * 7 + iVar2 + 7;
    }
    else {
      iVar2 = iVar3 * 7 + iVar2;
    }
    *(int *)(param_1 + 0x34) = iVar2 >> 3;
  }
  else {
    *(int *)(param_1 + 0x34) = iVar2;
    *(int *)(param_1 + 0x30) = iVar3;
  }
  FUN_0801f998(param_1,*(undefined1 *)(param_1 + 0x19));
  return in_lr;
}


