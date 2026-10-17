// undefined FUN_080adad8(void)
// entry 0x80adad8


undefined4 FUN_080adad8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  if (*(char *)(param_1 + 0xb9) == '\0') {
    if (*(int *)(param_1 + 0xbc) < iVar3) {
      uVar2 = 0xffffffb0;
    }
    else {
      if (*(int *)(param_1 + 0xbc) + DAT_080adb78 <= iVar3) goto LAB_080adb12;
      uVar2 = 0x50;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar2;
  }
LAB_080adb12:
  cVar1 = *(char *)(param_1 + 0x12);
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0x12) = cVar1 + -1;
    if (cVar1 == '\x01') {
      *(undefined1 *)(param_1 + 0xb9) = 0;
      *(undefined1 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0xffffffb0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      FUN_08005760(param_1 + 0x74,DAT_080adb7c,param_1 + 0x54,(int)*(short *)(param_1 + 0xa4));
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = DAT_080adb80;
      if (*(char *)(param_1 + 0x10) == '\0') {
        FUN_0801cf00(param_1,0x9d00);
      }
      else {
        FUN_0801cf00(param_1,DAT_080adb94);
      }
    }
  }
  return in_lr;
}


