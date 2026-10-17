// undefined FUN_08037844(void)
// entry 0x8037844


undefined4 FUN_08037844(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + DAT_08037884) = *(byte *)(param_1 + DAT_08037884) | 6;
  if ((byte)(*(char *)(param_1 + DAT_08037888) - 1U) < 3) {
    if (*(char *)(param_1 + DAT_08037888 + 0x56) == '\0') {
      *(undefined1 *)(param_1 + 0x150) = 9;
    }
    else {
      *(char *)(param_1 + DAT_08037888) = '\x04';
      *(undefined1 *)(param_1 + 0x102) = 0;
    }
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + DAT_080378b4) * 4 + DAT_080378b0));
  return in_lr;
}


