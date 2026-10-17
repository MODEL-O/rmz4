// undefined FUN_080d15f4(void)
// entry 0x80d15f4


undefined4 FUN_080d15f4(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x28);
  if ((((*(uint *)(iVar8 + 0x8c) & 0x200) != 0) || (*(short *)(iVar8 + 0xa4) == 0)) ||
     (2 < *(byte *)(iVar8 + 0xc))) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d163c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080d17a4(param_1);
    return in_lr;
  }
  bVar1 = FUN_0803a428(iVar8,*(undefined1 *)(param_1 + 0x10));
  pbVar6 = (byte *)(param_1 + 0x78);
  *pbVar6 = bVar1;
  if (9 < *(byte *)(iVar8 + 0xd)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 1;
  if (*pbVar6 == 0) {
    *(byte *)(param_1 + 10) = bVar1 & 0xfe;
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  else {
    if (*(char *)(param_1 + 0xd) == '\0') {
      *(byte *)(param_1 + 10) = bVar1 | 1;
      FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x10) * 2 + DAT_080d16bc));
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    if ((*(byte *)(iVar8 + 10) & 0x10) == 0) {
      iVar3 = *(int *)(iVar8 + 0x54) +
              (int)*(short *)((uint)*(byte *)(iVar8 + 0x174) * 2 + DAT_080d1700);
    }
    else {
      iVar3 = *(int *)(iVar8 + 0x54) -
              (int)*(short *)((uint)*(byte *)(iVar8 + 0x174) * 2 + DAT_080d16c0);
    }
    *(int *)(param_1 + 0x54) = iVar3;
    *(int *)(param_1 + 0x58) =
         *(int *)(iVar8 + 0x58) + (int)*(short *)((uint)*(byte *)(iVar8 + 0x174) * 2 + DAT_080d1704)
    ;
    if (*pbVar6 == 2) {
      FUN_0801d3d0(param_1,0xf);
    }
    else {
      FUN_0801d3d0(param_1,0xe);
    }
    if (*(int *)(param_1 + 0x74) != 0) {
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
    }
    FUN_0801cff0(param_1);
  }
  if (*(char *)(param_1 + 0x10) != '\x01') {
    return in_lr;
  }
  iVar3 = *(int *)(param_1 + 0x2c);
  uVar4 = (uint)*(byte *)(iVar3 + 0x78);
  uVar7 = (uint)*pbVar6;
  if (uVar4 + uVar7 == 0) {
    return in_lr;
  }
  if (uVar4 == uVar7) {
    iVar5 = *(int *)(iVar3 + 0x74);
    if (iVar5 <= *(int *)(param_1 + 0x74)) {
      *(int *)(iVar3 + 0x74) = *(int *)(param_1 + 0x74);
      bVar1 = *pbVar6;
      goto LAB_080d176a;
    }
  }
  else {
    if (uVar4 <= uVar7) {
      *(undefined4 *)(iVar3 + 0x74) = *(undefined4 *)(param_1 + 0x74);
      bVar1 = *pbVar6;
      goto LAB_080d176a;
    }
    iVar5 = *(int *)(iVar3 + 0x74);
  }
  *(int *)(param_1 + 0x74) = iVar5;
  bVar1 = *(byte *)(iVar3 + 0x78);
LAB_080d176a:
  if (((*(ushort *)(iVar8 + DAT_080d1790) & 0x8000) == 0) && (*(int *)(param_1 + 0x74) == 0)) {
    *(undefined4 *)(param_1 + 0x74) = 0x18;
    *(undefined4 *)(iVar3 + 0x74) = 0x18;
    if (bVar1 == 2) {
      FUN_08002b10();
    }
    else {
      FUN_08002b10(0x17);
    }
  }
  return in_lr;
}


