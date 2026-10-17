// undefined FUN_080eb868(void)
// entry 0x80eb868


undefined4 FUN_080eb868(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 in_lr;
  
  piVar7 = DAT_080eb904;
  if (*(char *)(param_1 + 0xe) != '\0') {
    if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    goto LAB_080eb940;
  }
  iVar8 = *(int *)(param_1 + 0xb4);
  if (iVar8 == 0) {
    return in_lr;
  }
  if (((*(byte *)(DAT_080eb8b4 + 9) & 1) != 0) || (*DAT_080eb8b8 != '\0')) {
    DAT_080eb8b4[10] = (ushort)DAT_080eb8bc & DAT_080eb8b4[10];
    *(undefined1 *)(iVar8 + DAT_080eb8c0) = 0;
    *(int *)(param_1 + 0xb4) = 0;
    return in_lr;
  }
  if (*DAT_080eb8b4 == 0xb) {
    iVar8 = *DAT_080eb904;
    if (*(int *)(iVar8 + 0x54) < *(int *)(DAT_080eb8b4 + 0x90)) {
      *(byte *)(iVar8 + 10) = *(byte *)(iVar8 + 10) & 0xef;
      if ((*(byte *)(*piVar7 + 10) & 8) != 0) {
        *(undefined1 *)(*piVar7 + 0x4c) = 0;
        pbVar4 = (byte *)(*piVar7 + 0x4a);
        bVar1 = *pbVar4 & 0xef;
LAB_080eb92a:
        *pbVar4 = bVar1;
      }
    }
    else {
      *(byte *)(iVar8 + 10) = *(byte *)(iVar8 + 10) | 0x10;
      if ((*(byte *)(*piVar7 + 10) & 8) != 0) {
        *(undefined1 *)(*piVar7 + 0x4c) = 1;
        pbVar4 = (byte *)(*piVar7 + 0x4a);
        bVar1 = *pbVar4 | 0x10;
        goto LAB_080eb92a;
      }
    }
  }
  *(undefined4 *)(DAT_080eb974 + 0x154) = 2;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080eb940:
  piVar7 = (int *)(DAT_080eb974 + 0x154);
  if (*piVar7 == 0) {
    *(undefined1 *)(*(int *)(param_1 + 0xb4) + 0x143) = 0;
    *piVar7 = 1;
    if (*(char *)(param_1 + 0x11) == '\x01') {
      uVar2 = FUN_0801f018(param_1 + 0x54);
    }
    else {
      uVar2 = FUN_0801ef14(param_1 + 0x54);
    }
    puVar5 = (undefined4 *)(param_1 + 0xb8);
    *puVar5 = uVar2;
    iVar8 = DAT_080eb9d8;
    puVar6 = (undefined4 *)*puVar5;
    if (puVar6 != (undefined4 *)0x0) {
      *(undefined2 *)(DAT_080eb9d8 + 4) = 0x8000;
      uVar2 = FUN_08008534(*puVar6,puVar6[1]);
      iVar3 = *DAT_080eb9dc;
      *(undefined4 *)(iVar3 + 0x58) = uVar2;
      *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)*puVar5;
      FUN_0802b7cc();
      *(ushort *)(iVar8 + 0x14) = (ushort)DAT_080eb9e0 & *(ushort *)(iVar8 + 0x14);
      *(undefined1 *)(iVar8 + 0x101) = 8;
      *(undefined2 *)(iVar8 + 0x10a) = 0;
      *(int *)(param_1 + 0xb4) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


