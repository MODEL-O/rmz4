// undefined FUN_08037b4c(void)
// entry 0x8037b4c


undefined4 FUN_08037b4c(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    FUN_0801cf00(param_1,DAT_08037ba4);
    *pcVar2 = *pcVar2 + '\x01';
  }
  uVar1 = DAT_08037ba4;
  FUN_0803a3b0(param_1,DAT_08037ba4);
  FUN_0803a3f0(param_1,uVar1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    FUN_0801cfc8(param_1,0x500,4,1);
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  return in_lr;
}


