// undefined FUN_0800a900(void)
// entry 0x800a900


undefined4 FUN_0800a900(int param_1)

{
  int iVar1;
  ushort *puVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar2 = (ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_0800a93c);
    *puVar2 = (ushort)DAT_0800a940 & *puVar2 | 2;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(byte *)(DAT_0800a944 + DAT_0800a948) == 1) {
    iVar1 = *(int *)(param_1 + 0x4c) + -9;
  }
  else {
    if (*(byte *)(DAT_0800a944 + DAT_0800a948) < 3) {
      return in_lr;
    }
    puVar2 = (ushort *)(DAT_0800a944 + DAT_0800a974);
    if (*puVar2 <= DAT_0800a978) {
      *puVar2 = *puVar2 + 8;
    }
    iVar1 = *(int *)(param_1 + 0x4c) - (uint)(*puVar2 >> 8);
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  return in_lr;
}


