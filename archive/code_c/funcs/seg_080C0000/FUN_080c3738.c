// undefined FUN_080c3738(void)
// entry 0x80c3738


undefined4 FUN_080c3738(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  short sVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 in_lr;
  
  FUN_0801cff0();
  *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb5);
  pbVar8 = (byte *)(param_1 + 0xb4);
  *(byte *)(param_1 + 0xb5) = *pbVar8;
  iVar1 = DAT_080c37a0;
  iVar7 = *(short *)((*pbVar8 + 0x40 & 0xff) * 2 + DAT_080c37a0) * 7 >> 1;
  *(int *)(param_1 + 0x5c) = iVar7;
  *(int *)(param_1 + 0x60) = *(short *)((uint)*pbVar8 * 2 + iVar1) * 7 >> 1;
  if (*(char *)(param_1 + 0xd) != '\0') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + -1;
    goto LAB_080c3820;
  }
  sVar4 = FUN_08007c7c(*(int *)(param_1 + 0x54) + iVar7,*(undefined4 *)(param_1 + 0x58));
  if (sVar4 == 1) {
    if (*(int *)(param_1 + 0x5c) < 1) {
      bVar2 = 0x30;
    }
    else {
      bVar2 = 0x50;
    }
    *pbVar8 = bVar2;
    uVar3 = 2;
  }
  else {
    sVar4 = FUN_08007c7c(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c),
                         *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60));
    if (sVar4 == 0) goto LAB_080c3820;
    if (sVar4 == 1) {
      if (*(int *)(param_1 + 0x5c) < 1) {
        bVar2 = 0x90;
      }
      else {
        bVar2 = 0xf0;
      }
LAB_080c380e:
      *pbVar8 = bVar2;
    }
    else {
      if (((1 < (ushort)(sVar4 - 2U)) && (sVar4 != 8)) && (sVar4 != 9)) {
        if (*(int *)(param_1 + 0x5c) < 1) {
          bVar2 = 0x98;
        }
        else {
          bVar2 = 0xe8;
        }
        goto LAB_080c380e;
      }
      if (*(int *)(param_1 + 0x5c) < 1) {
        *(undefined1 *)(param_1 + 0xb4) = 0xa0;
      }
      else {
        *(undefined1 *)(param_1 + 0xb4) = 0xe0;
      }
    }
    uVar3 = 3;
  }
  *(undefined1 *)(param_1 + 0xd) = uVar3;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
LAB_080c3820:
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (((*(char *)(param_1 + 0x12) != '\0') &&
      (uVar5 = FUN_0801fb14(DAT_080c388c,param_1 + 0x54), 0x1000 < uVar5)) ||
     (1 < *(byte *)(param_1 + 0x12))) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c3890);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 0xc);
  }
  return in_lr;
}


