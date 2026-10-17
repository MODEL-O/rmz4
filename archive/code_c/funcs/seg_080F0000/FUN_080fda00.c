// undefined FUN_080fda00(void)
// entry 0x80fda00


undefined4 FUN_080fda00(int param_1)

{
  byte bVar1;
  ushort *puVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint *puVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  undefined4 in_lr;
  
  uVar4 = DAT_080fdac8;
  uVar5 = DAT_080fda50;
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) goto LAB_080fdbde;
  if (1 < bVar1) {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      goto LAB_080fddd2;
    }
    if (*(char *)(param_1 + 0x12) != '\0') {
      iVar8 = *(int *)(param_1 + 0x54) - *(int *)(*DAT_080fdce4 + 0x54);
      if (iVar8 < 0) {
        iVar8 = *(int *)(*DAT_080fdce4 + 0x54) - *(int *)(param_1 + 0x54);
      }
      if (iVar8 < 0x2001) {
        return in_lr;
      }
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      return in_lr;
    }
    puVar2 = (ushort *)(param_1 + 0xb6);
    uVar5 = *puVar2 + 1 & 0xffff;
    if (DAT_080fdd50 < uVar5) {
      uVar5 = DAT_080fdd54;
    }
    *puVar2 = (ushort)uVar5;
    FUN_0801cf00(param_1,uVar5);
    bVar1 = *(byte *)((uVar5 & 0xff) + DAT_080fdd58);
    pbVar6 = (byte *)(param_1 + 0xb4);
    *pbVar6 = bVar1;
    if (((int)((uint)bVar1 * 0x1000000) < 0) || (*puVar2 == DAT_080fdd54)) {
      FUN_08005784(param_1 + 0x74,DAT_080fdd88);
    }
    else {
      FUN_08005784(param_1 + 0x74,(char)*pbVar6 * 0x18 + DAT_080fdd5c);
    }
    if ((char)*pbVar6 < '\x01') {
      if ((*pbVar6 == 0) &&
         (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != -0x6100)) {
        *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
        iVar8 = DAT_080fddbc;
        goto LAB_080fddb2;
      }
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    }
    else {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      iVar8 = (char)*pbVar6 * 8 + DAT_080fdd8c;
LAB_080fddb2:
      *(int *)(param_1 + 0x30) = iVar8;
      *(short *)(param_1 + 0x26) = (short)DAT_080fddc0;
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080fddd2:
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined2 *)(param_1 + 0xb6) = 0x9f00;
    FUN_0801cf00(param_1);
    *(undefined1 *)(param_1 + 0xb4) = *DAT_080fde0c;
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    FUN_0801281c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    return in_lr;
  }
  if (bVar1 != 0) {
    return in_lr;
  }
  if (*(char *)(param_1 + 0xb5) == '\0') {
    puVar2 = (ushort *)(param_1 + 0xb6);
    uVar5 = (uint)*puVar2;
    if (uVar5 != DAT_080fdac8) {
      if ((int)DAT_080fdac8 < (int)uVar5) {
        if (uVar5 == DAT_080fdad8) {
          *puVar2 = (ushort)DAT_080fdb5c;
          FUN_0801cf00(param_1);
          uVar3 = *(undefined1 *)(DAT_080fdb60 + 0xc);
          goto LAB_080fdb1e;
        }
      }
      else if (uVar5 == 0x9f00) {
        FUN_080127c8(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *puVar2 = (ushort)uVar4;
        FUN_0801cf00(param_1,uVar4);
        uVar3 = *(undefined1 *)(DAT_080fdaf4 + 8);
        goto LAB_080fdb1e;
      }
      goto LAB_080fdb26;
    }
    *puVar2 = (ushort)DAT_080fdb08;
    FUN_0801cf00(param_1);
    uVar3 = *(undefined1 *)(DAT_080fdb0c + 10);
LAB_080fdb1e:
    *(undefined1 *)(param_1 + 0xb4) = uVar3;
  }
  else {
    puVar2 = (ushort *)(param_1 + 0xb6);
    uVar4 = (uint)*puVar2;
    if (uVar4 == DAT_080fda50) {
      *puVar2 = (ushort)DAT_080fda8c;
      FUN_0801cf00(param_1);
      uVar3 = *(undefined1 *)(DAT_080fda90 + 4);
      goto LAB_080fdb1e;
    }
    if ((int)DAT_080fda50 < (int)uVar4) {
      if (uVar4 == DAT_080fda5c) {
        *puVar2 = (ushort)DAT_080fdaa4;
        FUN_0801cf00(param_1);
        uVar3 = *(undefined1 *)(DAT_080fdaa8 + 6);
        goto LAB_080fdb1e;
      }
    }
    else if (uVar4 == 0x9f00) {
      FUN_080127c8(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *puVar2 = (ushort)uVar5;
      FUN_0801cf00(param_1,uVar5);
      uVar3 = *(undefined1 *)(DAT_080fda78 + 2);
      goto LAB_080fdb1e;
    }
  }
LAB_080fdb26:
  pcVar9 = (char *)(param_1 + 0xb4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined1 *)(param_1 + 0x12) = 0x30;
  if ((*pcVar9 < '\0') || (*(ushort *)(param_1 + 0xb6) == DAT_080fdb64)) {
    FUN_08005784(param_1 + 0x74,DAT_080fdb94);
  }
  else {
    FUN_08005784(param_1 + 0x74,*pcVar9 * 0x18 + DAT_080fdb68);
  }
  if (*pcVar9 < '\x01') {
    if ((*pcVar9 == '\0') &&
       (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != -0x6100)) {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      iVar8 = DAT_080fdbc8;
      goto LAB_080fdbbe;
    }
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  }
  else {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    iVar8 = *pcVar9 * 8 + DAT_080fdb98;
LAB_080fdbbe:
    *(int *)(param_1 + 0x30) = iVar8;
    *(short *)(param_1 + 0x26) = (short)DAT_080fdbcc;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080fdbde:
  iVar8 = DAT_080fdc5c;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    uVar5 = (uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70));
    if ((uVar5 == DAT_080fdc58) || (uVar5 == DAT_080fdc58 + 6)) {
      iVar10 = DAT_080fdc5c + DAT_080fdc60;
      puVar7 = (uint *)(((*(byte *)(param_1 + 0x11) >> 5) + 1) * 4 + iVar10);
      *puVar7 = *puVar7 & ~(1 << (*(byte *)(param_1 + 0x11) & 0x1f));
      if ((*(byte *)(iVar8 + DAT_080fdc64) & 0xf) != 0) {
        puVar7 = (uint *)(((*(byte *)(param_1 + 0x11) >> 5) + 4) * 4 + iVar10);
        *puVar7 = *puVar7 | 1 << (*(byte *)(param_1 + 0x11) & 0x1f);
        *(undefined1 *)(param_1 + 0x10) = 4;
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined1 *)(param_1 + 0xe) = 0;
        return in_lr;
      }
    }
    if ((*(char *)(param_1 + 0xb4) < '\0') || (*(ushort *)(param_1 + 0xb6) == DAT_080fdc9c)) {
      FUN_08005784(param_1 + 0x74,DAT_080fdcc0);
    }
    else {
      FUN_08005784(param_1 + 0x74,*(char *)(param_1 + 0xb4) * 0x18 + DAT_080fdca0);
    }
    *(undefined2 *)(param_1 + 0xa4) = 0xff;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}


