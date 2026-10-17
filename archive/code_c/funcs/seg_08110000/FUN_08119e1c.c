// undefined FUN_08119e1c(void)
// entry 0x8119e1c


undefined4 FUN_08119e1c(int param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  undefined4 in_lr;
  
  iVar7 = *(byte *)(param_1 + 0xdd0) + 0x14;
  iVar12 = param_1 + DAT_08119e64;
  pcVar13 = (char *)(param_1 + DAT_08119e68);
  if (*pcVar13 == '\0') {
    FUN_0800249c(iVar7,0);
    *pcVar13 = *pcVar13 + '\x01';
  }
  FUN_080025d8(iVar7);
  iVar5 = DAT_0811a034;
  iVar4 = DAT_08119f50;
  iVar11 = DAT_08119f04;
  bVar1 = *(byte *)(param_1 + 0xdd0);
  if (bVar1 == 1) {
    if (DAT_08119f04 < *(short *)(iVar12 + 0x30)) {
      *(short *)(iVar12 + 0x30) = *(short *)(iVar12 + 0x30) + (short)DAT_08119f08;
    }
    if (*(short *)(iVar12 + 0x32) < 0) {
      *(short *)(iVar12 + 0x32) = *(short *)(iVar12 + 0x32) + 0x100;
    }
    if (iVar11 < *(short *)(iVar12 + 0x34)) {
      *(short *)(iVar12 + 0x34) = *(short *)(iVar12 + 0x34) + (short)DAT_08119f08;
    }
    sVar8 = *(short *)(iVar12 + 0x36);
    if (*(short *)(iVar12 + 0x36) <= iVar11) goto LAB_08119f9c;
    sVar9 = (short)DAT_08119f08;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_08119f9c;
    if (*(short *)(iVar12 + 0x30) < 0) {
      *(short *)(iVar12 + 0x30) = *(short *)(iVar12 + 0x30) + 0x100;
    }
    iVar11 = DAT_08119eb8;
    if (DAT_08119eb8 < *(short *)(iVar12 + 0x32)) {
      *(short *)(iVar12 + 0x32) = *(short *)(iVar12 + 0x32) + (short)DAT_08119ebc;
    }
    if (iVar11 < *(short *)(iVar12 + 0x34)) {
      *(short *)(iVar12 + 0x34) = *(short *)(iVar12 + 0x34) + (short)DAT_08119ebc;
    }
    sVar8 = *(short *)(iVar12 + 0x36);
    if (*(short *)(iVar12 + 0x36) <= iVar11) goto LAB_08119f9c;
    sVar9 = (short)DAT_08119ebc;
  }
  else if (bVar1 == 2) {
    if (DAT_08119f50 < *(short *)(iVar12 + 0x30)) {
      *(short *)(iVar12 + 0x30) = *(short *)(iVar12 + 0x30) + (short)DAT_08119f54;
    }
    if (iVar4 < *(short *)(iVar12 + 0x32)) {
      *(short *)(iVar12 + 0x32) = *(short *)(iVar12 + 0x32) + (short)DAT_08119f54;
    }
    if (*(short *)(iVar12 + 0x34) < 0) {
      *(short *)(iVar12 + 0x34) = *(short *)(iVar12 + 0x34) + 0x100;
    }
    sVar8 = *(short *)(iVar12 + 0x36);
    if (*(short *)(iVar12 + 0x36) <= iVar4) goto LAB_08119f9c;
    sVar9 = (short)DAT_08119f54;
  }
  else {
    if (bVar1 != 3) goto LAB_08119f9c;
    if (DAT_0811a034 < *(short *)(iVar12 + 0x30)) {
      *(short *)(iVar12 + 0x30) = *(short *)(iVar12 + 0x30) + (short)DAT_0811a038;
    }
    if (iVar5 < *(short *)(iVar12 + 0x32)) {
      *(short *)(iVar12 + 0x32) = *(short *)(iVar12 + 0x32) + (short)DAT_0811a038;
    }
    if (iVar5 < *(short *)(iVar12 + 0x34)) {
      *(short *)(iVar12 + 0x34) = *(short *)(iVar12 + 0x34) + (short)DAT_0811a038;
    }
    sVar8 = *(short *)(iVar12 + 0x36);
    if (-1 < *(short *)(iVar12 + 0x36)) goto LAB_08119f9c;
    sVar9 = 0x100;
  }
  *(short *)(iVar12 + 0x36) = sVar8 + sVar9;
LAB_08119f9c:
  iVar12 = DAT_0811a03c;
  *(undefined2 *)(DAT_0811a03c + 4) = 8;
  *(undefined2 *)(iVar12 + 8) = 0x80;
  iVar12 = FUN_08000a70(0x140);
  if (iVar12 != 0) {
    FUN_08000ab4(0,iVar12,0x140);
    uVar10 = 0;
    iVar11 = param_1 + DAT_0811a040;
    do {
      *(short *)(uVar10 * 2 + iVar12) =
           (short)(char)((ushort)*(undefined2 *)(iVar11 + (uVar10 >> 5) * 2) >> 8);
      iVar4 = DAT_0811a044;
      uVar10 = uVar10 + 1 & 0xff;
    } while (uVar10 < 0x60);
    *(int *)(DAT_0811a044 + 400) = iVar12;
    *(undefined4 *)(iVar4 + 0x194) = DAT_0811a048;
    *(undefined4 *)(iVar4 + 0x198) = DAT_0811a04c;
  }
  cVar6 = FUN_08118248(param_1);
  if (cVar6 == '\0') {
    uVar2 = *(ushort *)(DAT_0811a050 + 4);
    if ((uVar2 & 1) == 0) {
      uVar3 = *(ushort *)(DAT_0811a050 + 6);
      if ((uVar3 & 0x40) == 0) {
        if ((uVar3 & 0x80) != 0) {
          FUN_08002b10(1);
          iVar12 = *(byte *)(param_1 + 0xdd0) + 1;
          *(byte *)(param_1 + 0xdd0) = (char)iVar12 + (char)(iVar12 >> 2) * -4;
          *(byte *)(param_1 + DAT_0811a100) = (byte)uVar3 & 0x40;
          FUN_08002624(iVar7);
        }
      }
      else {
        FUN_08002b10(1);
        iVar12 = *(byte *)(param_1 + 0xdd0) + 3;
        *(byte *)(param_1 + 0xdd0) = (char)iVar12 + (char)(iVar12 >> 2) * -4;
        *(byte *)(param_1 + DAT_0811a090) = (byte)uVar2 & 1;
        FUN_08002624(iVar7);
      }
      if (-1 < *(char *)(param_1 + 0xdd2)) {
        *(char *)(param_1 + 0xdd2) = *(char *)(param_1 + 0xdd2) + '\x01';
      }
      FUN_0811ad3c(param_1);
      FUN_0810d85c((uint)*(ushort *)((*(byte *)(param_1 + 0xdd0) + 0x78) * 2 + DAT_0811a104) +
                   DAT_0811a108,1,0x12);
    }
    else {
      FUN_08002b10(2);
      FUN_0811ad3c(param_1);
      *(undefined1 *)(param_1 + 3) = 1;
      *(undefined1 *)(param_1 + DAT_0811a054) = 0;
    }
  }
  return in_lr;
}


