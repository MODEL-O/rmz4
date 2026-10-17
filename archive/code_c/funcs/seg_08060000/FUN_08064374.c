// undefined FUN_08064374(void)
// entry 0x8064374


undefined4 FUN_08064374(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  undefined4 local_1c [3];
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08065a94(param_1,0x19);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb4) * 2 + DAT_08064444) * 4 +
                               DAT_08064440)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 + DAT_08064448))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  piVar4 = (int *)(param_1 + 0xd8);
  if (*piVar4 != 0) {
    if (1 < *(byte *)(*piVar4 + 0xc)) {
      *piVar4 = 0;
    }
    if (*piVar4 != 0) {
      return in_lr;
    }
  }
  uVar2 = *DAT_0806444c * DAT_08064450 + DAT_08064454;
  *DAT_0806444c = uVar2 & 0x7fffffff;
  uVar2 = (uVar2 & 0x7fffffff) >> 0x10 & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar2;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
  if (uVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if (uVar2 == 0) {
    iVar3 = *(int *)(param_1 + 0xd0) + 0xc800;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xd0) + 0x2800;
  }
  *(int *)(param_1 + 0x54) = iVar3;
  local_1c[0] = *DAT_080644ac;
  local_1c[1] = DAT_080644ac[1];
  local_1c[2] = DAT_080644ac[2];
  iVar3 = FUN_08066160(param_1,&stack0xfffffff0);
  *(char *)(param_1 + 0xe0) = (char)local_1c[iVar3];
  *(undefined1 *)(param_1 + 0xd) = 0xd;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return in_lr;
}


