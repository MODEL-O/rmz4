// undefined FUN_08036c30(void)
// entry 0x8036c30


undefined4 FUN_08036c30(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    FUN_0801cf00(param_1,DAT_08036c80);
    *(undefined1 *)(param_1 + 0x152) = 4;
    *pcVar2 = *pcVar2 + '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x152) + -1;
  *(char *)(param_1 + 0x152) = cVar1;
  if (cVar1 == -1) {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      FUN_0801cfc8(param_1,DAT_08036c84,2,1);
    }
    else {
      FUN_0801cfc8(param_1,DAT_08036ca4,2,1);
    }
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  return in_lr;
}


