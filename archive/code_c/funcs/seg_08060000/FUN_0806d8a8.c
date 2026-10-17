// undefined FUN_0806d8a8(void)
// entry 0x806d8a8


undefined4 FUN_0806d8a8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar1 = -((int)(-*(uint *)(param_1 + 0xb4) | *(uint *)(param_1 + 0xb4)) >> 0x1f);
    if (*(int *)(param_1 + 0xb8) != 0) {
      iVar1 = iVar1 + 1;
    }
    if (*(int *)(param_1 + 0xbc) != 0) {
      iVar1 = iVar1 + 1;
    }
    if (*(int *)(param_1 + 0xc0) != 0) {
      iVar1 = iVar1 + 1;
    }
    *(char *)(param_1 + 0x12) = (char)(iVar1 << 4);
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xda) == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 6;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


