// undefined FUN_080ad04c(void)
// entry 0x80ad04c


undefined4 FUN_080ad04c(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_60 [4];
  undefined1 auStack_50 [4];
  int local_4c [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  sbyte asStack_2c [4];
  int local_28;
  int local_24;
  
  local_60[0] = *(undefined4 *)PTR_DAT_080ad160;
  local_60[1] = *(undefined4 *)(PTR_DAT_080ad160 + 4);
  local_60[2] = *(undefined4 *)(PTR_DAT_080ad160 + 8);
  local_60[3] = *(undefined4 *)(PTR_DAT_080ad160 + 0xc);
  FUN_08129258(auStack_50,PTR_DAT_080ad164,4);
  local_4c[0] = *(int *)PTR_DAT_080ad168;
  local_4c[1] = *(int *)(PTR_DAT_080ad168 + 4);
  local_4c[2] = *(int *)(PTR_DAT_080ad168 + 8);
  local_4c[3] = *(int *)(PTR_DAT_080ad168 + 0xc);
  uStack_3c = *(undefined4 *)(PTR_DAT_080ad168 + 0x10);
  uStack_38 = *(undefined4 *)(PTR_DAT_080ad168 + 0x14);
  local_34 = *(undefined4 *)(PTR_DAT_080ad168 + 0x18);
  uStack_30 = *(undefined4 *)(PTR_DAT_080ad168 + 0x1c);
  FUN_08129258(asStack_2c,PTR_DAT_080ad16c,4);
  iVar4 = *(int *)(param_1 + 0x28);
  uVar3 = (uint)*(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ((*(int *)(param_1 + 0xb8) == 0) &&
       (((int)(uint)*(byte *)(iVar4 + 0xb4) >> asStack_2c[uVar3] & 1U) != 0)) {
      local_28 = *(int *)(param_1 + 0x54) + local_4c[uVar3 * 2];
      local_24 = *(int *)(param_1 + 0x58) + local_4c[uVar3 * 2 + 1];
      iVar2 = FUN_080cd0f0(param_1,&local_28,0,auStack_50[uVar3]);
      *(int *)(param_1 + 0xb8) = iVar2;
      if (iVar2 != 0) {
        *(char *)(iVar4 + 0xbc) = *(char *)(iVar4 + 0xbc) + '\x01';
      }
    }
    FUN_0801cf00(param_1,*(undefined2 *)(local_60 + uVar3));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar2 = *(int *)(param_1 + 0xb8);
  if ((iVar2 != 0) && (((int)(uint)*(byte *)(iVar4 + 0xb4) >> asStack_2c[uVar3] & 1U) == 0)) {
    *(undefined1 *)(iVar2 + 0xb4) = 1;
    *(int *)(param_1 + 0xb8) = 0;
    cVar1 = *(char *)(iVar4 + 0xbc);
    if (cVar1 != '\0') {
      *(char *)(iVar4 + 0xbc) = cVar1 + -1;
    }
  }
  *(byte *)(iVar4 + 0xb5) = *(byte *)(iVar4 + 0xb5) & ~(byte)(1 << uVar3);
  return in_lr;
}


