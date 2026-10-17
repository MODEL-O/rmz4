// undefined FUN_0800f830(void)
// entry 0x800f830


undefined4 FUN_0800f830(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  if ((*(byte *)(DAT_0800f85c + DAT_0800f860) & 0xf) == 2) {
    *(uint *)(param_1 + 0x4c) = (uint)(*(ushort *)(param_1 + 0x6c) >> 4);
    FUN_08007638(param_1,param_2);
  }
  else {
    FUN_08007638(param_1,param_2);
  }
  return in_lr;
}


