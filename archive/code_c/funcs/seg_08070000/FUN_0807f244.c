// undefined FUN_0807f244(void)
// entry 0x807f244


undefined4 FUN_0807f244(int param_1)

{
  byte bVar1;
  uint *puVar2;
  char cVar3;
  undefined1 uVar4;
  byte *pbVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 in_lr;
  
  puVar2 = DAT_0807f2d8;
  bVar1 = (byte)*(ushort *)(DAT_0807f278 + 8) & 8;
  if ((*(ushort *)(DAT_0807f278 + 8) & 8) != 0) {
    return in_lr;
  }
  pbVar5 = (byte *)(param_1 + 0xd6);
  if (*pbVar5 != 0) {
    *(undefined1 *)(param_1 + 0xd) = 5;
    *(byte *)(param_1 + 0xe) = bVar1;
    *pbVar5 = bVar1;
    *(undefined1 *)(param_1 + 0xd7) = *(undefined1 *)(param_1 + 0xd);
    return in_lr;
  }
  cVar3 = '\0';
  piVar7 = (int *)(param_1 + 0xbc);
  iVar8 = 3;
  do {
    if (*piVar7 == 0) {
      cVar3 = cVar3 + '\x01';
    }
    piVar7 = piVar7 + 1;
    iVar8 = iVar8 + -1;
  } while (-1 < iVar8);
  if (cVar3 == '\x04') {
    do {
      uVar6 = *puVar2 * DAT_0807f2dc + DAT_0807f2e0;
      *puVar2 = uVar6 & 0x7fffffff;
      uVar6 = (uVar6 & 0x7fffffff) >> 0x10 & 3;
      if (uVar6 == 0) {
        if (*(char *)(param_1 + 0xd5) == *(char *)(param_1 + 0xd4)) {
          *(undefined1 *)(param_1 + 0xd) = 4;
          *pbVar5 = 1;
        }
        else {
          uVar4 = 5;
LAB_0807f2f2:
          *(undefined1 *)(param_1 + 0xd) = uVar4;
        }
      }
      else {
        if (uVar6 != 1) {
          uVar4 = 6;
          goto LAB_0807f2f2;
        }
        *(undefined1 *)(param_1 + 0xd) = 4;
      }
    } while (*(char *)(param_1 + 0xd7) == *(char *)(param_1 + 0xd));
    *(char *)(param_1 + 0xd7) = *(char *)(param_1 + 0xd);
  }
  else {
    uVar6 = *DAT_0807f2d8 * DAT_0807f338 + DAT_0807f33c;
    *DAT_0807f2d8 = uVar6 & 0x7fffffff;
    if (((uVar6 & 0x7fffffff) >> 0x10 & 1) == 0) {
      if (*(char *)(param_1 + 0xd5) == *(char *)(param_1 + 0xd4)) {
        *(undefined1 *)(param_1 + 0xd) = 4;
        *pbVar5 = 1;
        goto LAB_0807f348;
      }
      uVar4 = 5;
    }
    else {
      uVar4 = 4;
    }
    *(undefined1 *)(param_1 + 0xd) = uVar4;
  }
LAB_0807f348:
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


