// undefined FUN_080889a8(void)
// entry 0x80889a8


undefined4 FUN_080889a8(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 in_lr;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  uVar1 = DAT_08088a34 * *DAT_08088a30 + DAT_08088a38;
  local_24 = *(int *)(param_1 + 0x54) + (((uVar1 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
  uVar1 = DAT_08088a34 * (uVar1 & 0x7fffffff) + DAT_08088a38;
  *DAT_08088a30 = uVar1 & 0x7fffffff;
  local_20 = *(int *)(param_1 + 0x58) + (((uVar1 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
  FUN_080d0c88(1,&local_24);
  FUN_08088d18(param_1);
  if (*(int *)(DAT_08088a3c + DAT_08088a40) < *(int *)(param_1 + 0x58)) {
    FUN_08002b10(0x31);
    local_1c = 0x800;
    local_18 = 0;
    FUN_08088ff0(param_1 + 0x54,&local_1c,3,4);
  }
  else {
    FUN_08002b10(0x2a);
  }
  FUN_0802ab88(4,0x2f,param_1 + 0x54);
  if (*(ushort *)(DAT_08088a88 + 0xc) <= DAT_08088a8c) {
    *(ushort *)(DAT_08088a88 + 0xc) = *(ushort *)(DAT_08088a88 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08088a90);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


