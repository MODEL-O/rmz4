// undefined FUN_081195d4(void)
// entry 0x81195d4


undefined4 FUN_081195d4(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + DAT_081195fc);
  iVar9 = param_1 + DAT_08119600;
  pbVar7 = (byte *)(param_1 + DAT_08119604);
  bVar1 = *pbVar7;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) goto LAB_081197cc;
      *(undefined1 *)(param_1 + DAT_08119768) = 1;
      uVar8 = 0;
      uVar13 = 0;
      pcVar6 = (char *)(iVar4 + 0xbc);
      if (*pcVar6 == -1) goto LAB_08119724;
      uVar11 = uVar13;
      if (*(char *)(iVar9 + 1) != '\0') {
        do {
          uVar13 = uVar13 + 1 & 0xff;
LAB_08119724:
          do {
            uVar8 = uVar8 + 1 & 0xff;
            uVar11 = uVar13;
            if (3 < uVar8) goto LAB_08119742;
          } while (pcVar6[uVar8] == -1);
          uVar11 = uVar8;
        } while (uVar13 != *(byte *)(param_1 + DAT_0811976c + 1));
      }
LAB_08119742:
      pcVar6 = pcVar6 + uVar11;
      if ((*pcVar6 == '\0') ||
         (uVar3 = FUN_0802b61c(iVar4), (uVar3 & 0xff) == *(ushort *)(iVar4 + 0xa4))) {
        FUN_08002b10(4);
        iVar9 = DAT_081197c4;
      }
      else {
        pcVar12 = (char *)(param_1 + DAT_081197a4);
        cVar2 = *pcVar12;
        *pcVar12 = cVar2 + -1;
        if ((char)(cVar2 + -1) != -1) goto LAB_081197cc;
        if (*pcVar6 != '\0') {
          *pcVar6 = *pcVar6 + -1;
          cVar2 = FUN_0802b5c4(iVar4);
          if (cVar2 == '\0') {
            FUN_081199ac(iVar4);
            iVar9 = DAT_081197a8;
            goto LAB_081197bc;
          }
          if (*pcVar6 != '\0') {
            *pcVar12 = '\x03';
            goto LAB_081197cc;
          }
        }
        FUN_081199ac(iVar4);
        iVar9 = DAT_081197c4;
      }
LAB_081197bc:
      *(undefined1 *)(param_1 + iVar9) = 1;
      goto LAB_081197cc;
    }
    if (bVar1 != 0) goto LAB_081197cc;
    *(undefined1 *)(iVar9 + 1) = 0;
    *pbVar7 = *pbVar7 + 1;
  }
  if ((*(ushort *)(DAT_08119648 + 6) & 0x10) == 0) {
    if (((*(ushort *)(DAT_08119648 + 6) & 0x20) != 0) &&
       (iVar9 = param_1 + DAT_08119694, *(char *)(iVar9 + 1) != '\0')) {
      FUN_08002b10(1);
      *(char *)(iVar9 + 1) = *(char *)(iVar9 + 1) + -1;
    }
  }
  else {
    iVar9 = param_1 + DAT_0811964c;
    bVar1 = *(byte *)(iVar9 + 1);
    uVar8 = FUN_08119978(param_1);
    if ((int)(uint)bVar1 < (int)((uVar8 & 0xff) - 1)) {
      FUN_08002b10(1);
      *(char *)(iVar9 + 1) = *(char *)(iVar9 + 1) + '\x01';
    }
  }
  iVar9 = param_1 + DAT_08119694;
  iVar10 = *(int *)(iVar9 + 0x20);
  *(uint *)(iVar10 + 0x74) = (uint)*(byte *)(iVar9 + 1) * 0x1800 + 0x8000;
  if ((*(byte *)(iVar9 + 1) & 1) == 0) {
    uVar5 = 0x6000;
  }
  else {
    uVar5 = 0x5800;
  }
  *(undefined4 *)(iVar10 + 0x78) = uVar5;
  uVar3 = *(ushort *)(DAT_081196c4 + 4);
  uVar8 = uVar3 & 1;
  if ((uVar3 & 1) == 0) {
    if ((uVar3 & 2) != 0) {
      FUN_08002b10(3);
      iVar9 = *(int *)(param_1 + DAT_081196f8 + 0x20);
      *(uint *)(iVar9 + 0x74) = uVar8;
      *(uint *)(iVar9 + 0x78) = uVar8;
      *(char *)(param_1 + 3) = (char)uVar8;
      *(char *)(param_1 + DAT_081196fc) = (char)uVar8;
    }
  }
  else {
    *(char *)(param_1 + DAT_081196c8) = *(char *)(param_1 + DAT_081196c8) + '\x01';
    *(undefined1 *)(param_1 + DAT_081196cc) = 0;
  }
LAB_081197cc:
  pcVar6 = (char *)(iVar4 + 0xbc);
  uVar8 = 0;
  uVar13 = 0;
  if (*pcVar6 == -1) goto LAB_081197ea;
  uVar11 = uVar13;
  if (*(char *)(param_1 + DAT_08119834 + 1) != '\0') {
    do {
      uVar13 = uVar13 + 1 & 0xff;
LAB_081197ea:
      do {
        uVar8 = uVar8 + 1 & 0xff;
        uVar11 = uVar13;
        if (3 < uVar8) goto LAB_08119808;
      } while (pcVar6[uVar8] == -1);
      uVar11 = uVar8;
    } while (uVar13 != *(byte *)(param_1 + DAT_08119834 + 1));
  }
LAB_08119808:
  FUN_0810d85c((uint)*(ushort *)(DAT_0811982c + 0xe8) + DAT_08119830,1,0x10);
  bVar1 = pcVar6[uVar11];
  if (bVar1 < 10) {
    FUN_08118348(bVar1,0xc,0x12);
  }
  else {
    FUN_08118348(bVar1,0xd,0x12);
  }
  return in_lr;
}


