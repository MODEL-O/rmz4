// undefined FUN_08036850(void)
// entry 0x8036850


undefined4 FUN_08036850(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    FUN_0801cf00(param_1,DAT_080368a8);
    *pcVar2 = *pcVar2 + '\x01';
  }
  *(byte *)(param_1 + DAT_080368ac) = *(byte *)(param_1 + DAT_080368ac) | 8;
  cVar1 = FUN_08039fd8(param_1,param_1 + 0x144);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      if (*(char *)(param_1 + 0xe) == '\x01') {
        FUN_0801cfc8(param_1,DAT_080368d0,2,1);
      }
      else {
        FUN_0801cfc8(param_1,DAT_080368f0,2,1);
      }
      *(undefined1 *)(param_1 + 0x100) = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x100) = 3;
    *(undefined1 *)(param_1 + 0x101) = 0;
    FUN_08035b7c(param_1);
  }
  return in_lr;
}


