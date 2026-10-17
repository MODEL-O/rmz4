// undefined FUN_08035fec(void)
// entry 0x8035fec


undefined4 FUN_08035fec(int param_1)

{
  bool bVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  bVar1 = false;
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    FUN_0801cf00(param_1,DAT_08036018);
    FUN_0803c464(param_1,9);
    *pcVar2 = *pcVar2 + '\x01';
  }
  else if ((*(byte *)(param_1 + DAT_08036048) & 1) == 0) {
    FUN_0803a3b0(param_1,DAT_08036094);
  }
  else if (*(byte *)(param_1 + 0x16e) < 8) {
    FUN_0801cfc8(param_1,DAT_0803604c,*(byte *)(param_1 + 0x16e),*(undefined1 *)(param_1 + 0x16f));
  }
  else {
    bVar1 = true;
  }
  if ((*(char *)(param_1 + 0x73) == '\x03') || (bVar1)) {
    if ((*(uint *)(param_1 + 600) & 0x80) == 0) {
      *(undefined1 *)(param_1 + DAT_080360b4) = 3;
      *(undefined1 *)(param_1 + 0x102) = 0;
      FUN_08035f78(param_1);
    }
    else {
      *(undefined1 *)(param_1 + DAT_08036098) = 2;
      *(undefined1 *)(param_1 + 0x102) = 0;
      FUN_08035f28(param_1);
    }
  }
  else {
    *(undefined1 *)(param_1 + DAT_080360c8) = 2;
  }
  return in_lr;
}


