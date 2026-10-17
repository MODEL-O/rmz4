// undefined FUN_080360cc(void)
// entry 0x80360cc


undefined4 FUN_080360cc(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  pbVar2 = (byte *)(param_1 + 0x102);
  bVar1 = *pbVar2;
  if (bVar1 == 1) {
LAB_08036106:
    FUN_0803a3b0(param_1,DAT_0803615c);
    if (*(char *)(param_1 + 0xe) != '\x02') {
      return in_lr;
    }
    *(char *)(param_1 + 0x102) = *(char *)(param_1 + 0x102) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      FUN_0801cf00(param_1,DAT_0803615c);
      FUN_0803c464(param_1,0x11);
      *pbVar2 = *pbVar2 + 1;
      goto LAB_08036106;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      goto LAB_08036134;
    }
  }
  FUN_0801cf00(param_1,DAT_08036160);
  *(char *)(param_1 + 0x102) = *(char *)(param_1 + 0x102) + '\x01';
LAB_08036134:
  FUN_0803a3b0(param_1,DAT_08036160);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      FUN_0801cfc8(param_1,DAT_08036164,2,1);
    }
    else {
      FUN_0801cfc8(param_1,DAT_08036184,2,1);
    }
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  return in_lr;
}


