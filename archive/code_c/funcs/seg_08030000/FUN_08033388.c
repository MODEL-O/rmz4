// undefined FUN_08033388(void)
// entry 0x8033388


undefined4 FUN_08033388(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 600) & 0x80) == 0) {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


