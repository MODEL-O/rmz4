// undefined FUN_0805e838(void)
// entry 0x805e838


undefined4 FUN_0805e838(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  int local_28 [3];
  undefined4 local_1c;
  
  iVar7 = *DAT_0805e8f0;
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0805ee6c(param_1,0x31);
    *(undefined4 *)(param_1 + 0x60) = 0x280;
    *(undefined4 *)(param_1 + 0x68) = 0x20;
    *(uint *)(param_1 + 0x5c) =
         (uint)(*(int *)(param_1 + 0xb4) + DAT_0805e8f4 <= *(int *)(param_1 + 0x58));
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x58);
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_0805e8fc) * 4 +
                               DAT_0805e8f8)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 + DAT_0805e900) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  piVar3 = (int *)(param_1 + 0xcc);
  if (*piVar3 != 0) {
    if (*(byte *)(*piVar3 + 0xc) < 3) {
      iVar5 = (bVar1 >> 4 & 1) * 2 + -1;
      local_28[0] = iVar5 * 0x180;
      local_28[1] = 0;
      if ((iVar7 != 0) && ((*(ushort *)(DAT_0805e9c0 + 8) & 8) == 0)) {
        piVar4 = (int *)(iVar7 + 0x1bc);
        *piVar4 = *piVar4 + local_28[0];
      }
      cVar2 = FUN_08129198(*(undefined1 *)(param_1 + 0x12),0xf);
      if (cVar2 == '\0') {
        iVar7 = *(int *)(param_1 + 0x54);
        uVar6 = DAT_0805e9c8 * *DAT_0805e9c4 + DAT_0805e9cc;
        *DAT_0805e9c4 = uVar6 & 0x7fffffff;
        local_28[2] = iVar7 + iVar5 * 0x8000 +
                      (0x40 - ((uVar6 & 0x7fffffff) >> 0x10 & 0x7f)) * 0x100;
        local_1c = *(undefined4 *)(param_1 + 0xb4);
        FUN_080de31c(local_28 + 2,local_28,0,0);
      }
    }
    else {
      *piVar3 = 0;
    }
  }
  uVar6 = (uint)*(byte *)(param_1 + 0x13) -
          (*(int *)(param_1 + 100) - (*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c)) >> 0x1f)
          & 1;
  iVar7 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar7 * (uVar6 * 2 + -1);
  if (*(byte *)(param_1 + 0x13) == 0) {
    iVar7 = iVar7 - *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar7;
    if (iVar7 < 0x20) {
      *(undefined4 *)(param_1 + 0x60) = 0x20;
      *(undefined1 *)(param_1 + 0x13) = 1;
      *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1U & 1;
    }
  }
  else {
    iVar7 = iVar7 + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar7;
    if (0x280 < iVar7) {
      if ((uVar6 == 0) || (*piVar3 != 0)) {
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


