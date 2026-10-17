// undefined FUN_08112f6c(void)
// entry 0x8112f6c


undefined4 FUN_08112f6c(int *param_1)

{
  char cVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  undefined4 in_lr;
  undefined4 local_2c [2];
  int local_24;
  
  cVar1 = *DAT_08113008;
  local_24 = 0;
  if (((*(short *)((int)param_1 + DAT_0811300c) != 0) || (*DAT_08113010 != 0)) ||
     (*DAT_08113014 != '\0')) {
    local_24 = 1;
  }
  *(int *)((int)param_1 + DAT_08113018) = *(int *)((int)param_1 + DAT_08113018) + 1;
  FUN_08003470(param_1 + 0x268);
  *DAT_0811301c = 0;
  local_2c[0] = 0;
  FUN_08128be0(local_2c,DAT_08113020,DAT_08113024);
  puVar3 = DAT_0811302c;
  iVar10 = DAT_08113028;
  if ((((*(byte *)(DAT_08113028 + 8) & 0x80) != 0) && (local_24 == 0)) && (cVar1 == '\0')) {
    uVar2 = *DAT_0811302c;
    if (uVar2 == 0) {
      FUN_08002a50();
      *(byte *)(iVar10 + 8) = *(byte *)(iVar10 + 8) & 0x7f;
      iVar10 = FUN_08002bb4(0x26);
      if (iVar10 != 0) {
        FUN_08002b5c(0x26);
      }
    }
    else {
      if ((uVar2 & 0x8000) == 0) {
        if (uVar2 < 0xb4) {
          iVar10 = FUN_08002bb4(0x25);
          if (iVar10 != 0) {
            FUN_08002b5c(0x25);
          }
          iVar10 = FUN_08002bb4(0x26);
          if (iVar10 == 0) {
            FUN_08002b10(0x26);
          }
        }
      }
      else {
        FUN_08002a1c();
        FUN_08002b10(0x25);
        *puVar3 = (ushort)DAT_08113030 & *puVar3;
      }
      *DAT_08113064 = *DAT_08113064 + -1;
    }
  }
  uVar9 = 0;
  if ((local_24 != 0) || (cVar1 != '\0')) {
    uVar9 = 1;
  }
  iVar10 = FUN_0801f2e0(uVar9);
  piVar12 = DAT_081131a0;
  if (iVar10 == 0) {
    if (local_24 == 0) {
      if ((*(ushort *)(DAT_0811319c + 8) & 1) != 0) {
        if (((*(byte *)(DAT_0811319c + 0x12) & 1) == 0) &&
           ((*(ushort *)(DAT_0811319c + 8) & 4) == 0)) {
          if ((uint)DAT_081131a0[2] <= DAT_081131a4) {
            DAT_081131a0[2] = DAT_081131a0[2] + 1;
          }
          uVar11 = *(uint *)(*piVar12 + 8);
          if (uVar11 <= DAT_081131a8) {
            *(uint *)(*piVar12 + 8) = uVar11 + 1;
          }
        }
      }
      FUN_0802ad78();
      if (cVar1 == '\0') {
        FUN_0801c7cc(*DAT_081131ac);
        FUN_0801c7cc(*DAT_081131b0);
        FUN_0801c7cc(*DAT_081131b4);
        FUN_0801c79c(*DAT_081131b8);
        FUN_080bd36c();
        FUN_0801c79c(*DAT_081131bc);
        FUN_0801c79c(*DAT_081131c0);
      }
      puVar4 = DAT_081131c4;
      FUN_0801c7cc(*DAT_081131c4);
      FUN_080d0be0();
      FUN_0800560c();
      if (cVar1 == '\0') {
        FUN_0801c80c(*DAT_081131ac);
        FUN_0801c80c(*DAT_081131b0);
        FUN_0801c80c(*DAT_081131b4);
        FUN_0801c80c(*DAT_081131b8);
        FUN_0801c80c(*DAT_081131c8);
        FUN_0801c80c(*DAT_081131bc);
        FUN_0801c80c(*DAT_081131c0);
        FUN_0801c80c(*puVar4);
      }
    }
    else {
      FUN_0800560c();
    }
    FUN_08114b28(param_1);
    FUN_08005650();
    puVar4 = DAT_08113364;
    FUN_0801c874(*DAT_08113364);
    puVar5 = DAT_08113368;
    FUN_0801c874(*DAT_08113368);
    puVar6 = DAT_0811336c;
    FUN_0801c874(*DAT_0811336c);
    puVar7 = DAT_08113370;
    FUN_0801c874(*DAT_08113370);
    puVar8 = DAT_08113374;
    FUN_0801c874(*DAT_08113374);
    piVar12 = param_1 + 0x268;
    FUN_0801ca0c(*puVar4,piVar12);
    FUN_0801ca0c(*puVar5,piVar12);
    FUN_0801ca0c(*puVar6,piVar12);
    FUN_0801ca0c(*puVar7,piVar12);
    FUN_0801c924(*DAT_08113378,piVar12);
    FUN_0803a7dc(piVar12);
    FUN_0801c924(*DAT_0811337c,piVar12);
    FUN_0801c924(*DAT_08113380,piVar12);
    FUN_0801ca0c(*puVar8,piVar12);
    FUN_08114c18(param_1);
    FUN_0810e4cc();
    FUN_08114c74(param_1);
    if (((*(ushort *)(DAT_08113384 + 4) & 8) != 0) && (*param_1 == 0x400)) {
      if ((((*(uint *)(*(int *)((int)param_1 + DAT_08113388) + 0x8c) & 0x200) == 0) &&
          (*(short *)(*(int *)((int)param_1 + DAT_08113388) + 0xa4) != 0)) &&
         ((*(short *)(DAT_0811338c + 2) == 0 || (*(char *)(DAT_0811338c + 4) == '\0')))) {
        if (((*(ushort *)(DAT_08113390 + 8) & 0x40) == 0) &&
           ((((((*(ushort *)(DAT_08113390 + 8) & 1) != 0 &&
               ((*(byte *)(DAT_08113390 + 0x12) & 1) == 0)) && (*(int *)(DAT_08113390 + 0x154) == 0)
              ) && ((*(char *)(DAT_08113394 + 2) == '\0' && (cVar1 == '\0')))) &&
            ((*DAT_08113398 == 0 && (*DAT_0811339c == 0)))))) {
          *(undefined2 *)((int)param_1 + DAT_081133a0) = 1;
          FUN_081126ac(param_1,0x500);
        }
      }
    }
    uVar9 = 0;
    if ((local_24 != 0) || (cVar1 != '\0')) {
      uVar9 = 1;
    }
    FUN_0801f460(uVar9);
    if ((local_24 == 0) && (cVar1 == '\0')) {
      if ((*DAT_081133a4 != '\0') && ((*(byte *)(DAT_081133a8 + 1) & 2) == 0)) {
        FUN_08002b10(0x29);
      }
      *DAT_081133a4 = '\0';
    }
    *DAT_081133ac = *(undefined1 *)(DAT_081133a8 + 2);
  }
  else {
    *DAT_081130bc = (ushort)DAT_081130c0 & *DAT_081130bc | 0x100;
    FUN_081126ac(param_1,0x800);
  }
  return in_lr;
}


