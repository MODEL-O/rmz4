// undefined FUN_080b4310(void)
// entry 0x80b4310


undefined4 FUN_080b4310(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,(uint)*(byte *)(param_1 + 0x10) * 9 + DAT_080b435c & 0xffff);
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined1 *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      uVar5 = DAT_080b4404;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined1 *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      uVar5 = 0x200;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar7 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar7;
    iVar6 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar6;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      sVar4 = FUN_08007c7c(iVar6 + DAT_080b4488,iVar7 + DAT_080b448c);
      if (sVar4 == 0) {
        sVar4 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x100);
        if (sVar4 != 0) goto LAB_080b4598;
        *(undefined4 *)(param_1 + 0x60) = DAT_080b44b0;
        uVar3 = 1;
      }
      else {
        FUN_0801cf00(param_1,(uint)*(byte *)(param_1 + 0x10) * 9 + DAT_080b4490 & 0xffff);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined1 *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
        *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
        *(undefined1 *)(param_1 + 0x12) = 0x10;
        uVar3 = 2;
      }
    }
    else {
      sVar4 = FUN_08007c7c(iVar6 + 0xc00,iVar7 + DAT_080b4408);
      if (sVar4 == 0) {
        sVar4 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x100);
        if (sVar4 != 0) goto LAB_080b4598;
        *(undefined4 *)(param_1 + 0x60) = DAT_080b4430;
        uVar3 = 1;
      }
      else {
        FUN_0801cf00(param_1,(uint)*(byte *)(param_1 + 0x10) * 9 + DAT_080b440c & 0xffff);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined1 *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
        *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
        *(undefined1 *)(param_1 + 0x12) = 0x10;
        uVar3 = 2;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0xf) == '\x01') {
      iVar7 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar7;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        sVar4 = FUN_08007c7c(iVar7 + DAT_080b4560,*(int *)(param_1 + 0x58) + DAT_080b4564);
        if (sVar4 != 0) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
          *(undefined1 *)(param_1 + 0x4c) = 1;
          bVar1 = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
          goto LAB_080b4534;
        }
      }
      else {
        sVar4 = FUN_08007c7c(iVar7 + 0xc00,*(int *)(param_1 + 0x58) + DAT_080b4500);
        if (sVar4 != 0) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
          *(undefined1 *)(param_1 + 0x4c) = 0;
          bVar1 = *(byte *)(param_1 + 0x4a) & 0xef;
LAB_080b4534:
          *(byte *)(param_1 + 0x4a) = bVar1;
          *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
        }
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
      sVar4 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54));
      if (sVar4 == 0) goto LAB_080b4598;
      uVar5 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar5;
    }
    else {
      uVar5 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar5;
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != -1) goto LAB_080b4598;
      FUN_0801cf00(param_1,(uint)*(byte *)(param_1 + 0x10) * 9 + DAT_080b45a4 & 0xffff);
    }
    uVar3 = 0;
  }
  *(undefined1 *)(param_1 + 0xf) = uVar3;
LAB_080b4598:
  FUN_0801cff0(param_1);
  return in_lr;
}


