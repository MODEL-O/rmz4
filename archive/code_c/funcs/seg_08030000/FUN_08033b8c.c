// undefined FUN_08033b8c(void)
// entry 0x8033b8c


undefined4 FUN_08033b8c(int param_1)

{
  undefined2 uVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    FUN_0801cf00(param_1,0x1400);
    FUN_0803c464(param_1,8);
    *pcVar2 = *pcVar2 + '\x01';
  }
  else if ((*(byte *)(param_1 + DAT_08033be0) & 1) == 0) {
    FUN_0803a3b0(param_1,0x1400);
  }
  else {
    FUN_0801cfc8(param_1,0x1400,*(undefined1 *)(param_1 + 0x16e),
                 *(undefined1 *)(param_1 + DAT_08033be4));
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0x100) = 0;
    uVar1 = FUN_0802b7d8(param_1);
    FUN_0801cf00(param_1,uVar1);
  }
  else {
    *(undefined1 *)(param_1 + DAT_08033c28) = 1;
  }
  return in_lr;
}


