// undefined FUN_080b55f8(void)
// entry 0x80b55f8


undefined8 FUN_080b55f8(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_c [3];
  
  local_c[0] = *DAT_080b563c;
  local_c[1] = DAT_080b563c[1];
  uVar2 = (uint)*(byte *)(param_1 + 0xb6);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar2 = uVar2 ^ 1;
  }
  local_c[2] = in_lr;
  sVar1 = FUN_08007c7c(*(int *)(param_1 + 0x54) + local_c[uVar2] * 0x100,
                       *(int *)(param_1 + 0x58) + DAT_080b5640);
  return CONCAT44(local_c[2],(uint)(sVar1 != 0));
}


