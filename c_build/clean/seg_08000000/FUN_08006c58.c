// undefined FUN_08006c58(void)
// entry 0x8006c58


void FUN_08006c58(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_1c;
  int local_18;
  
  iVar5 = DAT_08006ca0;
  if (*(short *)(DAT_08006ca0 + 0x1d0) == 4) {
    local_1c = FUN_08129050(*param_1 + DAT_08006ca4,0x3c000);
    *(int *)(iVar5 + 0x1c8) = local_1c + 0xf000;
    iVar2 = param_1[1];
    *(int *)(iVar5 + 0x1cc) = iVar2;
    local_1c = local_1c + 0x7800;
  }
  else {
    iVar3 = *param_1;
    *(int *)(DAT_08006ca0 + 0x1c8) = iVar3;
    iVar2 = param_1[1];
    *(int *)(iVar5 + 0x1cc) = iVar2;
    local_1c = ((iVar3 >> 8) + -0x78) * 0x100;
  }
  local_18 = ((iVar2 >> 8) + -0x50) * 0x100;
  puVar1 = (uint *)FUN_08007830(&local_1c);
  if ((uint)*(ushort *)(DAT_08006d24 + 0x1d0) != *puVar1) {
    *(ushort *)(DAT_08006d24 + 0x1d0) = (ushort)*puVar1;
    FUN_08128f80(&local_1c,*(undefined4 *)puVar1[1]);
  }
  FUN_08128f80(&local_1c,*(undefined4 *)(puVar1[1] + 4));
  iVar2 = 0;
  iVar5 = 2;
  do {
    piVar4 = (int *)(iVar2 + DAT_08006d28);
    FUN_08007a34(piVar4,puVar1,&local_1c);
    if (*piVar4 != 0) {
      FUN_08128f84(piVar4,puVar1);
    }
    iVar2 = iVar2 + 0x88;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  return;
}


