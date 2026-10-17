// undefined FUN_080ec994(void)
// entry 0x80ec994


undefined4 FUN_080ec994(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (((*(uint *)(param_1 + 0x14) & 0x20000) != 0) && (*DAT_080ec9e0 != 0)) {
      FUN_0803a578(*DAT_080ec9e0,8,0);
      *(undefined1 *)(iVar1 + 0xb6) = 1;
      *(undefined4 *)(iVar1 + 0xbc) = *param_2;
      *(undefined4 *)(iVar1 + 0xc0) = param_2[1];
    }
  }
  return in_lr;
}


