// undefined FUN_08078c94(void)
// entry 0x8078c94


undefined4 FUN_08078c94(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08078fdc(param_1,0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xc4) * 2 + DAT_08078d2c) * 4 +
                        DAT_08078d28)));
  FUN_08078f28(param_1);
  if ((((*(char *)(*(int *)(param_1 + 200) + 0xb4) != '\0') &&
       (*(char *)(*(int *)(param_1 + 200) + 0xb6) == '\0')) &&
      (*(char *)(*(int *)(param_1 + 0xcc) + 0xb8) != '\0')) &&
     (*(char *)(*(int *)(param_1 + 0xcc) + 0xb9) == '\0')) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


