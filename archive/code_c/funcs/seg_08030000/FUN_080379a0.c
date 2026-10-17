// undefined FUN_080379a0(void)
// entry 0x80379a0


undefined4 FUN_080379a0(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    FUN_0801cf00(param_1,DAT_080379f0);
    *(undefined1 *)(param_1 + 0x152) = 0xe;
    *pcVar2 = *pcVar2 + '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x152) + -1;
  *(char *)(param_1 + 0x152) = cVar1;
  if (cVar1 == -1) {
    *(undefined1 *)(param_1 + DAT_080379f4) = 4;
    *pcVar2 = '\0';
  }
  return in_lr;
}


