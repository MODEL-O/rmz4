// undefined FUN_080011fc(void)
// entry 0x80011fc


undefined4 FUN_080011fc(void)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  byte *pbVar5;
  uint *puVar6;
  int *piVar7;
  undefined4 in_lr;
  
  iVar2 = DAT_08001280;
  puVar6 = (uint *)(DAT_08001280 + DAT_08001284);
  piVar7 = (int *)(DAT_08001280 + DAT_08001288);
  do {
    *puVar6 = 0;
    pbVar5 = (byte *)(iVar2 + DAT_0800128c);
    do {
      if ((*pbVar5 & 9) == 0) {
        if (((*pbVar5 & 4) != 0) &&
           ((sVar1 = *(short *)(pbVar5 + 2), *(short *)(pbVar5 + 2) == 0 ||
            (*(short *)(pbVar5 + 2) = sVar1 + -1, (short)(sVar1 + -1) == 0)))) {
          *pbVar5 = 2;
        }
        if (*pbVar5 == 2) {
          if (pbVar5[1] != 0) {
            FUN_080012b8(*puVar6,*(undefined4 *)(pbVar5 + 4));
          }
          FUN_080002dc(pbVar5,*(undefined4 *)(pbVar5 + 4),*(undefined4 *)(pbVar5 + 8),DAT_08001290);
        }
      }
      uVar3 = *puVar6;
      *puVar6 = uVar3 + 1;
      pbVar5 = pbVar5 + 0x18;
    } while (uVar3 + 1 < 3);
    piVar4 = (int *)(iVar2 + 0x1300);
    *piVar4 = *piVar4 + 1;
  } while (*piVar7 != 0);
  return in_lr;
}


