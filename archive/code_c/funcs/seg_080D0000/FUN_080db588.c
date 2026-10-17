// undefined FUN_080db588(void)
// entry 0x80db588


undefined4 FUN_080db588(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cd28();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0);
  FUN_0801cff0(param_1);
  if (*(byte *)(param_1 + 0x7c) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar1 = *(byte *)(param_1 + 0x7c) & 1;
  *(byte *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  *(undefined1 *)(param_1 + 0x25) = 0x19;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x54);
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x58) + 1;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined4 *)(param_1 + 0x60) = 0;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080db620);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080db624(param_1);
  return in_lr;
}


