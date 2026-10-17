// undefined FUN_08063bf0(void)
// entry 0x8063bf0


undefined4 FUN_08063bf0(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_1c [3];
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08065a94(param_1,0xc);
    bVar1 = (bVar1 >> 4 & 1) + 1 & 1;
    *(byte *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb4) * 2 + DAT_08063cd8) * 4 +
                               DAT_08063cd4)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 + DAT_08063cdc))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    local_1c[0] = *DAT_08063ce0;
    local_1c[1] = DAT_08063ce0[1];
    local_1c[2] = DAT_08063ce0[2];
    iVar2 = FUN_08066160(param_1,&stack0xfffffff0);
    *(char *)(param_1 + 0xe0) = (char)local_1c[iVar2];
    *(undefined1 *)(param_1 + 0xd) = 0xd;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


