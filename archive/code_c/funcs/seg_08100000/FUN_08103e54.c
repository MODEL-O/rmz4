// undefined FUN_08103e54(void)
// entry 0x8103e54


undefined4 FUN_08103e54(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08103e98));
  if (0x2000 < *(int *)(DAT_08103e9c + 0x38) - (*(int *)(param_1 + 0x54) + 0x7800)) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08103ea0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
  }
  return in_lr;
}


