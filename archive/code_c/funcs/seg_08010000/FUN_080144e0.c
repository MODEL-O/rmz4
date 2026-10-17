// undefined FUN_080144e0(void)
// entry 0x80144e0


undefined4 FUN_080144e0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  if ((*(byte *)(DAT_08014504 + DAT_08014508) & 0xf) == 3) {
    FUN_08007638(param_1,param_2);
  }
  else {
    iVar1 = param_1 + 0x14;
    local_1c = (*(int *)(param_1 + 0x2c) >> 8) + *(int *)(param_1 + 0x34);
    local_18 = (*(int *)(param_1 + 0x30) >> 8) + *(int *)(param_1 + 0x38) + 0x640;
    if ((((*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x3c)) + 0xfU < 0x1f) &&
        ((*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x40)) + 0xfU < 0x1f)) &&
       (*(char *)(DAT_08014504 + DAT_08014570) == '\0')) {
      FUN_08005124(iVar1,&local_1c,
                   (*(ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_080145c8) & 0x1f00) * 8 +
                   0x6000000,DAT_08014504 + 0x7e0);
    }
    else {
      FUN_08005050(iVar1,&local_1c,
                   (*(ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_08014574) & 0x1f00) * 8 +
                   0x6000000,DAT_08014578);
    }
    *(undefined1 *)(DAT_080145cc + DAT_080145d0) = 0;
    FUN_0800531c(iVar1,(*(uint *)(param_1 + 0x5c) >> 4) * 4 + DAT_080145d4);
  }
  return in_lr;
}


