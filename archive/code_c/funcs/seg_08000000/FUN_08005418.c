// undefined FUN_08005418(void)
// entry 0x8005418


undefined8 FUN_08005418(int *param_1,uint param_2,int param_3,int param_4)

{
  undefined4 in_lr;
  
  return CONCAT44(in_lr,(uint)*(byte *)((uint)*(ushort *)
                                               ((param_4 * 0xf + (param_2 & 0xff) * 0x96 + param_3)
                                                * 2 + param_1[2]) * 2 + *param_1));
}


