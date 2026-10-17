// undefined FUN_080627d4(void)
// entry 0x80627d4


undefined4 FUN_080627d4(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 in_lr;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 *local_2c [2];
  int local_24;
  int local_20;
  
  uVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x10a);
    FUN_08065a94(param_1,2);
    *(undefined1 *)(param_1 + 0x12) = 0x40;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb4) * 2 + DAT_08062938) * 4 +
                               DAT_08062934)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 + DAT_0806293c))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  piVar5 = (int *)(param_1 + 0xbc);
  if ((*(char *)(param_1 + 0x13) == '\0') && (*(char *)(param_1 + 0x73) == '\x04')) {
    FUN_08129258(auStack_38,PTR_DAT_08062940,2);
    FUN_08129258(auStack_34,PTR_DAT_08062944,2);
    FUN_08129258(auStack_30,PTR_DAT_08062948,2);
    local_2c[0] = auStack_34;
    local_2c[1] = auStack_30;
    uVar2 = FUN_0806635c(local_2c[DAT_08062954 <
                                  (uint)((*(int *)(*DAT_0806294c + 0x54) - *(int *)(param_1 + 0x54))
                                        + DAT_08062950)],2);
    local_24 = *(int *)(param_1 + 0x54) + (uVar4 * 2 + -1) * 0x3200;
    local_20 = *(int *)(param_1 + 0x58) + DAT_08062958;
    iVar3 = FUN_0809af24(param_1,&local_24,auStack_38[uVar2 & 0xff],uVar4);
    *piVar5 = iVar3;
    *(undefined1 *)(param_1 + 0x13) = 1;
  }
  if ((*piVar5 != 0) && ((*(uint *)(*piVar5 + 0x8c) & 0x800) != 0)) {
    *piVar5 = 0;
  }
  if ((*(char *)(param_1 + 0x12) == '\0') && (*(char *)(param_1 + 0x13) != '\0')) {
    if (*piVar5 == 0) {
      uVar1 = 2;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0xe) = uVar1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


