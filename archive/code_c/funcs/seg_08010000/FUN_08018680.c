// undefined FUN_08018680(void)
// entry 0x8018680


undefined4 FUN_08018680(void)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(DAT_080186a4 + DAT_080186a8);
  if (*pcVar1 == '\x01') {
    FUN_080074c0(0x10,4,0x2f);
    *pcVar1 = '\x02';
  }
  return in_lr;
}


