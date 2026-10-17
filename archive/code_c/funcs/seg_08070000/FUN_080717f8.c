// undefined FUN_080717f8(void)
// entry 0x80717f8


undefined4 FUN_080717f8(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x128);
    FUN_080736c4(param_1,9);
    *(undefined1 *)(param_1 + 0x12) = 0xc;
    *(undefined1 *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar2 = (int)*(char *)(param_1 + 0x71);
  FUN_08005784(param_1 + 0x74,
               *(int *)(iVar2 * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_08071914) * 4 +
                               DAT_08071910)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb9) * 4 + DAT_08071918))
                              + iVar2) * 0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if ((*(char *)(param_1 + 0x13) != '\0') && (*(char *)(param_1 + 0x71) == '\x01')) {
    uVar1 = 0;
    do {
      local_20 = *(int *)(param_1 + 0x54) + DAT_0807191c;
      local_1c = *(int *)(param_1 + 0x58) + DAT_08071920;
      FUN_080c13e4(param_1,&local_20,uVar1 & 0xff,0);
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 3);
    uVar1 = 0;
    do {
      local_20 = *(int *)(param_1 + 0x54) + 0x1800;
      local_1c = *(int *)(param_1 + 0x58) + DAT_08071920;
      FUN_080c13e4(param_1,&local_20,uVar1 & 0xff,1);
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 3);
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  if ((*(char *)(param_1 + 0x73) == '\x03') && (*(char *)(param_1 + 0x12) == '\0')) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


