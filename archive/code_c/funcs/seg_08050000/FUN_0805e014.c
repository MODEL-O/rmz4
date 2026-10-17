// undefined FUN_0805e014(void)
// entry 0x805e014


undefined4 FUN_0805e014(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 in_lr;
  int local_28 [3];
  undefined4 local_1c;
  
  iVar2 = *DAT_0805e070;
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0805ee6c(param_1,0);
    *(undefined4 *)(param_1 + 0x60) = 0x280;
    *(undefined4 *)(param_1 + 0x68) = 0x20;
    *(uint *)(param_1 + 0x5c) =
         (uint)(*(int *)(param_1 + 0xb4) + DAT_0805e074 <= *(int *)(param_1 + 0x58));
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x58);
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  else if (*(char *)(param_1 + 0xf) == '\x01') {
    if (*(int *)(param_1 + 0xcc) == 0) {
      *(undefined1 *)(param_1 + 0xf) = 2;
    }
    if (*(char *)(*(int *)(param_1 + 0xcc) + 0xb9) != '\0') {
      FUN_0805ee6c(param_1,0xf);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  piVar6 = (int *)(param_1 + 0xcc);
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_0805e104) * 4 +
                               DAT_0805e100)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 + DAT_0805e108) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  iVar4 = *piVar6;
  if (iVar4 != 0) {
    if (*(byte *)(iVar4 + 0xc) < 2) {
      if (*(char *)(iVar4 + 0xb9) != '\0') {
        local_28[0] = -1;
        if (*(int *)(*DAT_0805e1e0 + 0x54) < *(int *)(iVar4 + 0x54)) {
          local_28[0] = 1;
        }
        local_28[0] = local_28[0] * 0x240;
        local_28[1] = 0;
        if ((iVar2 != 0) && ((*(ushort *)(DAT_0805e1e4 + 8) & 8) == 0)) {
          piVar3 = (int *)(iVar2 + 0x1bc);
          *piVar3 = *piVar3 + local_28[0];
        }
        if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
          iVar2 = *(int *)(param_1 + 0x54);
          uVar5 = DAT_0805e1ec * *DAT_0805e1e8 + DAT_0805e1f0;
          *DAT_0805e1e8 = uVar5 & 0x7fffffff;
          local_28[2] = iVar2 + ((bVar1 >> 4 & 1) * 2 + -1) * 0x8000 +
                        (0x40 - ((uVar5 & 0x7fffffff) >> 0x10 & 0x7f)) * 0x100;
          local_1c = *(undefined4 *)(param_1 + 0xb4);
          FUN_080de31c(local_28 + 2,local_28,0,0);
        }
      }
    }
    else {
      *piVar6 = 0;
    }
  }
  uVar5 = (uint)*(byte *)(param_1 + 0x13) -
          (*(int *)(param_1 + 100) - (*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c)) >> 0x1f)
          & 1;
  iVar2 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2 * (uVar5 * 2 + -1);
  if (*(byte *)(param_1 + 0x13) == 0) {
    iVar2 = iVar2 - *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar2;
    if (iVar2 < 0x20) {
      *(undefined4 *)(param_1 + 0x60) = 0x20;
      *(undefined1 *)(param_1 + 0x13) = 1;
      *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1U & 1;
    }
  }
  else {
    iVar2 = iVar2 + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x280 < iVar2) {
      if ((uVar5 == 0) || (*piVar6 != 0)) {
        *(undefined4 *)(param_1 + 0x60) = 0x280;
        *(undefined1 *)(param_1 + 0x13) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
    }
  }
  return in_lr;
}


