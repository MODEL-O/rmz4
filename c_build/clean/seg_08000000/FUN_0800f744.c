// undefined FUN_0800f744(void)
// entry 0x800f744


void FUN_0800f744(int param_1)

{
  int iVar1;
  int local_18;
  int local_14;
  
  iVar1 = DAT_0800f7a4;
  local_18 = (*(int *)(param_1 + 0x2c) >> 8) + *(int *)(param_1 + 0x34) + 0x1e0;
  local_14 = (*(int *)(param_1 + 0x30) >> 8) + *(int *)(param_1 + 0x38);
  FUN_08005050(param_1 + 0x14,&local_18,
               (*(ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_0800f7a4) & 0x1f00) * 8 +
               0x6000000,DAT_0800f7a8);
  FUN_0800531c(param_1 + 0x14,(*(uint *)(param_1 + 0x5c) >> 4) * 4 + iVar1 + 8);
  return;
}


