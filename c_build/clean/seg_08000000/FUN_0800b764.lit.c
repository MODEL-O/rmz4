// undefined FUN_0800b764(void)
// entry 0x800b764


void FUN_0800b764(int param_1)

{
  int iVar1;
  int local_18;
  int local_14;
  
  iVar1 = param_1 + 0x14;
  local_18 = (*(int *)(param_1 + 0x2c) >> 8) + *(int *)(param_1 + 0x34);
  local_14 = (*(int *)(param_1 + 0x30) >> 8) + *(int *)(param_1 + 0x38);
  if ((((*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x3c)) + 0xfU < 0x1f) &&
      ((*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x40)) + 0xfU < 0x1f)) &&
     (*(char *)(0x02000ab0 + 0x0002d02d) == '\0')) {
    FUN_08005124(iVar1,&local_18,
                 (*(ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + 0x02000a04) & 0x1f00) * 8 +
                 0x6000000,0x02000ab0 + 0x7e0);
  }
  else {
    FUN_08005050(iVar1,&local_18,
                 (*(ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + 0x02000a04) & 0x1f00) * 8 +
                 0x6000000,0x02001290);
  }
  *(undefined1 *)(0x02000ab0 + 0x0002d02d) = 0;
  FUN_0800531c(iVar1,(*(uint *)(param_1 + 0x5c) >> 4) * 4 + 0x02000a0c);
  return;
}


