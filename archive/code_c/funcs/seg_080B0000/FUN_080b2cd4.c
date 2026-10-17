// undefined FUN_080b2cd4(void)
// entry 0x80b2cd4


undefined8 FUN_080b2cd4(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 in_lr;
  int local_14 [2];
  
  local_14[0] = *DAT_080b2d24;
  local_14[1] = DAT_080b2d24[1];
  puVar3 = (undefined1 *)(param_1 + 0xb7);
  *puVar3 = 0;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    sVar1 = FUN_08007c7c(*(int *)(param_1 + 0x54) +
                         *(int *)((int)local_14 +
                                 ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 4U)) * 0x100,
                         *(int *)(param_1 + 0x58) + DAT_080b2d60);
    if (sVar1 != 0) {
      *puVar3 = 1;
      uVar2 = 1;
      goto LAB_080b2d66;
    }
  }
  else {
    sVar1 = FUN_08007c7c(*(int *)(param_1 + 0x54) +
                         *(int *)((int)local_14 +
                                 ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 4U)) * 0x100,
                         *(int *)(param_1 + 0x58) + DAT_080b2d28);
    if (sVar1 != 0) {
      uVar2 = 1;
      *puVar3 = 1;
      goto LAB_080b2d66;
    }
  }
  uVar2 = 0;
LAB_080b2d66:
  return CONCAT44(in_lr,uVar2);
}


