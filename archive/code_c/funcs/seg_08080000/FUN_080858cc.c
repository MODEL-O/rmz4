// undefined FUN_080858cc(void)
// entry 0x80858cc


undefined4 FUN_080858cc(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined1 uVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar1 = 0 < *(int *)(*DAT_080858fc + 0x54) - *(int *)(param_1 + 0x54);
    if (bVar1 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    sVar4 = FUN_08007c7c(*(int *)(param_1 + 0x54) + (uint)bVar1 * 0x1400 + DAT_08085950,
                         *(int *)(param_1 + 0x58) + DAT_08085954);
    if (sVar4 != 0) {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      FUN_0808582c(param_1);
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_08085994);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') goto LAB_080859ec;
  iVar7 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xb8);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (iVar7 < 0) goto LAB_0808599c;
  }
  else if (-1 < iVar7) {
LAB_0808599c:
    if (iVar7 < 0) {
      iVar7 = -iVar7;
    }
    if (0x7000 < iVar7) {
      *(undefined1 *)(param_1 + 0xd) = 4;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  }
  uVar5 = *DAT_080859d8 * DAT_080859dc + DAT_080859e0;
  *DAT_080859d8 = uVar5 & 0x7fffffff;
  if (((uVar5 & 0x7fffffff) >> 0x10 & 0xf) < 10) {
    uVar3 = 3;
  }
  else {
    uVar3 = 4;
  }
  *(undefined1 *)(param_1 + 0xd) = uVar3;
  *(undefined1 *)(param_1 + 0xe) = 0;
LAB_080859ec:
  uVar6 = FUN_08008aa4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x400);
  FUN_08085418(param_1,uVar6,0x800);
  return in_lr;
}


