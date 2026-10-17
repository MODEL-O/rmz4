// undefined FUN_08042464(void)
// entry 0x8042464


undefined4 FUN_08042464(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 0xfa) == '\x02') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    goto LAB_08042744;
  }
  if (*(byte *)(param_1 + 0x12) < 0x11) {
LAB_080424f2:
    if (*(char *)(param_1 + 0x12) == '\x10') {
      FUN_0801ce54(param_1);
      FUN_0801ceec(param_1);
      FUN_0801cf00(param_1,DAT_08042560);
    }
    *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12) << 4;
    *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12) << 4;
  }
  else {
    sVar2 = FUN_080427fc(*(int *)(param_1 + 0x54) + 0x400,*(int *)(param_1 + 0x58) + 0x400);
    if ((((sVar2 == 0) &&
         (sVar2 = FUN_080427fc(*(int *)(param_1 + 0x54) + 0x400,
                               *(int *)(param_1 + 0x58) + DAT_0804255c), sVar2 == 0)) &&
        (sVar2 = FUN_080427fc(*(int *)(param_1 + 0x54) + DAT_0804255c,
                              *(int *)(param_1 + 0x58) + 0x400), sVar2 == 0)) &&
       (sVar2 = FUN_080427fc(*(int *)(param_1 + 0x54) + DAT_0804255c,
                             *(int *)(param_1 + 0x58) + DAT_0804255c), sVar2 == 0)) {
      *(undefined1 *)(param_1 + 0x12) = 0x10;
    }
    if (*(byte *)(param_1 + 0x12) < 0x11) goto LAB_080424f2;
  }
  FUN_0801cff0(param_1);
  if (*(int *)(param_1 + 0x5c) == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    if (*(int *)(param_1 + 100) < 1) {
      iVar6 = FUN_08008988(*(undefined4 *)(param_1 + 0x54));
      iVar5 = *(int *)(param_1 + 0x54);
      if (iVar5 - iVar6 < 0) {
        iVar6 = FUN_08008988(iVar5,*(undefined4 *)(param_1 + 0x58));
        if (iVar6 - *(int *)(param_1 + 0x54) <= DAT_080425f0) goto LAB_080425c2;
      }
      else {
        iVar6 = FUN_08008988(iVar5,*(undefined4 *)(param_1 + 0x58));
        if (*(int *)(param_1 + 0x54) - iVar6 <= DAT_080425ac) {
LAB_080425c2:
          uVar3 = FUN_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
          goto LAB_080425ca;
        }
      }
    }
    else {
      iVar6 = FUN_08008868(*(undefined4 *)(param_1 + 0x54));
      iVar5 = *(int *)(param_1 + 0x54);
      if (iVar5 - iVar6 < 0) {
        iVar6 = FUN_08008868(iVar5,*(undefined4 *)(param_1 + 0x58));
        if (iVar6 - *(int *)(param_1 + 0x54) <= DAT_08042584) goto LAB_0804257a;
      }
      else {
        iVar6 = FUN_08008868(iVar5,*(undefined4 *)(param_1 + 0x58));
        if (*(int *)(param_1 + 0x54) - iVar6 <= DAT_08042564) {
LAB_0804257a:
          uVar3 = FUN_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
LAB_080425ca:
          *(undefined4 *)(param_1 + 0x54) = uVar3;
        }
      }
    }
    sVar2 = FUN_080427fc(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar2 == 0) {
      sVar2 = FUN_080427fc(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100) * 0x100,
                           *(undefined4 *)(param_1 + 0x58));
      if (sVar2 != 0) goto LAB_0804270e;
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) << 10;
      if (*(int *)(param_1 + 0x60) < 1) goto LAB_0804261c;
      uVar3 = 0xffffffff;
    }
    else {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) * -0x400;
      if (*(int *)(param_1 + 0x60) < 1) {
        uVar3 = 0xffffffff;
      }
      else {
LAB_0804261c:
        uVar3 = 1;
      }
    }
    *(undefined4 *)(param_1 + 0x68) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar6;
    if (*(int *)(param_1 + 0x68) < 1) {
      iVar6 = FUN_08008748(iVar6,*(undefined4 *)(param_1 + 0x58));
      if (*(int *)(param_1 + 0x58) - iVar6 < 0) {
        iVar6 = FUN_08008748(*(undefined4 *)(param_1 + 0x54));
        if (iVar6 - *(int *)(param_1 + 0x58) <= DAT_080426dc) goto LAB_080426b0;
      }
      else {
        iVar6 = FUN_08008748(*(undefined4 *)(param_1 + 0x54));
        if (*(int *)(param_1 + 0x58) - iVar6 <= DAT_0804269c) {
LAB_080426b0:
          uVar3 = FUN_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
          goto LAB_080426b8;
        }
      }
    }
    else {
      iVar6 = FUN_08008534(iVar6,*(undefined4 *)(param_1 + 0x58));
      if (*(int *)(param_1 + 0x58) - iVar6 < 0) {
        iVar6 = FUN_08008534(*(undefined4 *)(param_1 + 0x54));
        if (iVar6 - *(int *)(param_1 + 0x58) <= DAT_08042674) goto LAB_08042668;
      }
      else {
        iVar6 = FUN_08008534(*(undefined4 *)(param_1 + 0x54));
        if (*(int *)(param_1 + 0x58) - iVar6 <= DAT_08042654) {
LAB_08042668:
          uVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
LAB_080426b8:
          *(undefined4 *)(param_1 + 0x58) = uVar3;
        }
      }
    }
    sVar2 = FUN_080427fc(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar2 == 0) {
      sVar2 = FUN_080427fc(*(undefined4 *)(param_1 + 0x54),
                           *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68) * 0x100);
      if (sVar2 != 0) goto LAB_0804270e;
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x68) << 10;
      if (*(int *)(param_1 + 0x5c) < 1) goto LAB_08042706;
      uVar3 = 0xffffffff;
    }
    else {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x68) * -0x400;
      if (*(int *)(param_1 + 0x5c) < 1) {
        uVar3 = 0xffffffff;
      }
      else {
LAB_08042706:
        uVar3 = 1;
      }
    }
    *(undefined4 *)(param_1 + 100) = uVar3;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
LAB_0804270e:
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 != -1) && ((*(uint *)(param_1 + 0x8c) & 4) == 0)) {
    return in_lr;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(uint *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
LAB_08042744:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08042764);
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0xc);
  return in_lr;
}


