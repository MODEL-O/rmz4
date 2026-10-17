// undefined FUN_0803e988(void)
// entry 0x803e988


undefined4 FUN_0803e988(int param_1)

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
        FUN_0801cf00(param_1,0x8300);
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
      goto LAB_0803ea4c;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0803ea0c);
    FUN_0803ad84(param_1,0);
    cVar2 = *(char *)(iVar3 + 0xe6);
    if (cVar2 != '\0') {
      if (cVar2 != -1) {
        *(char *)(iVar3 + 0xe6) = cVar2 + -1;
      }
      FUN_080440c4(iVar3,param_1);
      FUN_08002b10(0x70);
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
  *(undefined1 *)(param_1 + 0x12) = 0x10;
LAB_0803ea4c:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}


