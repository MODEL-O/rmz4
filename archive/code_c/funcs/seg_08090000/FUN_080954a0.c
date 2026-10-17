// undefined FUN_080954a0(void)
// entry 0x80954a0


undefined4 FUN_080954a0(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_lr;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 uStack_4c;
  undefined1 auStack_4b [3];
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 **local_38 [2];
  int local_30;
  int local_2c;
  undefined1 *local_28;
  uint local_24;
  
  FUN_08129258(auStack_5c,PTR_DAT_080955cc,4);
  FUN_08129258(auStack_58,PTR_DAT_080955d0,4);
  FUN_08129258(auStack_54,PTR_DAT_080955d4,4);
  FUN_08129258(auStack_50,PTR_DAT_080955d8,4);
  local_38[0] = &local_48;
  local_38[1] = &local_40;
  local_28 = &uStack_4c;
  local_48 = auStack_5c;
  local_44 = auStack_58;
  local_40 = auStack_54;
  local_3c = auStack_50;
  FUN_08129258(local_28,PTR_DAT_080955dc,4);
  iVar6 = *(int *)(param_1 + 0x28);
  uVar7 = (uint)*(byte *)(param_1 + 0x11);
  bVar1 = *(byte *)(iVar6 + 10) >> 4;
  uVar8 = bVar1 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_24 = uVar7;
    FUN_08002b10(*(undefined2 *)(uVar7 * 4 + DAT_080955e0));
    if (*(int *)(param_1 + 0xb8) == 0) {
      local_30 = *(int *)(iVar6 + 0x54) + (uVar8 * 2 + -1) * (int)*(short *)*local_38[uVar7];
      local_2c = *(int *)(iVar6 + 0x58) + (int)*(short *)(*local_38[uVar7] + 2);
      iVar2 = FUN_08095188(param_1,&local_30,local_28[uVar7 * 2]);
      *(int *)(param_1 + 0xb8) = iVar2;
    }
    if (*(int *)(param_1 + 0xbc) == 0) {
      local_30 = *(int *)(iVar6 + 0x54) + (uVar8 * 2 + -1) * (int)*(short *)local_38[uVar7][1];
      local_2c = *(int *)(iVar6 + 0x58) + (int)*(short *)((int)local_38[uVar7][1] + 2);
      iVar2 = FUN_08095188(param_1,&local_30,auStack_4b[local_24 * 2]);
      *(int *)(param_1 + 0xbc) = iVar2;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar8;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar8 << 4);
  uVar5 = *(undefined4 *)(iVar6 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  piVar3 = (int *)(param_1 + 0xb8);
  if ((*piVar3 != 0) && (1 < *(byte *)(*piVar3 + 0xc))) {
    *piVar3 = 0;
  }
  piVar4 = (int *)(param_1 + 0xbc);
  if ((*piVar4 != 0) && (1 < *(byte *)(*piVar4 + 0xc))) {
    *piVar4 = 0;
  }
  if ((*piVar3 == 0) && (*piVar4 == 0)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809568c);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
  }
  return in_lr;
}


