// undefined FUN_0800f830(void)
// entry 0x800f830


void FUN_0800f830(int param_1,undefined4 param_2)

{
  if ((*(byte *)(0x02000ab0 + 0x0002c010) & 0xf) == 2) {
    *(uint *)(param_1 + 0x4c) = (uint)(*(ushort *)(param_1 + 0x6c) >> 4);
    FUN_08007638(param_1,param_2);
  }
  else {
    FUN_08007638(param_1,param_2);
  }
  return;
}


