// undefined FUN_080809cc(void)
// entry 0x80809cc


undefined4 FUN_080809cc(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,0x1800);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 +
                         ((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                         *(undefined1 *)(param_1 + 0x70)) + DAT_08080a38) * 8 +
                        DAT_08080a34)));
  FUN_08081184(param_1);
  return in_lr;
}


