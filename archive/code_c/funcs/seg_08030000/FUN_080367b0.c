// undefined FUN_080367b0(void)
// entry 0x80367b0


undefined4 FUN_080367b0(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0x14e) = 2;
  if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != 0x2100) {
    FUN_0801cf00(param_1,0x2100);
  }
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    FUN_0803d374(param_1,2);
    *pcVar2 = *pcVar2 + '\x01';
  }
  else {
    cVar1 = FUN_08039fd8(param_1,param_1 + 0x144);
    if (cVar1 == '\x01') {
      *(undefined1 *)(param_1 + 0x100) = 3;
      *(undefined1 *)(param_1 + DAT_08036824) = 0;
      FUN_08035b7c(param_1);
    }
    else if (*(char *)(param_1 + DAT_08036848) == '\0') {
      *(undefined1 *)(param_1 + DAT_0803684c) = 2;
      *pcVar2 = '\0';
      FUN_08036850(param_1);
    }
  }
  return in_lr;
}


