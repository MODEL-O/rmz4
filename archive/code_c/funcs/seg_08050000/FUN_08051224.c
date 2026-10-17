// undefined FUN_08051224(void)
// entry 0x8051224


undefined4 FUN_08051224(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08051274);
    FUN_08002b10(0xe4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (('\a' < *(char *)(param_1 + 0x71)) && (*(char *)(param_1 + 0x72) < '\x02')) {
    *(undefined1 *)(param_1 + 0xd) = 6;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


