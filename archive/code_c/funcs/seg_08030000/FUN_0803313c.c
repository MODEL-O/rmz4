// undefined FUN_0803313c(void)
// entry 0x803313c


undefined4 FUN_0803313c(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = false;
  if ((*(int *)(DAT_0803319c + 0x630) == 0) ||
     (iVar3 = *(int *)(*(int *)(DAT_0803319c + 0x630) + 0x2c), iVar3 == 0)) {
    bVar1 = true;
  }
  else if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(int *)(param_1 + 0x54) == *(int *)(iVar3 + 0x54)) goto LAB_080331f4;
    FUN_0801cf00(param_1,0x200);
    if (*(int *)(iVar3 + 0x54) < *(int *)(param_1 + 0x54)) {
      *(undefined1 *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined4 *)(param_1 + 0x5c) = DAT_080331a0;
    }
    else {
      *(undefined1 *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined4 *)(param_1 + 0x5c) = 0x200;
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  else {
    iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (iVar2 < *(int *)(iVar3 + 0x54)) {
        *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54);
        goto LAB_080331f4;
      }
    }
    else if (*(int *)(iVar3 + 0x54) < iVar2) {
      *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54);
      goto LAB_080331f4;
    }
  }
  if (!bVar1) {
    return in_lr;
  }
LAB_080331f4:
  *(undefined1 *)(param_1 + 0xe) = 2;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return in_lr;
}


