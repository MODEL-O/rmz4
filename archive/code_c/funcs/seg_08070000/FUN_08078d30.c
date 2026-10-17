// undefined FUN_08078d30(void)
// entry 0x8078d30


undefined4 FUN_08078d30(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0xcc) + 0xb6) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0xcc) + 0xb9) = 1;
    FUN_08078fdc(param_1,0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xc4) * 2 + DAT_08078dc0) * 4 +
                        DAT_08078dbc)));
  FUN_08078f28(param_1);
  if ((*(char *)(*(int *)(param_1 + 0xcc) + 0xb8) != '\0') &&
     (*(char *)(*(int *)(param_1 + 0xcc) + 0xb9) == '\0')) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


