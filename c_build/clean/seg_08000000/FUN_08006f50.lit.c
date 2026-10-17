// undefined FUN_08006f50(void)
// entry 0x8006f50


undefined4 FUN_08006f50(int param_1,int param_2)

{
  int iVar1;
  param_2 = param_2 >> 0xc;
  if ((((uint)(param_1 >> 0xc) < 0x771) && (-1 < param_2)) && (param_2 <= 0x000004f5)) {
    iVar1 = (int)(short)((ushort *)(0x02000ab0 + 0x7e0))
                        [param_2 * (uint)*(ushort *)(0x02000ab0 + 0x7e0) + (param_1 >> 0xc) + 2];
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}


