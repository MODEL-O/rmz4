// undefined FUN_080fc878(void)
// entry 0x80fc878


undefined4 FUN_080fc878(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x73) != '\x03') goto LAB_080fc90a;
    *(undefined1 *)(param_1 + 0x12) = 0x5a;
  }
  else if (bVar1 < 2) {
    if ((bVar1 != 0) ||
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != -1))
    goto LAB_080fc90a;
    FUN_08002b10(0x5b);
    FUN_0801cf00(param_1,DAT_080fc8c0);
    FUN_080add08(param_1 + 0x54,0,0);
  }
  else {
    if (bVar1 != 2) {
      if ((bVar1 == 3) && (*(char *)(param_1 + 0x73) == '\x03')) {
        *(undefined1 *)(param_1 + 0x12) = 0x5a;
        *(undefined1 *)(param_1 + 0xd) = 0;
      }
      goto LAB_080fc90a;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto LAB_080fc90a;
    FUN_0801cf00(param_1,DAT_080fc8f4);
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080fc90a:
  FUN_0801cff0(param_1);
  return in_lr;
}


