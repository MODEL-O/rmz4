// undefined FUN_081080bc(void)
// entry 0x81080bc


undefined4 FUN_081080bc(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar2 = *(int *)(param_1 + 0x2c) + DAT_081080e0;
    bVar1 = *(byte *)(param_1 + 0xb5);
    *(uint *)(iVar2 + 0x4c) = (uint)bVar1;
    if (bVar1 == 0) {
      *(undefined4 *)(iVar2 + 0x4c) = 1;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2c) + DAT_08108100;
    bVar1 = *(byte *)(param_1 + 0xb5);
    *(uint *)(iVar2 + 0x50) = (uint)bVar1;
    if (bVar1 == 0) {
      *(undefined4 *)(iVar2 + 0x50) = 1;
    }
  }
  return in_lr;
}


