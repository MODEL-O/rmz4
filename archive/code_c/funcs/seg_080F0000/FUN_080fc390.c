// undefined FUN_080fc390(void)
// entry 0x80fc390


undefined4 FUN_080fc390(int param_1)

{
  ushort uVar1;
  byte bVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fc3d8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x9800);
  FUN_0801cff0(param_1);
  if (*(byte *)(param_1 + 0x10) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  bVar2 = *(byte *)(param_1 + 0x10) & 1;
  *(byte *)(param_1 + 0x4c) = bVar2;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar2 << 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080fc45c,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080fc460;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined4 *)(param_1 + 0x30) = DAT_080fc464;
  *(undefined2 *)(param_1 + 0x26) = 1;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + DAT_080fc474;
    }
    else {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x1000;
    }
  }
  else {
    uVar4 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
  }
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
  *(int *)(param_1 + 0x40) = param_1 + 100;
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  if (*(char *)(param_1 + 0x11) == '\0') {
    FUN_080fc328(param_1,*(undefined1 *)(param_1 + 0x10),1);
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      uVar1 = *(ushort *)(DAT_080fc520 + DAT_080fc524);
      iVar5 = *(int *)(param_1 + 0x54);
    }
    else {
      if (*(ushort *)(DAT_080fc558 + DAT_080fc55c) <= DAT_080fc560) goto LAB_080fc548;
      iVar5 = *(int *)(param_1 + 0x54) + 0x1000;
      uVar1 = *(ushort *)(DAT_080fc558 + DAT_080fc55c + -2);
    }
    iVar5 = iVar5 - (uint)uVar1;
  }
  else if (*(char *)(param_1 + 0x11) == '\0') {
    iVar5 = *(int *)(param_1 + 0x54) + (uint)*(ushort *)(DAT_080fc4d8 + DAT_080fc4dc);
  }
  else {
    if (*(ushort *)(DAT_080fc4fc + DAT_080fc500) <= DAT_080fc504) goto LAB_080fc548;
    iVar5 = *(int *)(param_1 + 0x54) + DAT_080fc508 + (uint)*(ushort *)(DAT_080fc4fc + DAT_080fc500)
    ;
  }
  *(int *)(param_1 + 0x54) = iVar5;
LAB_080fc548:
  iVar6 = *(int *)(param_1 + 0xb4);
  iVar5 = iVar6 - *(int *)(param_1 + 0x54);
  uVar4 = DAT_080fc564;
  if (iVar5 < 0) {
    iVar5 = *(int *)(param_1 + 0x54) - iVar6;
    uVar4 = DAT_080fc5a4;
  }
  iVar5 = FUN_08128fb8(iVar5,uVar4);
  if (iVar5 < 3) {
    FUN_0801cf00(param_1,iVar5 + DAT_080fc5c8 & 0xffff);
  }
  else {
    FUN_0801cf00(param_1,DAT_080fc5a8);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  FUN_080fc5cc(param_1);
  return in_lr;
}


