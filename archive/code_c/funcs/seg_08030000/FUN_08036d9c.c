// undefined FUN_08036d9c(void)
// entry 0x8036d9c


undefined4 FUN_08036d9c(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    FUN_0801cf00(param_1,DAT_08036dec);
    *pcVar2 = *pcVar2 + '\x01';
  }
  uVar1 = DAT_08036dec;
  FUN_0803a3b0(param_1,DAT_08036dec);
  FUN_0803a3f0(param_1,uVar1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      FUN_0801cfc8(param_1,DAT_08036df0,2,1);
    }
    else {
      FUN_0801cfc8(param_1,DAT_08036e10,2,1);
    }
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  return in_lr;
}


