// undefined FUN_08035f78(void)
// entry 0x8035f78


undefined4 FUN_08035f78(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0x102);
  if (*pcVar1 == '\0') {
    FUN_0801cf00(param_1,DAT_08035f98);
    *pcVar1 = *pcVar1 + '\x01';
  }
  else {
    FUN_0803a3b0(param_1,DAT_08035fc4);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      FUN_0801cfc8(param_1,DAT_08035fc8,2,1);
    }
    else {
      FUN_0801cfc8(param_1,DAT_08035fe8,2,1);
    }
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  return in_lr;
}


