// undefined FUN_080afa50(void)
// entry 0x80afa50


undefined4 FUN_080afa50(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\0') && ((*(uint *)(param_1 + 0x8c) & 0x200) != 0)) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080afa84);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080afb38(param_1);
  }
  else {
    if (*(char *)(param_1 + 0xb6) == '\x01') {
      if (*(char *)(param_1 + 0x10) == '\0') {
        FUN_080b0124(param_1);
      }
      if (*(int *)(param_1 + 0x28) == 0) {
        FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080afad0));
        if (*(char *)(param_1 + 0x10) == '\0') {
          iVar3 = *(int *)(param_1 + 0x2c);
          *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
          *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(param_1 + 0x58);
        }
        if (*(char *)(param_1 + 0x13) != '\0') {
          *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
        }
      }
      else {
        FUN_080b0200(param_1);
      }
    }
    else {
      FUN_080b022c(param_1);
    }
    if (*(char *)(param_1 + 0x10) == '\x01') {
      pcVar4 = (char *)(param_1 + 0xc0);
      if (*pcVar4 == '\0') {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        cVar1 = *(char *)(param_1 + 0xc1) + -1;
        *(char *)(param_1 + 0xc1) = cVar1;
        if (cVar1 == '\0') {
          *pcVar4 = '\x03';
        }
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        cVar1 = *pcVar4;
        *pcVar4 = cVar1 + -1;
        if ((char)(cVar1 + -1) == '\0') {
          *(undefined1 *)(param_1 + 0xc1) = 1;
        }
      }
    }
    FUN_0801cff0(param_1);
  }
  return in_lr;
}


