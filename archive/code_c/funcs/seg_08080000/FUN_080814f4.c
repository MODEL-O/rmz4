// undefined FUN_080814f4(void)
// entry 0x80814f4


undefined4 FUN_080814f4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    if (*(char *)(param_1 + 0xd) == '\0') {
      FUN_08005784(param_1 + 0x74,DAT_0808157c);
    }
    else {
      FUN_08005784(param_1 + 0x74,
                   *(undefined4 *)
                    (*(char *)(param_1 + 0x71) * 4 +
                    *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 +
                             ((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                             *(undefined1 *)(param_1 + 0x70)) + DAT_0808154c) * 8 +
                            DAT_08081548)));
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  iVar1 = FUN_08081c94(param_1);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


