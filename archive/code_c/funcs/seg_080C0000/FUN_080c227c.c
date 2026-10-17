// undefined FUN_080c227c(void)
// entry 0x80c227c


undefined4 FUN_080c227c(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  byte bVar6;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x60) == DAT_080c22c4) {
    FUN_0801cf00(param_1,DAT_080c22c8);
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  if ((*(char *)(param_1 + 0x12) == '\v') && (*(char *)(param_1 + 0xbd) != '\0')) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar3 = *(int *)(param_1 + 0x54);
      iVar5 = DAT_080c2314;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x54);
      iVar5 = 0x2000;
    }
    FUN_080c1a78(iVar3 + iVar5,*(undefined4 *)(param_1 + 0xb8),*(undefined1 *)(param_1 + 0x11),
                 *(char *)(param_1 + 0xbd));
  }
  if (0 < *(int *)(param_1 + 0x60)) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    bVar2 = *(byte *)(param_1 + 10);
    bVar6 = bVar2 & 0xfb;
    *(byte *)(param_1 + 10) = bVar6;
    bVar1 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar1;
    if ((bVar1 & 1) == 0) {
      bVar2 = bVar6 | 1;
    }
    else {
      bVar2 = bVar2 & 0xfa;
    }
    *(byte *)(param_1 + 10) = bVar2;
  }
  bVar2 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar2 + 1;
  if (0x40 < bVar2) {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c234c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    FUN_080c1bd8(param_1);
  }
  return in_lr;
}


