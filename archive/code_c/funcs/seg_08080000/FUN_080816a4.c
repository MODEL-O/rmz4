// undefined FUN_080816a4(void)
// entry 0x80816a4


undefined4 FUN_080816a4(int param_1)

{
  short sVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  short asStack_44 [8];
  int local_34 [2];
  short *local_2c;
  char *local_28;
  int *local_24;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_54 = *DAT_08081724;
    uStack_50 = DAT_08081724[1];
    uStack_4c = DAT_08081724[2];
    local_48 = DAT_08081724[3];
    FUN_0801cf00(param_1,*(undefined2 *)(&local_54 + *(byte *)(param_1 + 0xb4)));
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xd) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_0808183c);
  }
  else {
    FUN_08005784(param_1 + 0x74,
                 *(undefined4 *)
                  (*(char *)(param_1 + 0x71) * 4 +
                  *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 +
                           ((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                           *(undefined1 *)(param_1 + 0x70)) + DAT_0808172c) * 8 +
                          DAT_08081728)));
  }
  local_28 = (char *)(param_1 + 0x73);
  if ((*(char *)(param_1 + 0x71) == '\x01') && (*(char *)(param_1 + 0x12) == '\0')) {
    FUN_08129258(&local_54,DAT_08081840,0x10);
    FUN_08129258(asStack_44,DAT_08081844,0x10);
    iVar4 = DAT_08081850;
    iVar3 = DAT_0808184c;
    puVar2 = DAT_08081848;
    uVar7 = (uint)*(byte *)(param_1 + 0xb4);
    uVar5 = *DAT_08081848 * DAT_0808184c + DAT_08081850;
    *DAT_08081848 = uVar5 & 0x7fffffff;
    uVar5 = ((uVar5 & 0x7fffffff) >> 0x10 & 1) + 2;
    if (uVar5 != 0) {
      local_2c = (short *)((int)&local_54 + uVar7 * 4 + 2);
      local_24 = local_34;
      do {
        local_34[0] = (int)*(short *)(&local_54 + uVar7);
        uVar6 = *puVar2 * iVar3 + iVar4;
        local_34[0] = ((uVar6 & 0x7fffffff) >> 0x10 & (int)asStack_44[uVar7 * 2]) +
                      (int)*(short *)(&local_54 + uVar7);
        sVar1 = *local_2c;
        local_24[1] = (int)sVar1;
        uVar6 = (uVar6 & 0x7fffffff) * iVar3 + iVar4;
        *puVar2 = uVar6 & 0x7fffffff;
        local_24[1] = ((uVar6 & 0x7fffffff) >> 0x10 &
                      (int)*(short *)((int)local_34 + uVar7 * 4 + -0xe)) + (int)sVar1;
        FUN_080d8124(param_1 + 0x54,local_24,0,uVar5 & 1);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  if (*local_28 == '\x03') {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


