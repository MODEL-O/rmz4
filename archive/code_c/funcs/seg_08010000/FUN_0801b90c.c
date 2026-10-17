// undefined FUN_0801b90c(void)
// entry 0x801b90c


undefined4 FUN_0801b90c(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (DAT_0801b930 < *(int *)(param_1 + 0x34)) {
      *(undefined4 *)(param_1 + 0x4c) = 0xb40;
      uVar1 = 0x3c0;
    }
    else {
      *(undefined4 *)(param_1 + 0x4c) = 0x2d0;
      uVar1 = 0x6e0;
    }
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


