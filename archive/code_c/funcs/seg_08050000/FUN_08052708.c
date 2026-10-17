// undefined FUN_08052708(void)
// entry 0x8052708


undefined4 FUN_08052708(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 uVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  uint uVar13;
  undefined4 in_lr;
  int local_1c;
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08052768);
    FUN_08002b10(0xeb);
    FUN_08005784(param_1 + 0x74,DAT_0805276c);
    *(undefined1 *)(param_1 + 0x4d) = 0;
    pbVar12 = (byte *)(param_1 + 0x4a);
    *pbVar12 = *pbVar12 & 0xdf;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    puVar11 = (undefined4 *)(param_1 + 0xb4);
    if (*(int *)(*DAT_08052770 + 0x54) < *(int *)(param_1 + 0xc4)) {
      iVar8 = FUN_08008868(*puVar11,*(undefined4 *)(param_1 + 0xb8));
      iVar8 = iVar8 + DAT_08052774;
    }
    else {
      iVar8 = FUN_08008988(*puVar11,*(undefined4 *)(param_1 + 0xb8));
      iVar8 = iVar8 + 0x2000;
    }
    *(int *)(param_1 + 0x54) = iVar8;
    uVar9 = FUN_08008748(*puVar11,*(undefined4 *)(param_1 + 0xb8));
    *(undefined4 *)(param_1 + 0x58) = uVar9;
    iVar8 = *DAT_080527d0;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(iVar8 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar8 + 0x54);
    *pbVar12 = *pbVar12 & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar4 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar4 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar4;
    *(undefined4 *)(param_1 + 0x60) = 0x80;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  bVar4 = *(byte *)(param_1 + 0xf);
  if (bVar4 == 1) {
    cVar6 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar6;
    if (cVar6 != -1) goto LAB_08052966;
  }
  else {
    if (bVar4 < 2) {
      if (bVar4 != 0) goto LAB_08052966;
      bVar4 = *(byte *)(param_1 + 0x12);
      *(byte *)(param_1 + 0x12) = bVar4 + 1;
      if ((bVar4 & 3) < 2) {
        iVar8 = *(int *)(param_1 + 0x54) + 0x100;
      }
      else {
        iVar8 = *(int *)(param_1 + 0x54) + DAT_0805289c;
      }
      *(int *)(param_1 + 0x54) = iVar8;
      iVar8 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar8;
      if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
        local_1c = *(int *)(param_1 + 0x54);
        local_18 = FUN_08008748(local_1c,iVar8);
        iVar8 = DAT_080528a4;
        puVar2 = DAT_080528a0;
        uVar10 = DAT_080528a4 * *DAT_080528a0 + DAT_080528a8;
        uVar13 = uVar10 & 0x7fffffff;
        *DAT_080528a0 = uVar13;
        uVar3 = DAT_080528f4;
        uVar9 = DAT_080528ac;
        local_1c = local_1c + 0x1000 + ((uVar10 & 0x7fffffff) >> 0x10 & 0x1f) * -0x100;
        if ((*(byte *)(param_1 + 0x12) & 3) == 1) {
          uVar10 = iVar8 * uVar13 + DAT_080528a8;
          *puVar2 = uVar10 & 0x7fffffff;
          FUN_080d4c8c(&local_1c,uVar9,0,((uVar10 & 0x7fffffff) >> 0x10 & 1) << 4);
        }
        else {
          uVar10 = iVar8 * uVar13 + DAT_080528f8;
          *puVar2 = uVar10 & 0x7fffffff;
          FUN_080d4c8c(&local_1c,uVar3,0,((uVar10 & 0x7fffffff) >> 0x10 & 1) << 4);
        }
      }
      sVar7 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + DAT_080528fc);
      if (sVar7 != 0) goto LAB_08052966;
      FUN_0801cf00(param_1,DAT_08052900);
      FUN_08002b10(0xea);
      *(undefined4 *)(param_1 + 0x60) = 0;
      uVar5 = 8;
    }
    else {
      if (bVar4 != 2) {
        if ((bVar4 == 3) && (*(char *)(param_1 + 0x73) == '\x03')) {
          *(undefined1 *)(param_1 + 0xd) = 4;
          *(undefined1 *)(param_1 + 0xe) = 0;
        }
        goto LAB_08052966;
      }
      iVar8 = *(int *)(param_1 + 0x60) + 0x20;
      *(int *)(param_1 + 0x60) = iVar8;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar8;
      sVar7 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54));
      if (sVar7 == 0) goto LAB_08052966;
      FUN_0801cfc8(param_1,DAT_08052950,1,3);
      uVar9 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar9;
      uVar5 = 0x10;
    }
    *(undefined1 *)(param_1 + 0x12) = uVar5;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_08052966:
  FUN_0801cff0(param_1);
  return in_lr;
}


