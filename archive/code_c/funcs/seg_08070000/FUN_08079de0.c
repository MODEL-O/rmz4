// undefined FUN_08079de0(void)
// entry 0x8079de0


undefined4 FUN_08079de0(int param_1)

{
  undefined4 in_lr;
  
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


