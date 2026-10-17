// undefined FUN_080357e4(void)
// entry 0x80357e4


undefined4 FUN_080357e4(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  byte *pbVar7;
  char *pcVar8;
  byte *pbVar9;
  undefined4 in_lr;
  
  pbVar9 = (byte *)(param_1 + 0x102);
  bVar1 = *pbVar9;
  if (bVar1 == 1) {
LAB_08035838:
    FUN_0803a3b0(param_1,0x1800);
    pbVar7 = (byte *)(DAT_0803586c + param_1);
    if ('\x01' < *(char *)(param_1 + 0x72)) goto LAB_080358ce;
    FUN_0803c464(param_1,0x13);
    pcVar8 = (char *)(param_1 + 0x102);
    cVar2 = *pcVar8 + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        pbVar7 = (byte *)(DAT_08035808 + param_1);
        goto LAB_080358ce;
      }
      FUN_0801cf00(param_1,0x1800);
      *(undefined1 *)(param_1 + DAT_0803586c) = 0x18;
      *pbVar9 = *pbVar9 + 1;
      goto LAB_08035838;
    }
    if (bVar1 == 2) {
      FUN_0803a3b0(param_1,0x1800);
      pbVar7 = (byte *)(param_1 + DAT_08035898);
      if (*pbVar7 < 9) {
        FUN_0801cf00(param_1,DAT_0803589c);
        *pbVar9 = *pbVar9 + 1;
      }
      goto LAB_080358ce;
    }
    if (bVar1 != 3) {
      pbVar7 = (byte *)(DAT_0803581c + param_1);
      goto LAB_080358ce;
    }
    pbVar7 = (byte *)(DAT_08035918 + param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto LAB_080358ce;
    *(byte *)(param_1 + DAT_0803591c) = *(byte *)(param_1 + DAT_0803591c) & 0xfd;
    cVar2 = '\0';
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    pcVar8 = (char *)(param_1 + 0x100);
  }
  *pcVar8 = cVar2;
LAB_080358ce:
  if (*pbVar7 != 0) {
    *pbVar7 = *pbVar7 - 1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      sVar3 = FUN_080386d4(param_1);
      sVar4 = FUN_08038790(param_1);
      sVar5 = FUN_080386d4(param_1);
      iVar6 = FUN_08128fb8(((int)sVar4 - (int)sVar5) * (uint)*pbVar7,0x18);
      iVar6 = -iVar6 - (int)sVar3;
    }
    else {
      sVar3 = FUN_080386d4(param_1);
      sVar4 = FUN_08038790(param_1);
      sVar5 = FUN_080386d4(param_1);
      iVar6 = FUN_08128fb8(((int)sVar4 - (int)sVar5) * (uint)*pbVar7,0x18);
      iVar6 = sVar3 + iVar6;
    }
    *(int *)(param_1 + 0x5c) = iVar6;
  }
  return in_lr;
}


