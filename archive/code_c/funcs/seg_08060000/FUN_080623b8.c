// undefined FUN_080623b8(void)
// entry 0x80623b8


undefined4 FUN_080623b8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = DAT_08062474;
  local_18 = *DAT_08062470;
  local_14 = DAT_08062470[1];
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0xd0) = *(int *)(DAT_08062474 + 0x38) + DAT_08062478;
    *(int *)(param_1 + 0xd4) = *(int *)(iVar1 + 0x3c) + DAT_0806247c;
    iVar2 = 0;
    if (*(short *)(iVar1 + -0xe8) == 0x10) {
      iVar2 = 4;
    }
    FUN_08002b10(*(undefined2 *)((int)&local_18 + iVar2));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb4) * 2 + DAT_08062484) * 4 +
                               DAT_08062480)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 + DAT_08062488))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


