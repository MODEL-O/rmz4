// undefined FUN_08006f50(void)
// entry 0x8006f50


undefined8 FUN_08006f50(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  param_2 = param_2 >> 0xc;
  if ((((uint)(param_1 >> 0xc) < 0x771) && (-1 < param_2)) && (param_2 <= DAT_08006f70)) {
    iVar1 = (int)(short)((ushort *)(DAT_08006f90 + 0x7e0))
                        [param_2 * (uint)*(ushort *)(DAT_08006f90 + 0x7e0) + (param_1 >> 0xc) + 2];
  }
  else {
    iVar1 = -1;
  }
  return CONCAT44(in_lr,iVar1);
}


