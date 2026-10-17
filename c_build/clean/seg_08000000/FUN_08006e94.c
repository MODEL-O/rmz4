// undefined FUN_08006e94(void)
// entry 0x8006e94


void FUN_08006e94(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_18;
  int local_14;
  
  piVar1 = DAT_08006ec0;
  if ((short)DAT_08006ec0[2] == 4) {
    local_18 = FUN_08129050(*(int *)DAT_08006ec0 + DAT_08006ec4,0x3c000);
    *piVar1 = local_18 + 0xf000;
    local_18 = local_18 + 0x7800;
  }
  else {
    local_18 = ((*(int *)DAT_08006ec0 >> 8) + -0x78) * 0x100;
  }
  local_14 = ((piVar1[1] >> 8) + -0x50) * 0x100;
  iVar4 = *(int *)((uint)(*(byte *)(DAT_08006f38 + DAT_08006f40) >> 4) * 4 +
                   (*(ushort *)(DAT_08006f38 + 0x1d0) & 0x7f) * 8 + DAT_08006f3c);
  FUN_08128f80(&local_18,*(undefined4 *)(*(int *)(iVar4 + 4) + 0xc));
  iVar3 = 0;
  iVar2 = 2;
  do {
    if (*(int *)(iVar3 + DAT_08006f44 + 8) != 0) {
      FUN_08128f84(iVar3 + DAT_08006f44,iVar4);
    }
    iVar3 = iVar3 + 0x88;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(int *)DAT_08006f48 = (ushort)DAT_08006f4c & *(int *)DAT_08006f48;
  return;
}


