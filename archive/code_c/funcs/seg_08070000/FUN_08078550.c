// undefined FUN_08078550(void)
// entry 0x8078550


undefined4 FUN_08078550(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(*(int *)(param_1 + 200) + 0xb5) = 3;
    *(undefined1 *)(*(int *)(param_1 + 200) + 0xb6) = 1;
    FUN_08078fdc(param_1,0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xc4) * 2 + DAT_080785e4) * 4 +
                        DAT_080785e0)));
  FUN_08078f28(param_1);
  if ((*(char *)(*(int *)(param_1 + 200) + 0xb4) != '\0') &&
     (*(char *)(*(int *)(param_1 + 200) + 0xb6) == '\0')) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


