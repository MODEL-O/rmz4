// undefined FUN_080011fc(void)
// entry 0x80011fc


void FUN_080011fc(void)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  byte *pbVar5;
  uint *puVar6;
  int *piVar7;
  iVar2 = 0x03001760;
  puVar6 = (uint *)(0x03001760 + 0x00001350);
  piVar7 = (int *)(0x03001760 + 0x00001304);
  do {
    *puVar6 = 0;
    pbVar5 = (byte *)(iVar2 + 0x00001308);
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
          FUN_080002dc(pbVar5,*(undefined4 *)(pbVar5 + 4),*(undefined4 *)(pbVar5 + 8),0x02000000);
        }
      }
      uVar3 = *puVar6;
      *puVar6 = uVar3 + 1;
      pbVar5 = pbVar5 + 0x18;
    } while (uVar3 + 1 < 3);
    piVar4 = (int *)(iVar2 + 0x1300);
    *piVar4 = *piVar4 + 1;
  } while (*piVar7 != 0);
  return;
}


