// undefined FUN_0803e254(void)
// entry 0x803e254


undefined4 FUN_0803e254(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        cVar2 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar2;
        if (cVar2 != '\0') {
          return in_lr;
        }
        cVar2 = *(char *)(param_1 + 0x13);
        *(char *)(param_1 + 0x13) = cVar2 + '\x01';
        if ((byte)(cVar2 + 1U) < 0x10) {
          *(undefined1 *)(iVar3 + 0x154) = 2;
          *(undefined1 *)(param_1 + 0xd) = 0;
          return in_lr;
        }
        FUN_0801cf00(param_1,DAT_0803e334);
        *(undefined1 *)(iVar3 + 0x154) = 3;
        *(undefined1 *)(param_1 + 0x12) = 0x10;
      }
      else {
        if (bVar1 != 3) {
          return in_lr;
        }
        cVar2 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar2;
        if (cVar2 != '\0') {
          return in_lr;
        }
        *(undefined1 *)(iVar3 + 0x154) = 4;
      }
      goto LAB_0803e34e;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0803e294);
    if (*(byte *)(param_1 + 0x13) == 0) {
      cVar2 = *(char *)(iVar3 + 0xe6);
      if (cVar2 == '\0') {
        *(undefined1 *)(param_1 + 0x13) = 0x10;
      }
      else {
        if (cVar2 != -1) {
          *(char *)(iVar3 + 0xe6) = cVar2 + -1;
        }
        FUN_0803f608(iVar3,param_1,*(byte *)(param_1 + 0x13) >> 2);
        FUN_08002b10(0x3e);
      }
    }
    else {
      FUN_0803f608(iVar3,param_1,*(byte *)(param_1 + 0x13) >> 2);
    }
    *(undefined1 *)(iVar3 + 0x154) = 0;
    *(undefined1 *)(param_1 + 0x12) = 2;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 != '\0') {
    return in_lr;
  }
  *(undefined1 *)(iVar3 + 0x154) = 1;
  *(undefined1 *)(param_1 + 0x12) = 2;
LAB_0803e34e:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}


