// undefined FUN_0803762c(void)
// entry 0x803762c


undefined4 FUN_0803762c(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + DAT_08037654) == '\0') {
    FUN_0801cfc8(param_1,0x500,4,1);
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  else {
    *(undefined1 *)(param_1 + DAT_08037658) = 1;
    *(undefined1 *)(param_1 + 0x102) = 0;
    FUN_08037678(param_1);
  }
  return in_lr;
}


