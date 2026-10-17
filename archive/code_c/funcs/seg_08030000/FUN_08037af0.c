// undefined FUN_08037af0(void)
// entry 0x8037af0


undefined4 FUN_08037af0(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    FUN_0801cf00(param_1,DAT_08037b40);
    *pcVar2 = *pcVar2 + '\x01';
  }
  uVar1 = DAT_08037b40;
  FUN_0803a3b0(param_1,DAT_08037b40);
  FUN_0803a3f0(param_1,uVar1);
  if (*(char *)(param_1 + DAT_08037b44) == '\x03') {
    *(undefined1 *)(param_1 + DAT_08037b48) = 3;
    *pcVar2 = '\0';
    FUN_08037b4c(param_1);
  }
  return in_lr;
}


