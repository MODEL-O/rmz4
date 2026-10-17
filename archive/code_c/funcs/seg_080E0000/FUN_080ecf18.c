// undefined FUN_080ecf18(void)
// entry 0x80ecf18


undefined4 FUN_080ecf18(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(DAT_080ecf34 + DAT_080ecf38) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080ecf3c);
  }
  else if (*(char *)(DAT_080ecf34 + DAT_080ecf38) == '`') {
    FUN_08005784(param_1 + 0x74,DAT_080ecf54);
  }
  return in_lr;
}


