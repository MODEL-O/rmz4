// undefined FUN_0805d558(void)
// entry 0x805d558


undefined4 FUN_0805d558(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 in_lr;
  undefined1 auStack_44 [8];
  int local_3c;
  int local_38;
  int local_34 [3];
  int *local_28;
  int *local_24;
  
  FUN_08129258(auStack_44,DAT_0805d780,6);
  bVar1 = *(byte *)(param_1 + 0x10);
  bVar2 = *(byte *)(param_1 + 10);
  iVar8 = *DAT_0805d784;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x38);
    if ((iVar8 != 0) && ((*(uint *)(param_1 + 0x8c) & 0x800) != 0)) {
      *(byte *)(iVar8 + 0x142) = *(byte *)(iVar8 + 0x142) | 0x40;
      *(undefined1 *)(iVar8 + 0xd) = 4;
      *(undefined1 *)(iVar8 + 0xe) = 0;
      *(uint *)(iVar8 + 0x128) = ((bVar2 >> 4 & 1) * 2 + -1) * 0x400;
      *(undefined4 *)(iVar8 + 300) = DAT_0805d788;
      *(undefined4 *)(iVar8 + 0x130) = 0;
      *(undefined4 *)(iVar8 + 0x134) = 0x40;
      *(undefined2 *)(iVar8 + 0x138) = 0x10;
    }
    iVar4 = DAT_0805d794;
    iVar8 = DAT_0805d790;
    puVar3 = DAT_0805d78c;
    uVar9 = 0;
    local_28 = (int *)(param_1 + 0xb4);
    local_34[2] = (uint)bVar1 << 1;
    local_24 = &local_3c;
    do {
      uVar7 = *puVar3 * iVar8 + iVar4;
      local_3c = *(int *)(param_1 + 0x54) + (0x10 - ((uVar7 & 0x7fffffff) >> 0x10 & 0x1f)) * 0x100;
      local_38 = *local_28;
      uVar7 = (uVar7 & 0x7fffffff) * iVar8 + iVar4;
      *puVar3 = uVar7 & 0x7fffffff;
      local_34[0] = (((uVar7 & 0x7fffffff) >> 0x10 & 0x3f) + 0x140) * ((uVar9 & 1) * 2 + -1);
      local_34[1] = 0;
      FUN_080de31c(&local_3c,local_34,0,0);
      piVar6 = local_24;
      iVar5 = DAT_0805d794;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < 2);
    uVar9 = 0;
    do {
      uVar7 = DAT_0805d790 * *DAT_0805d78c + iVar5;
      local_3c = *(int *)(param_1 + 0x54) + (0x10 - ((uVar7 & 0x7fffffff) >> 0x10 & 0x1f)) * 0x100;
      piVar6[1] = *local_28;
      uVar7 = DAT_0805d790 * (uVar7 & 0x7fffffff) + iVar5;
      *DAT_0805d78c = uVar7 & 0x7fffffff;
      local_34[0] = (((uVar7 & 0x7fffffff) >> 0x10 & 0x1f) + 0x80) * ((uVar9 & 1) * 2 + -1);
      local_34[1] = 0;
      FUN_080de31c(piVar6,local_34,0,0);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < 2);
    FUN_0805ee6c(param_1,auStack_44[local_34[2]]);
    *(undefined4 *)(param_1 + 0x60) = 0x600;
    *(undefined1 *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_0805d79c) * 4 +
                               DAT_0805d798)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 + DAT_0805d7a0) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    iVar8 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar8;
    if (*(int *)(param_1 + 0xb4) <= iVar8 + 0x2400) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb4) + DAT_0805d7a4;
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xe) = 6;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


