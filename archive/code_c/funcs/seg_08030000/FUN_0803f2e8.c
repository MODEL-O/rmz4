// undefined FUN_0803f2e8(void)
// entry 0x803f2e8


undefined4 FUN_0803f2e8(int param_1)

{
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x14) & 4) != 0) &&
     ((*(uint *)(*(int *)(param_1 + 0xc) + 0x18) & 0x200) == 0)) {
    *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xbb) = 1;
  }
  return in_lr;
}


