// undefined FUN_080b6668(void)
// entry 0x80b6668


undefined4 FUN_080b6668(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2))
  {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080b66bc));
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b66a4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    FUN_080b690c(param_1);
  }
  return in_lr;
}


