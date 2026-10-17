// undefined FUN_0806420c(void)
// entry 0x806420c


undefined4 FUN_0806420c(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(int *)(param_1 + 0xd8) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0xd8) + 0xb4) = 1;
    }
    FUN_08065a94(param_1,0x16);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb4) * 2 + DAT_080642b4) * 4 +
                               DAT_080642b0)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 + DAT_080642b8))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (((*(char *)(param_1 + 0x12) == '\0') ||
      (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) &&
     (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined1 *)(param_1 + 0xe) = 4;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


