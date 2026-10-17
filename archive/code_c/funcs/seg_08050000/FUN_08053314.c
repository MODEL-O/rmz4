// undefined FUN_08053314(void)
// entry 0x8053314


undefined4 FUN_08053314(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,0xb600);
    *(undefined1 *)(param_1 + 0x12) = 0x32;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if (((*(ushort *)(DAT_08053360 + 8) & 8) == 0) && (*(char *)(param_1 + 0x12) == '\0')) {
    FUN_080539e8(param_1);
  }
  return in_lr;
}


