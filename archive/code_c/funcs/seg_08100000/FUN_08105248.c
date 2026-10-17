// undefined FUN_08105248(void)
// entry 0x8105248


undefined4 FUN_08105248(int param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb5) == '\x01') {
    cVar1 = *(char *)(param_1 + 0x12);
    if (cVar1 == '\0') {
      piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810528c);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 8);
      goto LAB_08105300;
    }
    *(byte *)(param_1 + 0x12) = cVar1 - 1U;
    if (0x27 < (byte)(cVar1 - 1U)) goto LAB_08105300;
    if ((cVar1 - 1U & 2) == 0) goto LAB_081052f8;
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    if (*(char *)(param_1 + 0x12) == '\0') {
      if (*(char *)(param_1 + 0xb6) == '\0') {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        *(char *)(param_1 + 0xb6) = '\x01';
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
      sVar3 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54));
      if (sVar3 != 0) {
        if (*(char *)(param_1 + 0x11) == '\x04') {
          iVar4 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
          iVar4 = iVar4 + DAT_081052d8;
        }
        else {
          iVar4 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        }
        *(int *)(param_1 + 0x58) = iVar4;
        *(undefined1 *)(param_1 + 0x12) = 0xdc;
        *(undefined1 *)(param_1 + 0xb5) = 1;
      }
      goto LAB_08105300;
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
LAB_081052f8:
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar2;
LAB_08105300:
  if (*(char *)(param_1 + 0xb4) == '\x01') {
    piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08105328);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 8);
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


