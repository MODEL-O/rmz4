// undefined FUN_08005418(void)
// entry 0x8005418


undefined4 FUN_08005418(int *param_1,uint param_2,int param_3,int param_4)

{
  return (uint)*(byte *)((uint)*(ushort *)
                                               ((param_4 * 0xf + (param_2 & 0xff) * 0x96 + param_3)
                                                * 2 + param_1[2]) * 2 + *param_1);
}


