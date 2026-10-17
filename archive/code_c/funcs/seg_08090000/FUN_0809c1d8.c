// undefined FUN_0809c1d8(void)
// entry 0x809c1d8


undefined4 FUN_0809c1d8(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_54 [4];
  undefined4 local_44 [4];
  byte abStack_34 [4];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  local_54[0] = *(undefined4 *)PTR_DAT_0809c244;
  local_54[1] = *(undefined4 *)(PTR_DAT_0809c244 + 4);
  local_54[2] = *(undefined4 *)(PTR_DAT_0809c244 + 8);
  local_54[3] = *(undefined4 *)(PTR_DAT_0809c244 + 0xc);
  local_44[0] = *(undefined4 *)PTR_DAT_0809c248;
  local_44[1] = *(undefined4 *)(PTR_DAT_0809c248 + 4);
  local_44[2] = *(undefined4 *)(PTR_DAT_0809c248 + 8);
  local_44[3] = *(undefined4 *)(PTR_DAT_0809c248 + 0xc);
  FUN_08129258(abStack_34,PTR_DAT_0809c24c,4);
  uVar2 = (uint)*(byte *)(param_1 + 0x11);
  uVar4 = (uint)*(byte *)(param_1 + 0xb5);
  iVar3 = *(int *)(param_1 + 0x28);
  bVar1 = true;
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0xb4) != '\0') {
      if (uVar4 == 0) {
        FUN_0801cf00(param_1,*(undefined2 *)(local_44 + uVar2));
      }
      else {
        FUN_0801cf00(param_1,*(undefined2 *)(local_54 + uVar2));
      }
      *(char *)(param_1 + 0xb4) = '\0';
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  local_30 = *(int *)(iVar3 + 0x54) - *(int *)(iVar3 + 0xb4);
  local_2c = *(int *)(iVar3 + 0x58) - *(int *)(iVar3 + 0xb8);
  local_28 = *(int *)(uVar2 * 8 + DAT_0809c318);
  local_24 = *(int *)(uVar2 * 8 + DAT_0809c318 + 4);
  *(uint *)(param_1 + 0x54) = *(int *)(iVar3 + 0xb4) + local_28 * uVar4;
  *(uint *)(param_1 + 0x58) = *(int *)(iVar3 + 0xb8) + local_24 * uVar4;
  if ((local_28 != 0) && (iVar3 = FUN_08128fb8(local_30,local_28), iVar3 < (int)(uVar4 + 1))) {
    bVar1 = false;
  }
  if ((local_24 != 0) && (iVar3 = FUN_08128fb8(local_2c,local_24), iVar3 < (int)(uVar4 + 1))) {
    bVar1 = false;
  }
  if (bVar1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    FUN_08005784(param_1 + 0x74,
                 *(undefined4 *)
                  (*(char *)(param_1 + 0x71) * 4 +
                  *(int *)((uint)abStack_34[uVar2] * 4 + DAT_0809c31c)));
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    FUN_08005784(param_1 + 0x74,*(undefined4 *)*DAT_0809c348);
  }
  return in_lr;
}


