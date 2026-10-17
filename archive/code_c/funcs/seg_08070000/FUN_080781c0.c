// undefined FUN_080781c0(void)
// entry 0x80781c0


undefined4 FUN_080781c0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08078fdc(param_1,2);
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xc4) * 2 + DAT_08078244) * 4 +
                        DAT_08078240)));
  FUN_08078f28(param_1);
  if (((*(char *)(param_1 + 0x12) == '\0') ||
      (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) &&
     (*(char *)(param_1 + 0x73) == '\x04')) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


