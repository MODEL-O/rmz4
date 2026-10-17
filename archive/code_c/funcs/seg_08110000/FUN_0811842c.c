// undefined FUN_0811842c(void)
// entry 0x811842c


undefined4 FUN_0811842c(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  short sVar7;
  undefined2 uVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  ushort *puVar13;
  ushort uVar14;
  byte *pbVar15;
  ushort *puVar16;
  ushort uVar17;
  int iVar18;
  undefined4 uVar19;
  int iVar20;
  uint uVar21;
  undefined4 in_lr;
  int local_24;
  
  iVar9 = *(int *)(param_1 + DAT_08118654);
  puVar10 = (undefined1 *)(param_1 + DAT_08118658);
  *puVar10 = 0;
  puVar10[2] = 0;
  FUN_08001d30(DAT_0811865c,(*DAT_08118660 & 0xc) << 0xc);
  FUN_08002208(DAT_08118664,0);
  iVar18 = DAT_08118668 + param_1;
  FUN_080027b8(iVar18,DAT_0811866c,0x14,0,0);
  pbVar15 = (byte *)*DAT_08118670;
  bVar1 = *pbVar15;
  *(ushort *)(iVar18 + 0x18) = bVar1 + 0xc0 | 0x2000;
  *(ushort *)(param_1 + 0xf30) = bVar1 + 0xe0 | 0x2000;
  bVar1 = pbVar15[1];
  *(ushort *)(param_1 + 0xf70) = -(ushort)bVar1 + 0xd0 | 0x2000;
  *(ushort *)(param_1 + 0xfb0) = -(ushort)bVar1 + 0xf0 | 0x2000;
  uVar19 = *(undefined4 *)(pbVar15 + 8);
  sVar7 = FUN_08129120(uVar19,DAT_08118674);
  *(ushort *)(param_1 + DAT_08118678) = sVar7 + 0xd1U | 0x2000;
  uVar11 = FUN_08129120(uVar19,DAT_0811867c);
  sVar7 = FUN_08129198(uVar11,10);
  *(ushort *)(param_1 + DAT_08118680) = sVar7 + 0xd1U | 0x2000;
  uVar11 = FUN_08129120(uVar19,0xe10);
  uVar11 = FUN_08129198(uVar11,0x3c);
  sVar7 = FUN_08129120(uVar11,10);
  *(ushort *)(param_1 + DAT_08118684) = sVar7 + 0xd1U | 0x2000;
  sVar7 = FUN_08129198(uVar11,10);
  *(ushort *)(param_1 + DAT_08118688) = sVar7 + 0xd1U | 0x2000;
  uVar11 = FUN_08129120(uVar19,0x3c);
  uVar11 = FUN_08129198(uVar11,0x3c);
  sVar7 = FUN_08129120(uVar11,10);
  *(ushort *)(param_1 + DAT_0811868c) = sVar7 + 0xd1U | 0x2000;
  sVar7 = FUN_08129198(uVar11,10);
  *(ushort *)(param_1 + DAT_08118690) = sVar7 + 0xd1U | 0x2000;
  if (DAT_08118694 < *(ushort *)(iVar9 + 0xba)) {
    uVar8 = FUN_08129120((uint)*(ushort *)(iVar9 + 0xba),1000);
    sVar7 = FUN_08129198(uVar8,10);
    *(ushort *)(param_1 + DAT_08118698) = sVar7 + 0xd1U | 0x2000;
  }
  if (99 < *(ushort *)(iVar9 + 0xba)) {
    uVar8 = FUN_08129120(*(ushort *)(iVar9 + 0xba),100);
    sVar7 = FUN_08129198(uVar8,10);
    *(ushort *)(param_1 + DAT_0811869c) = sVar7 + 0xd1U | 0x2000;
  }
  if (9 < *(ushort *)(iVar9 + 0xba)) {
    uVar8 = FUN_08129120(*(ushort *)(iVar9 + 0xba),10);
    sVar7 = FUN_08129198(uVar8,10);
    *(ushort *)(param_1 + DAT_081186a0) = sVar7 + 0xd1U | 0x2000;
  }
  sVar7 = FUN_08129198(*(undefined2 *)(iVar9 + 0xba),10);
  *(ushort *)(param_1 + 0xf90) = sVar7 + 0xd1U | 0x2000;
  FUN_08119a74(param_1);
  cVar6 = FUN_0802b62c(iVar9);
  if (cVar6 == '\x14') {
    uVar17 = 0x54;
    uVar14 = 0x53;
    puVar13 = (ushort *)(param_1 + DAT_081186a4);
    iVar18 = 1;
    do {
      *puVar13 = uVar14 | 0x2000;
      puVar13[1] = uVar17 | 0x2000;
      uVar17 = uVar17 + 0x20;
      uVar14 = uVar14 + 0x20;
      puVar13 = puVar13 + 0x20;
      iVar18 = iVar18 + -1;
    } while (-1 < iVar18);
  }
  else {
    cVar6 = FUN_0802b62c(iVar9);
    if (cVar6 == '\x18') {
      uVar17 = 0x54;
      uVar14 = 0x53;
      puVar13 = (ushort *)(param_1 + DAT_081186f8);
      iVar20 = 1;
      do {
        *puVar13 = uVar14 | 0x2000;
        puVar13[1] = uVar14 | 0x2000;
        *(ushort *)(iVar18 + 0x116) = uVar17 | 0x2000;
        uVar17 = uVar17 + 0x20;
        uVar14 = uVar14 + 0x20;
        puVar13 = puVar13 + 0x20;
        iVar18 = iVar18 + 0x40;
        iVar20 = iVar20 + -1;
      } while (-1 < iVar20);
    }
    else {
      cVar6 = FUN_0802b62c(iVar9);
      if (cVar6 == '\x1c') {
        uVar17 = 0x54;
        uVar14 = 0x53;
        puVar16 = (ushort *)(param_1 + DAT_08118744);
        iVar18 = 1;
        puVar13 = (ushort *)(param_1 + DAT_08118744 + 2);
        do {
          uVar2 = uVar14 | 0x2000;
          *puVar16 = uVar2;
          *puVar13 = uVar2;
          puVar13[1] = uVar2;
          puVar13[2] = uVar17 | 0x2000;
          uVar17 = uVar17 + 0x20;
          uVar14 = uVar14 + 0x20;
          puVar16 = puVar16 + 0x20;
          puVar13 = puVar13 + 0x20;
          iVar18 = iVar18 + -1;
        } while (-1 < iVar18);
      }
      else {
        cVar6 = FUN_0802b62c(iVar9);
        if (cVar6 == ' ') {
          uVar17 = 0x54;
          uVar14 = 0x53;
          puVar16 = (ushort *)(param_1 + DAT_08118850);
          iVar20 = 1;
          puVar13 = (ushort *)(param_1 + DAT_08118854);
          do {
            uVar2 = uVar14 | 0x2000;
            *puVar16 = uVar2;
            *puVar13 = uVar2;
            puVar13[1] = uVar2;
            *(ushort *)(iVar18 + 0x118) = uVar2;
            *(ushort *)(iVar18 + 0x11a) = uVar17 | 0x2000;
            uVar17 = uVar17 + 0x20;
            uVar14 = uVar14 + 0x20;
            puVar16 = puVar16 + 0x20;
            puVar13 = puVar13 + 0x20;
            iVar18 = iVar18 + 0x40;
            iVar20 = iVar20 + -1;
          } while (-1 < iVar20);
        }
      }
    }
  }
  iVar20 = DAT_0811885c;
  iVar18 = DAT_08118858;
  local_24 = iVar9 + 0xbc;
  FUN_08001d30(DAT_08118858 + 0x410,
               ((uint)*(ushort *)(DAT_0811885c + 0x68) -
               (uint)(*(ushort *)(DAT_08118858 + 0x416) >> 6)) * 0x20 + 0x10000);
  iVar4 = DAT_08118864;
  iVar3 = DAT_08118860;
  FUN_08002208(DAT_08118860 + 0x410,
               ((uint)*(ushort *)(DAT_08118864 + 0x68) - (uint)*(byte *)(DAT_08118860 + 0x417)) *
               0x20 + 0x200);
  iVar5 = DAT_08118868;
  FUN_08001d30(DAT_08118868 + iVar18,
               ((uint)*(ushort *)(iVar20 + 0x6a) -
               (uint)(*(ushort *)(DAT_08118868 + iVar18 + 6) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(iVar5 + iVar3,
               ((uint)*(ushort *)(iVar4 + 0x6a) - (uint)*(byte *)(iVar5 + iVar3 + 7)) * 0x20 + 0x200
              );
  FUN_08001d30(iVar18 + 0x438,
               ((uint)*(ushort *)(iVar20 + 0x6c) - (uint)(*(ushort *)(iVar18 + 0x43e) >> 6)) * 0x20
               + 0x10000);
  FUN_08002208(iVar3 + 0x438,
               ((uint)*(ushort *)(iVar4 + 0x6c) - (uint)*(byte *)(iVar3 + 0x43f)) * 0x20 + 0x200);
  for (uVar21 = 0; uVar12 = FUN_0802b62c(iVar9), (int)uVar21 < (int)((uVar12 & 0xff) >> 2);
      uVar21 = uVar21 + 1) {
    FUN_0810a23c(param_1,uVar21 & 0xff,0);
  }
  FUN_0810a410(param_1,0,0);
  FUN_0810a410(param_1,1,0);
  cVar6 = FUN_08119944(param_1);
  if (cVar6 != '\0') {
    FUN_0810a410(param_1,2,0);
  }
  cVar6 = FUN_08119978(param_1);
  if (cVar6 != '\0') {
    FUN_0810a410(param_1,3,0);
  }
  FUN_0810a410(param_1,4,0);
  FUN_0810a5f0(param_1,0,0);
  FUN_0810a5f0(param_1,0,1);
  uVar21 = 0;
  do {
    if ((int)((uint)*(ushort *)(iVar9 + 0xca) & 1 << (uVar21 & 0xff)) >> (uVar21 & 0xff) != 0) {
      FUN_0810a5f0(param_1,2,uVar21 & 0xff);
    }
    uVar21 = uVar21 + 1;
  } while ((int)uVar21 < 8);
  uVar21 = 0;
  do {
    if (*(char *)(local_24 + uVar21) != -1) {
      FUN_0810a5f0(param_1,3,uVar21 & 0xff);
      FUN_0810a5f0(param_1,4,uVar21 & 0xff);
    }
    uVar21 = uVar21 + 1;
  } while ((int)uVar21 < 4);
  FUN_08001f1c(param_1 + DAT_0811898c,(*DAT_08118990 & 0x1f00) << 3,0x1000);
  uVar21 = FUN_0803891c(iVar9);
  uVar21 = uVar21 & 0xff;
  if ((uVar21 != 0) && (uVar21 != 0xd)) {
    iVar9 = uVar21 + 0xce;
    FUN_0800249c(iVar9,0);
    FUN_080025d8(iVar9);
    FUN_08002624(iVar9);
  }
  *(undefined1 *)(param_1 + 2) = 2;
  return in_lr;
}


