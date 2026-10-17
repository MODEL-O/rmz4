// undefined FUN_080d9ac8(void)
// entry 0x80d9ac8


undefined4 FUN_080d9ac8(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  uVar1 = DAT_080d9b4c * *DAT_080d9b48 + DAT_080d9b50;
  local_1c = *(int *)(param_1 + 0x54) + (((uVar1 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
  uVar1 = DAT_080d9b4c * (uVar1 & 0x7fffffff) + DAT_080d9b50;
  *DAT_080d9b48 = uVar1 & 0x7fffffff;
  local_18 = *(int *)(param_1 + 0x58) + (((uVar1 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100 +
             DAT_080d9b54;
  FUN_080d0c88(1,&local_1c);
  FUN_080d9b5c(param_1);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d9b58);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


