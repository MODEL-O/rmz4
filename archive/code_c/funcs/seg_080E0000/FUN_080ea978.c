// undefined FUN_080ea978(void)
// entry 0x80ea978


undefined4 FUN_080ea978(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 9) == '\x02') && (*(char *)(param_1 + 0xb8) != -0x35)) {
    *(char *)(param_1 + 0xb8) = -0x35;
    FUN_0801cf00(param_1,*(byte *)(param_1 + 0x70) | 0xcb00);
    FUN_0801cff0(param_1);
  }
  return in_lr;
}


