// undefined FUN_080350e8(void)
// entry 0x80350e8


undefined4 FUN_080350e8(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0x14e) = 1;
  if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != 0x2000) {
    if (*(short *)(param_1 + 0xfc) == 0x100) {
      FUN_0801cfc8(param_1,0x2000,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72))
      ;
    }
    else {
      FUN_0801cf00(param_1,0x2000);
    }
  }
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    FUN_0803d374(param_1,1);
    *pcVar2 = *pcVar2 + '\x01';
  }
  else {
    cVar1 = FUN_08039fd8(param_1,param_1 + 0x144);
    if (cVar1 == '\x01') {
      *(undefined1 *)(param_1 + 0x100) = 3;
      *(undefined1 *)(param_1 + 0x101) = 0;
      FUN_08034b48(param_1);
    }
    else if (*(char *)(param_1 + DAT_080351ac) == '\0') {
      *(undefined1 *)(param_1 + DAT_080351b0) = 2;
      *pcVar2 = '\0';
      FUN_080351b4(param_1);
    }
  }
  return in_lr;
}


