// undefined FUN_080bfd98(void)
// entry 0x80bfd98


undefined4 FUN_080bfd98(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_lr;
  byte abStack_40 [4];
  short asStack_3c [4];
  undefined1 auStack_34 [4];
  int local_30 [4];
  
  FUN_08129258(abStack_40,DAT_080bff10,2);
  FUN_08129258(asStack_3c,DAT_080bff14,8);
  local_30[1] = DAT_080bff18[1];
  local_30[0] = *DAT_080bff18;
  FUN_08129258(auStack_34,DAT_080bff1c,2);
  iVar6 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x10);
  uVar8 = (uint)*(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    *(undefined1 *)(param_1 + 0x25) = 8;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_080bff20,param_1 + 0x54,0x40);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    FUN_0801cf00(param_1,DAT_080bff24);
    iVar7 = *(int *)(param_1 + 0xb8);
    iVar3 = local_30[uVar8];
    iVar4 = FUN_08128fb8(0x19800,auStack_34[uVar8]);
    *(uint *)(param_1 + 0x54) = iVar7 + iVar3 + iVar4 * (uint)bVar1 * (uVar8 * -2 + 1);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb4);
    iVar3 = DAT_080bff28;
    *(int *)(param_1 + 0x5c) = *(short *)((abStack_40[uVar8] + 0x40 & 0xff) * 2 + DAT_080bff28) * 3;
    *(int *)(param_1 + 0x60) = *(short *)((uint)abStack_40[uVar8] * 2 + iVar3) * 3;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(iVar6 + 0xc) < 2) {
    FUN_0801cff0(param_1);
    local_30[2] = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = local_30[2];
    local_30[3] = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = local_30[3];
    if ((local_30[3] < *(int *)(param_1 + 0xb4)) ||
       (((sVar2 = FUN_08007c7c(local_30[2] + DAT_080bff2c,local_30[3]), sVar2 == 0 &&
         (sVar2 = FUN_08007c7c(local_30[2] + 0x600,local_30[3]), sVar2 == 0)) &&
        ((*(uint *)(param_1 + 0x8c) & 4) == 0)))) {
      bVar1 = *(char *)(param_1 + 0x12) + 1;
      *(byte *)(param_1 + 0x12) = bVar1;
      if ((bVar1 & 3) != 0) {
        return in_lr;
      }
      local_30[2] = *(int *)(param_1 + 0x54) + (int)asStack_3c[uVar8 * 2];
      local_30[3] = *(int *)(param_1 + 0x58) + (int)asStack_3c[uVar8 * 2 + 1];
      FUN_080d0c88(3,local_30 + 2);
      return in_lr;
    }
  }
  piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bff30);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 8);
  FUN_080bff80(param_1);
  return in_lr;
}


