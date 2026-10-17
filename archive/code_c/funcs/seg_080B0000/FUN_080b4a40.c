// undefined FUN_080b4a40(void)
// entry 0x80b4a40


undefined4 FUN_080b4a40(int param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) == 0) {
    return in_lr;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  iVar4 = *(int *)(param_1 + 0x2c);
  if (*(char *)(iVar4 + 0x10) == '\0') {
    FUN_08006984(0x31);
  }
  else {
    FUN_08006984(0x30);
  }
  *(bool *)(iVar4 + 0xbc) = *(int *)(iVar4 + 0x54) < *(int *)(iVar5 + 0x54);
  if (*(char *)(iVar5 + 8) == '\x01') {
    if (*(char *)(iVar4 + 0x10) == '\0') {
      if (*(char *)(iVar5 + 9) == '6') {
        puVar2 = (undefined1 *)(iVar4 + 0xb8);
        uVar1 = 3;
        goto LAB_080b4ae2;
      }
    }
    else if (*(char *)(iVar5 + 9) == '5') {
      puVar2 = (undefined1 *)(iVar4 + 0xb8);
      uVar1 = 3;
      goto LAB_080b4ae2;
    }
  }
  if ((*(uint *)(param_1 + 0x14) & 0x200) == 0) {
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x14) & 0x20000) == 0) {
    return in_lr;
  }
  if (*DAT_080b4ad0 == 0) {
    return in_lr;
  }
  if (*(char *)(iVar4 + 0x10) == '\0') {
    uVar3 = 0xc;
  }
  else {
    uVar3 = 0xd;
  }
  uVar1 = FUN_0803a578(*DAT_080b4ad0,5,uVar3);
  puVar2 = (undefined1 *)(iVar4 + 0xbd);
LAB_080b4ae2:
  *puVar2 = uVar1;
  return in_lr;
}


