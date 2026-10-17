// undefined FUN_08067894(void)
// entry 0x8067894


undefined4 FUN_08067894(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080678b8);
    FUN_08002b10(100);
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) << 2;
    *(undefined1 *)(param_1 + 0x12) = 0x3c;
LAB_080678fa:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (((*(char *)(param_1 + 0xe) == '\x01') && ('\x02' < *(char *)(param_1 + 0x71))) &&
          (*DAT_080678e8 != 0)) {
    uVar2 = DAT_080678ec;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar2 = 0x4b0;
    }
    *(undefined4 *)(*DAT_080678e8 + 0xec) = uVar2;
    goto LAB_080678fa;
  }
  FUN_0801cff0(param_1);
  iVar4 = *(int *)(param_1 + 0x5c);
  if (iVar4 != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
    iVar4 = iVar4 + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar4;
    uVar3 = *(byte *)(param_1 + 10) & 0x10;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (-1 < iVar4) goto LAB_08067934;
    }
    else {
      if (iVar4 < 1) goto LAB_08067934;
      uVar3 = 0;
    }
    *(uint *)(param_1 + 0x5c) = uVar3;
  }
LAB_08067934:
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined1 *)(param_1 + 0xd) = 0x11;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


