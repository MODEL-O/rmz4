// undefined FUN_080b9cd0(void)
// entry 0x80b9cd0


undefined4 FUN_080b9cd0(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0xf) = 0x3c;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x2c) + DAT_080b9d00 + 0x28);
    if (*(uint *)(param_1 + 0x54) < uVar1) {
      *(uint *)(param_1 + 0xc0) = uVar1;
    }
    else {
      *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0x54);
    }
    *(int *)(param_1 + 0xbc) = *(int *)(*DAT_080b9d34 + 0x58) + DAT_080b9d38;
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + -1;
  FUN_080b9d3c(param_1);
  return in_lr;
}


