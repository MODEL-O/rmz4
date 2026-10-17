// undefined FUN_080622ec(void)
// entry 0x80622ec


undefined4 FUN_080622ec(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar1 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar1 + DAT_080623a8;
    FUN_08065a94(param_1,1);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cfc8(param_1,CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)),
               (short)*(char *)(param_1 + 0x71),*(char *)(param_1 + 0x72) + 1);
  FUN_0801cff0(param_1);
  iVar1 = (int)*(char *)(param_1 + 0x71);
  FUN_08005784(param_1 + 0x74,
               *(int *)(iVar1 * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb4) * 2 + DAT_080623b0) * 4 +
                               DAT_080623ac)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 + DAT_080623b4))
                              + iVar1) * 0x18);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


