// undefined FUN_0800e074(void)
// entry 0x800e074


void FUN_0800e074(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c [3];
  
  iVar5 = 0x02000a04;
  local_2c[2] = *(uint *)(param_1 + 0x5c) & 0xffff;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar4 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    *(ushort *)(uVar4 * 2 + 0x02000a04) =
         (ushort)*(undefined4 *)(param_1 + 100) | (ushort)0x00004045;
    *(undefined4 *)(uVar4 * 4 + iVar5 + 8) = 0;
    *(undefined2 *)(param_1 + 0x68) = 0;
    *(undefined2 *)(param_1 + 0x70) = 0;
    iVar1 = 0x02000ab0;
    if (*(char *)(0x02000ab0 + 0x0002d024) == '\0') {
      *(undefined2 *)(param_1 + 0x6a) = 0;
    }
    else {
      if ((*(byte *)(0x02000ab0 + 0x0002c010) & 0xf) == 3) {
        uVar2 = 0xfe;
      }
      else {
        uVar2 = 0x7e;
      }
      *(undefined2 *)(param_1 + 0x6a) = uVar2;
      *(undefined1 *)(iVar1 + 0x0002d024) = 0;
    }
    *(undefined4 *)(param_1 + 0x6c) = 0;
    puVar6 = (ushort *)(((uint)local_2c[2] >> 4) * 2 + iVar5);
    local_34 = 0;
    FUN_08128be0(&local_34,(*puVar6 & 0x1f00) * 8 + 0x6000000,0x01000200);
    FUN_08128be0((*(int *)0x08b2c0d8) + 0x08b2c0e0,(*puVar6 & 0x1f00) * 8 + 0x06000800,0xa0);
    local_30 = 0;
    FUN_08128be0(&local_30,(*puVar6 & 0x1f00) * 8 + 0x06000a80,0x01000160);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar5 = 0x0202e910;
  puVar6 = (ushort *)(param_1 + 0x68);
  if (*puVar6 == 0) {
    uVar4 = 0x100;
    if ((*(byte *)(0x02000ab0 + 0x0002c010) & 0xf) == 3) {
      uVar4 = 0x180;
    }
    puVar3 = (ushort *)(param_1 + 0x6a);
    if (((*(ushort *)(0x0202e910 + 8) & 8) != 0) && ((int)(uint)*puVar3 < (int)(uVar4 - 0x78)))
    goto LAB_0800e2ee;
    *puVar3 = *puVar3 + 1;
    if (((uint)*puVar3 == uVar4 - 0x78) || ((uint)*puVar3 == uVar4 - 0x3c)) {
      *(undefined2 *)(iVar5 + 0x15c) = 0x8000;
    }
    if (*puVar3 < uVar4) goto LAB_0800e2ee;
    *puVar6 = 0x100;
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x34);
    *puVar3 = 0;
    uVar2 = (undefined2)0x00008006;
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
    puVar3 = (ushort *)(((uint)local_2c[2] >> 4) * 2 + 0x02000a04);
    local_30 = 0;
    FUN_08128be0(&local_30,(*puVar3 & 0x1f00) * 8 + 0x6000000,0x1000200);
    FUN_08128be0((*(int *)0x08b2c0d8) + 0x08b2c0e0,(*puVar3 & 0x1f00) * 8 + 0x06000800,0xa0);
    local_30 = 0;
    FUN_08128be0(&local_30,(*puVar3 & 0x1f00) * 8 + 0x06000a80,0x1000160);
    *puVar6 = 0;
    *(undefined2 *)(param_1 + 0x70) = 0;
    iVar5 = 0x0202e910;
    *(ushort *)(0x0202e910 + 0x15c) = *(ushort *)(0x0202e910 + 0x15c) | 0x4000;
    uVar2 = 0x8000;
  }
  *(undefined2 *)(iVar5 + 0x15e) = uVar2;
LAB_0800e2ee:
  if (0x0000031f < *(int *)(param_1 + 0x38)) {
    (*(int *)0x02000a00) = (*(int *)0x02000a00) & ~(ushort)(local_2c[2] << 8);
  }
  else {
    (*(int *)0x02000a00) = (ushort)(local_2c[2] << 8) | (*(int *)0x02000a00);
  }
  return;
}


