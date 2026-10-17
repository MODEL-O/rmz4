// undefined FUN_080599c8(void)
// entry 0x80599c8


ulonglong FUN_080599c8(int param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  int aiStack_3c [6];
  int local_24;
  int local_20;
  
  piVar3 = aiStack_3c + 1;
  aiStack_3c[1] = *DAT_08059a5c;
  aiStack_3c[2] = DAT_08059a5c[1];
  aiStack_3c[3] = DAT_08059a5c[2];
  aiStack_3c[4] = DAT_08059a5c[3];
  aiStack_3c[5] = DAT_08059a5c[4];
  uVar6 = *(byte *)(param_1 + 10) >> 4 & 1;
  local_24 = *(int *)(*DAT_08059a60 + 0x54);
  local_20 = *(int *)(*DAT_08059a60 + 0x58) + DAT_08059a64;
  iVar1 = FUN_0810d338((uVar6 * -2 + 1) * (local_24 - *(int *)(param_1 + 0x54)),
                       local_20 - *(int *)(param_1 + 0xbc));
  iVar4 = 0;
  do {
    iVar5 = iVar4 + 1;
    iVar7 = iVar4;
    if (iVar1 * 0x1000000 + 0x40000000U >> 0x18 <=
        (*piVar3 + -0x80 + (piVar3[1] - *piVar3) / 2 & 0xffU)) break;
    piVar3 = piVar3 + 1;
    iVar4 = iVar5;
    iVar7 = 0;
  } while (iVar5 < 4);
  uVar2 = (uint)*param_2;
  iVar7 = iVar7 - uVar2;
  if (iVar7 < 1) {
    if (iVar7 < 0) {
      iVar7 = uVar2 - 1;
    }
  }
  else {
    iVar7 = uVar2 + 1;
  }
  *param_2 = (byte)iVar7;
  return CONCAT44(in_lr,aiStack_3c[iVar7 + 1] * (uVar6 * -2 + 1) + 0x40) & 0xffffffff000000ff;
}


