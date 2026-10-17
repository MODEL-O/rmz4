// undefined FUN_0800e074(void)
// entry 0x800e074


undefined4 FUN_0800e074(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  undefined4 in_lr;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c [3];
  
  iVar5 = DAT_0800e0dc;
  local_2c[2] = *(uint *)(param_1 + 0x5c) & 0xffff;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar4 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    *(ushort *)(uVar4 * 2 + DAT_0800e0dc) =
         (ushort)*(undefined4 *)(param_1 + 100) | (ushort)DAT_0800e0e0;
    *(undefined4 *)(uVar4 * 4 + iVar5 + 8) = 0;
    *(undefined2 *)(param_1 + 0x68) = 0;
    *(undefined2 *)(param_1 + 0x70) = 0;
    iVar1 = DAT_0800e0e4;
    if (*(char *)(DAT_0800e0e4 + DAT_0800e0e8) == '\0') {
      *(undefined2 *)(param_1 + 0x6a) = 0;
    }
    else {
      if ((*(byte *)(DAT_0800e0e4 + DAT_0800e0ec) & 0xf) == 3) {
        uVar2 = 0xfe;
      }
      else {
        uVar2 = 0x7e;
      }
      *(undefined2 *)(param_1 + 0x6a) = uVar2;
      *(undefined1 *)(iVar1 + DAT_0800e104) = 0;
    }
    *(undefined4 *)(param_1 + 0x6c) = 0;
    puVar6 = (ushort *)(((uint)local_2c[2] >> 4) * 2 + iVar5);
    local_34 = 0;
    FUN_08128be0(&local_34,(*puVar6 & 0x1f00) * 8 + 0x6000000,DAT_0800e25c);
    FUN_08128be0(*DAT_0800e260 + DAT_0800e264,(*puVar6 & 0x1f00) * 8 + DAT_0800e268,0xa0);
    local_30 = 0;
    FUN_08128be0(&local_30,(*puVar6 & 0x1f00) * 8 + DAT_0800e26c,DAT_0800e270);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar5 = DAT_0800e30c;
  puVar6 = (ushort *)(param_1 + 0x68);
  if (*puVar6 == 0) {
    uVar4 = 0x100;
    if ((*(byte *)(DAT_0800e304 + DAT_0800e308) & 0xf) == 3) {
      uVar4 = 0x180;
    }
    puVar3 = (ushort *)(param_1 + 0x6a);
    if (((*(ushort *)(DAT_0800e30c + 8) & 8) != 0) && ((int)(uint)*puVar3 < (int)(uVar4 - 0x78)))
    goto LAB_0800e2ee;
    *puVar3 = *puVar3 + 1;
    if (((uint)*puVar3 == uVar4 - 0x78) || ((uint)*puVar3 == uVar4 - 0x3c)) {
      *(undefined2 *)(iVar5 + 0x15c) = 0x8000;
    }
    if (*puVar3 < uVar4) goto LAB_0800e2ee;
    *puVar6 = 0x100;
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x34);
    *puVar3 = 0;
    uVar2 = (undefined2)DAT_0800e310;
  }
  else {
    if (*puVar6 == 0x100) {
      local_2c[0] = *(int *)(param_1 + 0x34) * 0x100 + 0x18000;
      local_2c[1] = 0x2f800;
      FUN_080f20c4(local_2c,0);
      FUN_08002b10(0x5a);
    }
    *puVar6 = *puVar6 + 0x100;
    if ((int)(uint)*puVar6 <= (*(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x34)) * 0x10 + 0x4000)
    goto LAB_0800e2ee;
    puVar3 = (ushort *)(((uint)local_2c[2] >> 4) * 2 + DAT_0800e274);
    local_30 = 0;
    FUN_08128be0(&local_30,(*puVar3 & 0x1f00) * 8 + 0x6000000,0x1000200);
    FUN_08128be0(*DAT_0800e260 + DAT_0800e264,(*puVar3 & 0x1f00) * 8 + DAT_0800e268,0xa0);
    local_30 = 0;
    FUN_08128be0(&local_30,(*puVar3 & 0x1f00) * 8 + DAT_0800e26c,0x1000160);
    *puVar6 = 0;
    *(undefined2 *)(param_1 + 0x70) = 0;
    iVar5 = DAT_0800e278;
    *(ushort *)(DAT_0800e278 + 0x15c) = *(ushort *)(DAT_0800e278 + 0x15c) | 0x4000;
    uVar2 = 0x8000;
  }
  *(undefined2 *)(iVar5 + 0x15e) = uVar2;
LAB_0800e2ee:
  if (DAT_0800e314 < *(int *)(param_1 + 0x38)) {
    *DAT_0800e338 = *DAT_0800e338 & ~(ushort)(local_2c[2] << 8);
  }
  else {
    *DAT_0800e318 = (ushort)(local_2c[2] << 8) | *DAT_0800e318;
  }
  return in_lr;
}


