// undefined FUN_0803dfb0(void)
// entry 0x803dfb0


undefined4 FUN_0803dfb0(int param_1)

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
        if ((byte)(cVar2 + 1U) < 4) {
          *(undefined1 *)(iVar3 + 0x154) = 2;
          *(undefined1 *)(param_1 + 0xd) = 0;
          return in_lr;
        }
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
      goto LAB_0803e09e;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0803e04c);
    cVar2 = *(char *)(iVar3 + 0xe6);
    if (cVar2 != '\0') {
      if (cVar2 != -1) {
        *(char *)(iVar3 + 0xe6) = cVar2 + -1;
      }
      FUN_0803f000(iVar3,param_1,0,*(undefined1 *)(iVar3 + 0xc2),0x600,
                   *(char *)(param_1 + 0x13) * -0x10 + 'X',2,*(undefined1 *)(param_1 + 0x13));
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
  *(undefined1 *)(param_1 + 0x12) = 4;
LAB_0803e09e:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}


