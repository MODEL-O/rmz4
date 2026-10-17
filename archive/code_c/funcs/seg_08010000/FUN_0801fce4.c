// undefined FUN_0801fce4(void)
// entry 0x801fce4


undefined4 FUN_0801fce4(int param_1)

{
  int iVar1;
  int iVar2;
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
  iVar2 = local_24 - (**(int **)(param_1 + 0x48) + *(int *)(param_1 + 0x4c));
  if (0 < iVar2) {
    local_24 = local_24 - iVar2;
  }
  if (iVar2 < 0) {
    local_24 = local_24 - iVar2;
  }
  iVar2 = local_20 - ((*(int **)(param_1 + 0x48))[1] + *(int *)(param_1 + 0x54));
  if (DAT_0801fd5c < iVar2) {
    local_20 = (local_20 + DAT_0801fd5c) - iVar2;
  }
  if (iVar2 < DAT_0801fd60) {
    local_20 = (local_20 + DAT_0801fd60) - iVar2;
  }
  FUN_080070c8(&local_24,&local_1c);
  iVar2 = local_24;
  if ((*(byte *)(param_1 + 0x19) & 0x10) == 0) {
    iVar2 = local_24 + local_1c;
  }
  local_18 = local_20 + local_18;
  if (iVar2 + DAT_0801fdc0 < *(int *)(param_1 + 0x5c)) {
    iVar2 = *(int *)(param_1 + 0x5c) + 0x7800;
  }
  if (*(int *)(param_1 + 0x60) < iVar2 + 0x7800) {
    iVar2 = *(int *)(param_1 + 0x60) + DAT_0801fdc0;
  }
  if (local_18 + DAT_0801fdc4 < *(int *)(param_1 + 100)) {
    local_18 = *(int *)(param_1 + 100) + 0x5000;
  }
  if (*(int *)(param_1 + 0x68) < local_18 + 0x5000) {
    local_18 = *(int *)(param_1 + 0x68) + DAT_0801fdc4;
  }
  if ((*(byte *)(param_1 + 0x19) & 8) == 0) {
    iVar1 = *(int *)(param_1 + 0x30) + 0x400;
    if ((iVar1 < iVar2) || (iVar1 = *(int *)(param_1 + 0x30) + DAT_0801fde0, iVar2 < iVar1)) {
      *(int *)(param_1 + 0x30) = iVar1;
    }
    else {
      *(int *)(param_1 + 0x30) = iVar2;
    }
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 - local_18 < 0) {
      local_18 = iVar2 * 7 + local_18 + 7;
    }
    else {
      local_18 = iVar2 * 7 + local_18;
    }
    *(int *)(param_1 + 0x34) = local_18 >> 3;
  }
  else {
    *(int *)(param_1 + 0x34) = local_18;
    *(int *)(param_1 + 0x30) = iVar2;
  }
  FUN_0801f998(param_1,*(undefined1 *)(param_1 + 0x19));
  return in_lr;
}


