// undefined FUN_0803e710(void)
// entry 0x803e710


undefined4 FUN_0803e710(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0xb4);
  bVar3 = *(byte *)(param_1 + 0xd);
  if (bVar3 != 1) {
    if (1 < bVar3) {
      if (bVar3 == 2) {
        cVar1 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar1;
        if (cVar1 != '\0') {
          return in_lr;
        }
        *(undefined1 *)(iVar5 + 0x154) = 3;
        *(undefined1 *)(param_1 + 0x12) = 0x10;
      }
      else {
        if (bVar3 != 3) {
          return in_lr;
        }
        cVar1 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar1;
        if (cVar1 != '\0') {
          return in_lr;
        }
        *(undefined1 *)(iVar5 + 0x154) = 4;
      }
      goto LAB_0803e8ba;
    }
    if (bVar3 != 0) {
      return in_lr;
    }
    cVar1 = FUN_0803ad84(param_1,0);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (0x80 < (byte)(cVar1 - 0x40U)) goto LAB_0803e770;
      bVar3 = 0x80 - (cVar1 - 0x40U & 0x7f);
    }
    else if ((byte)(cVar1 + 0xbfU) < 0x7f) {
LAB_0803e770:
      bVar3 = 0x40;
    }
    else {
      bVar3 = cVar1 + 0x40U & 0x7f;
    }
    if (bVar3 < 0x1f) {
      FUN_0801cf00(param_1,DAT_0803e7a0);
      uVar4 = 0x14;
      *(undefined4 *)(param_1 + 0x5c) = 0x700;
      uVar2 = DAT_0803e7a4;
    }
    else if (bVar3 < 0x35) {
      FUN_0801cf00(param_1,DAT_0803e7c0);
      uVar4 = 0x2a;
      *(undefined4 *)(param_1 + 0x5c) = 0xc00;
      uVar2 = DAT_0803e7c4;
    }
    else if (bVar3 < 0x4b) {
      FUN_0801cf00(param_1,DAT_0803e7e4);
      uVar4 = 0x40;
      *(undefined4 *)(param_1 + 0x5c) = 0xd00;
      uVar2 = 0x100;
    }
    else if (bVar3 < 0x61) {
      FUN_0801cf00(param_1,DAT_0803e804);
      uVar4 = 0x56;
      *(undefined4 *)(param_1 + 0x5c) = 0xc00;
      uVar2 = 0x700;
    }
    else {
      FUN_0801cf00(param_1,DAT_0803e884);
      uVar4 = 0x6c;
      *(undefined4 *)(param_1 + 0x5c) = 0x700;
      uVar2 = 0xd00;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar2;
    cVar1 = *(char *)(iVar5 + 0xe6);
    if (cVar1 != '\0') {
      if (cVar1 != -1) {
        *(char *)(iVar5 + 0xe6) = cVar1 + -1;
      }
      FUN_0803f000(iVar5,param_1,0,*(undefined1 *)(iVar5 + 0xc2),0x600,uVar4,2,
                   *(undefined1 *)(param_1 + 0x13));
    }
    *(undefined1 *)(iVar5 + 0x154) = 0;
    *(undefined1 *)(param_1 + 0x12) = 2;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 != '\0') {
    return in_lr;
  }
  *(undefined1 *)(iVar5 + 0x154) = 1;
  *(undefined1 *)(param_1 + 0x12) = 4;
LAB_0803e8ba:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}


