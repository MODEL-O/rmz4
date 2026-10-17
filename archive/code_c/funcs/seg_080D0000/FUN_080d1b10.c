// undefined FUN_080d1b10(void)
// entry 0x80d1b10


undefined4 FUN_080d1b10(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int *piVar4;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
LAB_080d1b56:
    FUN_0801cff0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto LAB_080d1b8c;
    cVar3 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_080d1b8c;
      FUN_0801cf00(param_1,0xf00);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      goto LAB_080d1b56;
    }
    if (bVar1 == 2) {
      *(undefined1 *)(param_1 + 0x12) = 2;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    else if (bVar1 != 3) goto LAB_080d1b8c;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    cVar3 = '\0';
    if (cVar2 != '\0') goto LAB_080d1b8c;
  }
  *(char *)(param_1 + 0xd) = cVar3;
LAB_080d1b8c:
  if ((*(char *)(param_1 + 0x11) != '\0') && (*(char *)(param_1 + 0x13) == 'l')) {
    FUN_080d19a8(*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78),0);
  }
  cVar3 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar3;
  if (cVar3 == '\0') {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d1bc8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
  }
  return in_lr;
}


