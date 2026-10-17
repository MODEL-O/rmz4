// undefined FUN_0810814c(void)
// entry 0x810814c


undefined4 FUN_0810814c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar2 = *(int *)(param_1 + 0x2c) + DAT_0810817c;
    if ((*(uint *)(iVar2 + 0x4c) == (uint)*(byte *)(param_1 + 0xb5)) &&
       (iVar1 = *(uint *)(iVar2 + 0x4c) + 1, *(int *)(iVar2 + 0x4c) = iVar1, iVar1 == 6)) {
      *(undefined4 *)(iVar2 + 0x4c) = 0xff;
      *(undefined4 *)(iVar2 + 0x44) = 0;
      *(undefined4 *)(iVar2 + 0x6c) = 0;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2c) + DAT_081081ac;
    if ((*(uint *)(iVar2 + 0x50) == (uint)*(byte *)(param_1 + 0xb5)) &&
       (iVar1 = *(uint *)(iVar2 + 0x50) + 1, *(int *)(iVar2 + 0x50) = iVar1, iVar1 == 6)) {
      *(undefined4 *)(iVar2 + 0x50) = 0xff;
      *(undefined4 *)(iVar2 + 0x48) = 0;
      *(undefined4 *)(iVar2 + 0x70) = 0;
    }
  }
  return in_lr;
}


