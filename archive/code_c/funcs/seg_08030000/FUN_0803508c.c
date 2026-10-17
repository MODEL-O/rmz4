// undefined FUN_0803508c(void)
// entry 0x803508c


undefined4 FUN_0803508c(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(DAT_080350b4 + param_1) == '\0') {
    *(undefined1 *)(param_1 + 0x100) = 0;
    FUN_0801cfc8(param_1,0x200,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
  }
  else {
    *(undefined1 *)(DAT_080350b8 + param_1) = 1;
    *(undefined1 *)(param_1 + 0x102) = 0;
    FUN_080350e8(param_1);
  }
  return in_lr;
}


