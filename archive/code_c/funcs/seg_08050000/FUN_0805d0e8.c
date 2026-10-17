// undefined FUN_0805d0e8(void)
// entry 0x805d0e8


undefined4 FUN_0805d0e8(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 in_lr;
  undefined1 auStack_4c [8];
  int local_44 [4];
  int iStack_34;
  int iStack_30;
  int local_2c;
  int iStack_28;
  int iStack_24;
  int local_20;
  
  FUN_08129258(auStack_4c,DAT_0805d29c,6);
  piVar2 = DAT_0805d2a4;
  local_44[0] = *DAT_0805d2a0;
  local_44[1] = DAT_0805d2a0[1];
  local_44[2] = DAT_0805d2a0[2];
  local_44[3] = DAT_0805d2a0[3];
  iStack_34 = DAT_0805d2a0[4];
  iStack_30 = DAT_0805d2a0[5];
  local_2c = DAT_0805d2a0[6];
  iStack_28 = DAT_0805d2a0[7];
  iStack_24 = DAT_0805d2a0[8];
  local_20 = DAT_0805d2a0[9];
  bVar1 = *(byte *)(param_1 + 0x10);
  uVar8 = *(byte *)(param_1 + 10) >> 4 & 1;
  iVar3 = *DAT_0805d2a4;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x15c);
    iVar4 = *piVar2;
    *(int *)(param_1 + 0xc0) = *(int *)(iVar4 + 0x54) - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0xc4) = *(int *)(iVar4 + 0x58) - *(int *)(param_1 + 0x58);
    FUN_0805ee6c(param_1,auStack_4c[(uint)bVar1 * 2]);
    iVar4 = uVar8 * 2 + -1;
    *(int *)(param_1 + 0x5c) = iVar4 * 0x100;
    *(undefined4 *)(param_1 + 0x60) = DAT_0805d2a8;
    *(int *)(param_1 + 100) = iVar4 * -0x10;
    *(undefined4 *)(param_1 + 0x68) = 0x20;
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  pcVar7 = (char *)(param_1 + 0x71);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*pcVar7 * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_0805d2b0) * 4 +
                               DAT_0805d2ac)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 + DAT_0805d2b4) +
                              (int)*pcVar7) * 0x18);
  if ('\x01' < *pcVar7) {
    *(undefined1 *)(param_1 + 0x25) = 0xf;
  }
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar5;
    iVar6 = uVar8 * 2 + -1;
    iVar4 = *(int *)(param_1 + 0xd0) + iVar6 * 0x5800;
    if (0 < iVar6 * (iVar5 - iVar4)) {
      *(int *)(param_1 + 0x54) = iVar4;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    if (*(byte *)(param_1 + 0x12) < 0x11) {
      iVar4 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
      *(int *)(param_1 + 0x5c) = iVar4;
      if (iVar4 < 0) {
        *(undefined4 *)(param_1 + 0x5c) = 0;
      }
      iVar4 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
      *(int *)(param_1 + 0x60) = iVar4;
      if (iVar4 < 0) {
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
    }
  }
  if ((iVar3 == 0) || ((*(uint *)(param_1 + 0x8c) & 0x800) == 0)) {
    *(undefined1 *)(param_1 + 0xe) = 7;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 0x60) = 0;
    *(uint *)(iVar3 + 0x54) =
         *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0xc0) +
         local_44[*pcVar7 * 2] * (uVar8 * 2 + -1);
    *(int *)(iVar3 + 0x58) =
         *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0xc4) + local_44[*pcVar7 * 2 + 1];
    if ((*(char *)(param_1 + 0x73) == '\x03') && (*(char *)(param_1 + 0x12) == '\0')) {
      *(undefined1 *)(param_1 + 0xe) = 3;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}


