// undefined FUN_0800e33c(void)
// entry 0x800e33c


void FUN_0800e33c(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint local_30;
  uint local_2c;
  int local_28 [2];
  
  uVar2 = *(uint *)(param_1 + 0x5c);
  if (*(short *)(0x02000ab0 + 0x0002c002) != 0) {
    uVar6 = (uint)*(ushort *)(param_1 + 0x70);
    if (uVar6 == 1) {
      puVar4 = (ushort *)(((uVar2 & 0xffff) >> 4) * 2 + 0x02000a04);
      FUN_08128be0((*(int *)0x08b2c0d8) + 0x08b2c0e0,(*puVar4 & 0x1f00) * 8 + 0x06000800,0xa0);
      uVar7 = 0x01000160;
      local_2c = 0;
      FUN_08128be0(&local_2c,(*puVar4 & 0x1f00) * 8 + 0x06000a80,0x01000160);
      FUN_08128be0((*(int *)0x08b2c0fc) + 0x08b2c104,(*puVar4 & 0x1f00) * 8 + 0x6000000,0xa0);
      iVar3 = (*puVar4 & 0x1f00) * 8 + 0x06000280;
LAB_0800e4f8:
      local_2c = 0;
      FUN_08128be0(&local_2c,iVar3,uVar7);
    }
    else if (uVar6 < 2) {
      if (uVar6 == 0) {
        puVar4 = (ushort *)(((uVar2 & 0xffff) >> 4) * 2 + 0x02000a04);
        local_30 = uVar6;
        FUN_08128be0(&local_30,(*puVar4 & 0x1f00) * 8 + 0x6000000,0x01000200);
        FUN_08128be0((*(int *)0x08b2c0d8) + 0x08b2c0e0,(*puVar4 & 0x1f00) * 8 + 0x06000800,0xa0);
        local_2c = uVar6;
        FUN_08128be0(&local_2c,(*puVar4 & 0x1f00) * 8 + 0x06000a80,0x01000160);
      }
    }
    else {
      if (uVar6 == 2) {
        puVar4 = (ushort *)(((uVar2 & 0xffff) >> 4) * 2 + 0x02000a04);
        FUN_08128be0((*(int *)0x08b2c0fc) + 0x08b2c104,(*puVar4 & 0x1f00) * 8 + 0x6000000,0xa0);
        uVar7 = 0x01000160;
        local_2c = 0;
        FUN_08128be0(&local_2c,(*puVar4 & 0x1f00) * 8 + 0x06000280,0x01000160);
        FUN_08128be0((*(int *)0x08b2c100) + 0x08b2c108,(*puVar4 & 0x1f00) * 8 + 0x06000800,0xa0);
        iVar3 = (*puVar4 & 0x1f00) * 8 + 0x06000a80;
        goto LAB_0800e4f8;
      }
      if (uVar6 == 3) {
        puVar4 = (ushort *)(((uVar2 & 0xffff) >> 4) * 2 + 0x02000a04);
        FUN_08128be0((*(int *)0x08b2c100) + 0x08b2c108,(*puVar4 & 0x1f00) * 8 + 0x06000800,0xa0);
        local_2c = 0;
        FUN_08128be0(&local_2c,(*puVar4 & 0x1f00) * 8 + 0x06000a80,0x01000160);
        local_2c = 0;
        FUN_08128be0(&local_2c,(*puVar4 & 0x1f00) * 8 + 0x6000000,0x01000200);
      }
    }
  }
  if ((0x0000032f < *(int *)(param_1 + 0x38)) || (*(ushort *)(param_1 + 0x68) == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = (uint)(*(ushort *)(param_1 + 0x68) >> 4) -
            (*(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x34));
  }
  puVar4 = (ushort *)(param_1 + 0x70);
  uVar2 = (uVar2 & 0xffff) >> 4;
  if ((int)((*puVar4 + 1) * 0x100 + 0x10) <= iVar3) {
    local_28[0] = *(int *)(param_1 + 0x34) * 0x100 + 0x16000;
    local_28[1] = 0x2f800;
    uVar1 = *puVar4 + 1;
    *puVar4 = uVar1;
    if (uVar1 == 1) {
      FUN_080f20c4(local_28,0);
      puVar4 = (ushort *)(uVar2 * 2 + 0x02000a04);
      FUN_08128be0((*(int *)0x08b2c0fc) + 0x08b2c104,(*puVar4 & 0x1f00) * 8 + 0x6000000,0xa0);
      iVar5 = (*puVar4 & 0x1f00) * 8 + 0x06000280;
    }
    else {
      if (uVar1 != 2) {
        if (uVar1 == 3) {
          local_2c = 0;
          FUN_08128be0(&local_2c,(*(ushort *)(uVar2 * 2 + 0x02000a04) & 0x1f00) * 8 + 0x6000000,
                       0x01000200);
        }
        goto LAB_0800e6e6;
      }
      FUN_080f20c4(local_28,0);
      puVar4 = (ushort *)(uVar2 * 2 + 0x02000a04);
      FUN_08128be0((*(int *)0x08b2c100) + 0x08b2c108,(*puVar4 & 0x1f00) * 8 + 0x06000800,0xa0);
      iVar5 = (*puVar4 & 0x1f00) * 8 + 0x06000a80;
    }
    local_2c = 0;
    FUN_08128be0(&local_2c,iVar5,0x01000160);
  }
LAB_0800e6e6:
  iVar5 = 0x02000a0c;
  *(short *)(uVar2 * 4 + 0x02000a0c) = (short)iVar3;
  *(short *)(uVar2 * 4 + iVar5 + 2) = (short)*(undefined4 *)(param_1 + 0x38) + (short)0xfffffd30;
  return;
}


