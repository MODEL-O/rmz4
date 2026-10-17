// undefined FUN_08108104(void)
// entry 0x8108104


undefined4 FUN_08108104(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar2 = *(int *)(param_1 + 0x2c) + DAT_08108128;
    uVar1 = *(int *)(iVar2 + 0x44) + 1;
    *(uint *)(iVar2 + 0x44) = uVar1;
    *(uint *)(iVar2 + 0x6c) = uVar1;
    if (1 < uVar1) {
      *(undefined4 *)(iVar2 + 0x60) = 0x3c;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2c) + DAT_08108148;
    uVar1 = *(int *)(iVar2 + 0x48) + 1;
    *(uint *)(iVar2 + 0x48) = uVar1;
    *(uint *)(iVar2 + 0x70) = uVar1;
    if (1 < uVar1) {
      *(undefined4 *)(iVar2 + 100) = 0x3c;
    }
  }
  return in_lr;
}


