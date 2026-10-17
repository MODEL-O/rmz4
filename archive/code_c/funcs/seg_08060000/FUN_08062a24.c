// undefined FUN_08062a24(void)
// entry 0x8062a24


undefined4 FUN_08062a24(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_1c [3];
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08065a94(param_1,4);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb4) * 2 + DAT_08062acc) * 4 +
                               DAT_08062ac8)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 + DAT_08062ad0))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    local_1c[0] = *DAT_08062ad4;
    local_1c[1] = DAT_08062ad4[1];
    local_1c[2] = DAT_08062ad4[2];
    iVar1 = FUN_08066160(param_1,&stack0xfffffff0);
    *(char *)(param_1 + 0xe0) = (char)local_1c[iVar1];
    *(undefined1 *)(param_1 + 0xd) = 0xd;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


