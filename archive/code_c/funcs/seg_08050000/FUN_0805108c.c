// undefined FUN_0805108c(void)
// entry 0x805108c


undefined4 FUN_0805108c(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  short sVar5;
  short *psVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0xf) = 0;
    if ((((*(byte *)(DAT_080510e8 + DAT_080510ec) & 0x10) != 0) &&
        ((*(byte *)(DAT_080510f0 + 4) & 4) == 0)) || (*DAT_080510f4 == 0x10)) {
      psVar6 = (short *)(param_1 + 0xa4);
      if ((*psVar6 != 0) && (*psVar6 < 0x40)) {
        FUN_0801cf00(param_1,DAT_080510f8);
        if (*psVar6 + 3 < 0x41) {
          sVar5 = *psVar6 + 3;
        }
        else {
          sVar5 = 0x40;
        }
        *psVar6 = sVar5;
        FUN_08002b10(0xf4);
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
    }
    if (*(char *)(param_1 + 0xf) == '\0') {
      if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_08051138)
      {
        FUN_0801cf00(param_1);
      }
      FUN_08005784(param_1 + 0x74,DAT_0805113c);
    }
    else {
      FUN_08005784(param_1 + 0x74,DAT_08051158);
    }
    if (*(short *)(param_1 + 0xa4) < 0x21) {
      if (*(short *)(param_1 + 0xa4) < 0x11) {
        uVar4 = 0x18;
      }
      else {
        uVar4 = 0x20;
      }
    }
    else {
      uVar4 = 0x30;
    }
    *(undefined1 *)(param_1 + 0x12) = uVar4;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar7 = *DAT_080511bc;
  *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(iVar7 + 0x54);
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar7 + 0x54);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  if (*(char *)(param_1 + 0xf) != '\0') {
    cVar3 = *(char *)(param_1 + 0x13);
    *(char *)(param_1 + 0x13) = cVar3 + '\x01';
    cVar3 = FUN_08129198(cVar3,6);
    if (cVar3 == '\0') {
      uVar4 = FUN_08129120(*(undefined1 *)(param_1 + 0x13),6);
      FUN_080dcd18(param_1,4,uVar4);
    }
  }
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == -1) {
    FUN_08005784(param_1 + 0x74,DAT_08051220);
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


