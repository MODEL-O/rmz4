// undefined FUN_080369b8(void)
// entry 0x80369b8


undefined4 FUN_080369b8(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + DAT_080369f8) = *(byte *)(param_1 + DAT_080369f8) | 6;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + DAT_08036a00) * 4 + DAT_080369fc));
  *(undefined1 *)(param_1 + DAT_08036a08 + -7) =
       *(undefined1 *)((uint)*(byte *)(param_1 + DAT_08036a08) + DAT_08036a04);
  return in_lr;
}


