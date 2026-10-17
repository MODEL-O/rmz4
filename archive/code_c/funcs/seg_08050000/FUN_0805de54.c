// undefined FUN_0805de54(void)
// entry 0x805de54


undefined4 FUN_0805de54(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  int local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08001d30(DAT_0805deb0,
                 ((uint)*(ushort *)(DAT_0805deb4 + 0xa6) -
                 (uint)(*(ushort *)(DAT_0805deb0 + 6) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(DAT_0805deb8,
                 ((uint)*(ushort *)(DAT_0805debc + 0xa6) - (uint)*(byte *)(DAT_0805deb8 + 7)) * 0x20
                 + 0x200);
    if (*(int *)(param_1 + 0xcc) == 0) {
      local_14 = DAT_0805df64;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        local_14 = 0x3c00;
      }
      local_14 = *(int *)(param_1 + 0x54) + local_14;
      local_10 = *(undefined4 *)(param_1 + 0x58);
      uVar2 = *DAT_0805df68 * DAT_0805df6c + DAT_0805df70;
      *DAT_0805df68 = uVar2 & 0x7fffffff;
      iVar3 = FUN_080c4480(param_1,&local_14,0x11 < ((uVar2 & 0x7fffffff) >> 0x10 & 0x1f));
      *(int *)(param_1 + 0xcc) = iVar3;
    }
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_0805df78) * 4 +
                               DAT_0805df74)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 + DAT_0805df7c) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


