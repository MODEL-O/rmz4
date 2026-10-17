// undefined FUN_0803aa4c(void)
// entry 0x803aa4c


undefined8 FUN_0803aa4c(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0xe6);
  if ((cVar1 == -1) ||
     ((cVar1 != '\0' && (*(char *)(param_1 + 0xe6) = cVar1 + -1, (char)(cVar1 + -1) != '\0')))) {
    uVar3 = 0;
    goto LAB_0803aab6;
  }
  if (*(char *)(param_1 + 0xf8) == '\x02') {
    *(char *)(param_1 + 0xf8) = '\x02';
    bVar2 = *(byte *)(param_1 + 0xc0);
joined_r0x0803aa92:
    if (bVar2 < 3) {
      if (2 < *(byte *)(param_1 + 0xc1)) {
        *(undefined1 *)(param_1 + 0xc1) = 2;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xc0) = 2;
    }
  }
  else if (*(char *)(param_1 + 0xf9) == '\x02') {
    *(char *)(param_1 + 0xf9) = '\x02';
    bVar2 = *(byte *)(param_1 + 0xc0);
    goto joined_r0x0803aa92;
  }
  *(undefined1 *)(param_1 + 0xfa) = 2;
  *(undefined1 *)(param_1 + 0xc3) = 0;
  uVar3 = 1;
LAB_0803aab6:
  return CONCAT44(in_lr,uVar3);
}


