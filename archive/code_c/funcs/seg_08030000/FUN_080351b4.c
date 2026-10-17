// undefined FUN_080351b4(void)
// entry 0x80351b4


undefined4 FUN_080351b4(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    FUN_0801cfc8(param_1,DAT_0803522c,(short)*(char *)(param_1 + 0x71),
                 (short)*(char *)(param_1 + 0x72));
    *(undefined1 *)(param_1 + DAT_08035230) = 5;
    *pcVar2 = *pcVar2 + '\x01';
  }
  *(byte *)(param_1 + DAT_08035234) = *(byte *)(param_1 + DAT_08035234) | 8;
  cVar1 = FUN_08039fd8(param_1,param_1 + 0x144);
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + DAT_08035278) + -1;
    *(char *)(param_1 + DAT_08035278) = cVar1;
    if (cVar1 == -1) {
      *(undefined1 *)(param_1 + 0x100) = 0;
      FUN_0801cfc8(param_1,0x200,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x100) = 3;
    *(undefined1 *)(param_1 + 0x101) = 0;
    FUN_08034b48(param_1);
  }
  return in_lr;
}


