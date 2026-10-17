// undefined FUN_0805d2d0(void)
// entry 0x805d2d0


undefined4 FUN_0805d2d0(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  undefined1 auStack_24 [8];
  int local_1c;
  int local_18;
  
  FUN_08129258(auStack_24,DAT_0805d3b8,6);
  local_1c = *DAT_0805d3bc;
  local_18 = DAT_0805d3bc[1];
  bVar1 = *(byte *)(param_1 + 10);
  iVar2 = *DAT_0805d3c0;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0805ee6c(param_1,auStack_24[(uint)*(byte *)(param_1 + 0x10) * 2]);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x58) + DAT_0805d3c4;
    *(undefined4 *)(param_1 + 0x60) = DAT_0805d3c8;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_0805d3d0) * 4 +
                               DAT_0805d3cc)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 + DAT_0805d3d4) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if ((iVar2 == 0) || ((*(uint *)(param_1 + 0x8c) & 0x800) == 0)) {
    *(undefined1 *)(param_1 + 0xe) = 7;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x60) = 0;
    *(uint *)(iVar2 + 0x54) =
         *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0xc0) +
         local_1c * ((bVar1 >> 4 & 1) * 2 + -1);
    *(int *)(iVar2 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0xc4) + local_18;
    if (*(int *)(param_1 + 0x58) <= *(int *)(param_1 + 0x5c)) {
      *(undefined1 *)(param_1 + 0xe) = 4;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}


