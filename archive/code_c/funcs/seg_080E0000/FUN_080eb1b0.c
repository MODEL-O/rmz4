// undefined FUN_080eb1b0(void)
// entry 0x80eb1b0


undefined4 FUN_080eb1b0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  undefined1 auStack_18 [4];
  int local_14;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    FUN_0801cc9c(param_1);
    if ((byte)(*(char *)(param_1 + 0x10) - 3U) < 2) {
      FUN_0801ceec(param_1);
    }
    else {
      uVar3 = (uint)(*(ushort *)((uint)*(byte *)(param_1 + 0x10) * 8 + DAT_080eb30c) >> 8);
      iVar5 = uVar3 * 0x14;
      iVar2 = iVar5 + DAT_080eb310;
      iVar4 = uVar3 * 2;
      FUN_08001d30(iVar2,((uint)*(ushort *)(iVar4 + DAT_080eb314) -
                         (uint)(*(ushort *)(iVar2 + 6) >> 6)) * 0x20 + 0x10000);
      iVar5 = iVar5 + DAT_080eb318;
      FUN_08002208(iVar5,((uint)*(ushort *)(iVar4 + DAT_080eb31c) - (uint)*(byte *)(iVar5 + 7)) *
                         0x20 + 0x200);
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
    FUN_08005760(param_1 + 0x74,DAT_080eb320,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    FUN_080070b0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),auStack_18);
    iVar2 = *(int *)(param_1 + 0x54) + 0x800;
    *(int *)(param_1 + 0x54) = iVar2;
    local_14 = *(int *)(param_1 + 0x58) + DAT_080eb324 + local_14;
    *(int *)(param_1 + 0x58) = local_14;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080eb328);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
    if (((*(int *)(*DAT_080eb32c + 0x54) - iVar2) + 0x2000U < 0x4001) &&
       ((*(int *)(*DAT_080eb32c + 0x58) - local_14) + 0x2000U < 0x4001)) {
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xf) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    if (*(char *)(param_1 + 0x10) == '\a') {
      if (*(char *)(DAT_080eb360 + DAT_080eb364) == '\0') {
        *(undefined1 *)(param_1 + 0xd) = 3;
        *(undefined1 *)(param_1 + 0xf) = 0;
        *(undefined1 *)(param_1 + 0xe) = 0;
      }
    }
    FUN_080eb368(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
    FUN_08005760(param_1 + 0x74,DAT_080eb214,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_080eb218;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x800;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080eb21c);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    FUN_080eb368(param_1);
  }
  return in_lr;
}


