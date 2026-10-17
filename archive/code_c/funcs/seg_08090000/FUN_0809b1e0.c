// undefined FUN_0809b1e0(void)
// entry 0x809b1e0


undefined4 FUN_0809b1e0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0xb7) = 1;
    if (*(char *)(param_1 + 0xb6) == '\0') {
      FUN_080663dc(*(undefined4 *)(param_1 + 0x28),param_1);
      *(char *)(param_1 + 0xb6) = '\x01';
    }
    FUN_08005784(param_1 + 0x74,*(undefined4 *)(DAT_0809b240 + 4));
    FUN_0801cf00(param_1,DAT_0809b244);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


