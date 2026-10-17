// undefined FUN_08032290(void)
// entry 0x8032290


undefined4 FUN_08032290(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x108) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x108) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  *(undefined1 *)(param_1 + DAT_080322d0) = 0xff;
  *(undefined1 *)(param_1 + 0x14e) = 0xff;
  cVar1 = *(char *)(param_1 + 0xfa);
  if (cVar1 != '\x02') {
    if (cVar1 == '\b') {
      *(char *)(param_1 + 0xfa) = '\x02';
    }
    else {
      if (*(char *)(param_1 + 0xc0) == '\x02') {
        *(char *)(param_1 + 0xc0) = cVar1;
      }
      else {
        if (*(char *)(param_1 + 0xc1) != '\x02') goto LAB_080322f8;
        *(char *)(param_1 + 0xc1) = cVar1;
      }
      pcVar2 = (char *)(param_1 + 0xf8);
      cVar1 = *pcVar2;
      if (cVar1 != '\x02') {
        pcVar2 = (char *)(param_1 + 0xf9);
        cVar1 = '\x02';
      }
      *pcVar2 = cVar1;
    }
  }
LAB_080322f8:
  if (*(byte *)(param_1 + 199) < 4) {
    if (((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) {
      *(undefined1 *)(param_1 + 0xe) = 1;
      *(undefined1 *)(param_1 + 0xf) = 0;
      *(undefined1 *)(param_1 + 0x100) = 0;
      FUN_08032368(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 0xe) = 2;
      *(undefined1 *)(param_1 + 0xf) = 0;
      *(undefined1 *)(param_1 + 0x100) = 0;
      FUN_08032418(param_1);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined1 *)(param_1 + 0x100) = 0;
    FUN_08032368(param_1);
  }
  return in_lr;
}


