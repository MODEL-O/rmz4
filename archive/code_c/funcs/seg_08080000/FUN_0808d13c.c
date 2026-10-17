// undefined FUN_0808d13c(void)
// entry 0x808d13c


undefined4 FUN_0808d13c(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(int *)(param_1 + 100) = -*(int *)(param_1 + 100);
        *(undefined1 *)(param_1 + 0x12) = 0x30;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      iVar5 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
      *(int *)(param_1 + 0x5c) = iVar5;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      if (iVar5 < *(int *)(param_1 + 0x60)) {
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      FUN_0808db28(param_1);
      FUN_0801cff0(param_1);
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != '\0') {
        return in_lr;
      }
      pcVar7 = (char *)(param_1 + 0xc0);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb8) + *(int *)(param_1 + 0x68) * (int)*pcVar7;
      *pcVar7 = -*pcVar7;
      uVar4 = *DAT_0808d264 * DAT_0808d268 + DAT_0808d26c;
      *DAT_0808d264 = uVar4 & 0x7fffffff;
      pbVar6 = (byte *)(param_1 + 0xc3);
      if ((((uVar4 & 0x7fffffff) >> 0x10 & 1) == 0) && (*pbVar6 < 3)) {
        *pbVar6 = *pbVar6 + 1;
        *(undefined1 *)(param_1 + 0xe) = 0;
        return in_lr;
      }
      *pbVar6 = 0;
      if ((*(byte *)(DAT_0808d270 + DAT_0808d274) & 0xf) == 1) {
        uVar3 = 3;
      }
      else {
        uVar3 = 2;
      }
      *(undefined1 *)(param_1 + 0xd) = uVar3;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    FUN_08005784(param_1 + 0x74,DAT_0808d1b4);
    FUN_0801cf00(param_1,DAT_0808d1b8);
    *(int *)(param_1 + 100) = (int)*(char *)(param_1 + 0xc0) * *(int *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar5;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
  FUN_0808db28(param_1);
  FUN_0801cff0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


